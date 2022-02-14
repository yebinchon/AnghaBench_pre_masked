
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int current; } ;
struct view {int watch; TYPE_1__ sort; int lines; } ;
struct ref {int name; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 int ERROR_OUT_OF_MEMORY ;
 int OPEN_RELOAD ;
 char* REFS_ALL_NAME ;
 char* REFS_BRANCHES_NAME ;
 int REFS_FILTER_BRANCHES ;
 int REFS_FILTER_REMOTES ;
 int REFS_FILTER_TAGS ;
 char* REFS_REMOTES_NAME ;
 char* REFS_TAGS_NAME ;
 int SUCCESS ;
 int VIEW_COLUMN_REF ;
 int WATCH_HEAD ;
 int WATCH_REFS ;
 int begin_update (struct view*,int *,char const**,int ) ;
 struct ref* calloc (int,int) ;
 int die (char*) ;
 char* encoding_arg ;
 int foreach_ref (int (*) (struct view*,struct ref*),struct view*) ;
 int get_view_column (struct view*,int ) ;
 scalar_t__ is_initial_view (struct view*) ;
 scalar_t__* opt_cmdline_args ;
 int opt_mailmap ;
 struct ref* refs_all ;
 scalar_t__* refs_argv ;
 int refs_filter ;
 int refs_open_visitor (struct view*,struct ref*) ;
 int resort_view (struct view*,int) ;
 int strlen (char const*) ;
 int strncmp (scalar_t__,char*,int) ;
 int strncpy (int ,char const*,int) ;
 int watch_register (int *,int) ;

__attribute__((used)) static enum status_code
refs_open(struct view *view, enum open_flags flags)
{
 const char *refs_log[] = {
  "git", "log", encoding_arg, "--no-color", "--date=raw",
   opt_mailmap ? "--pretty=format:%H%x00%aN <%aE> %ad%x00%s"
        : "--pretty=format:%H%x00%an <%ae> %ad%x00%s",
   "--all", "--simplify-by-decoration", ((void*)0)
 };
 enum status_code code;
 const char *name = REFS_ALL_NAME;
 int i;

 if (is_initial_view(view)) {
  refs_argv = opt_cmdline_args;
  opt_cmdline_args = ((void*)0);
 }

 for (i = 0; refs_argv && refs_argv[i]; ++i) {
  if (!strncmp(refs_argv[i], "--tags", 6)) {
   refs_filter = REFS_FILTER_TAGS;
   name = REFS_TAGS_NAME;
  } else if (!strncmp(refs_argv[i], "--branches", 10)) {
   refs_filter = REFS_FILTER_BRANCHES;
   name = REFS_BRANCHES_NAME;
  } else if (!strncmp(refs_argv[i], "--remotes", 9)) {
   refs_filter = REFS_FILTER_REMOTES;
   name = REFS_REMOTES_NAME;
  }
 }

 if (!refs_all) {
  int name_length = strlen(name);
  struct ref *ref = calloc(1, sizeof(*refs_all) + name_length);

  if (!ref)
   return ERROR_OUT_OF_MEMORY;

  strncpy(ref->name, name, name_length);
  refs_all = ref;
 }

 code = begin_update(view, ((void*)0), refs_log, OPEN_RELOAD);
 if (code != SUCCESS)
  return code;

 if (!view->lines)
  if (!(view->sort.current = get_view_column(view, VIEW_COLUMN_REF)))
   die("Failed to setup the refs view");
 refs_open_visitor(view, refs_all);
 foreach_ref(refs_open_visitor, view);
 resort_view(view, 1);

 watch_register(&view->watch, WATCH_HEAD | WATCH_REFS);

 return SUCCESS;
}
