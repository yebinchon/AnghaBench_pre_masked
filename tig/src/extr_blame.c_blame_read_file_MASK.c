
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct view {scalar_t__ lines; TYPE_1__* env; int vid; } ;
struct buffer {size_t size; int data; } ;
struct blame_state {int done_reading; } ;
struct blame {scalar_t__* text; int * commit; } ;
struct TYPE_4__ {int exec_dir; } ;
struct TYPE_3__ {char* ref; char* file; scalar_t__ goto_lineno; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct view*,struct blame**,int ,size_t,int) ;
 scalar_t__ FUNC_1 (struct view*,int ,char const**,int ) ;
 int FUNC_2 (char*,int ) ;
 char* VAR_3 ;
 scalar_t__ FUNC_3 (struct view*) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct view*,scalar_t__) ;
 int FUNC_6 (scalar_t__*,int ,size_t) ;

__attribute__((used)) static bool
FUNC_7(struct view *VAR_5, struct buffer *VAR_6, struct blame_state *VAR_7)
{
 if (!VAR_6) {
  const char *VAR_8[] = {
   "git", "blame", VAR_3, "%(blameargs)", "--incremental",
    *VAR_5->env->ref ? VAR_5->env->ref : "--incremental", "--", VAR_5->env->file, ((void*)0)
  };

  if (FUNC_3(VAR_5))
   FUNC_2("No blame exist for %s", VAR_5->vid);

  if (VAR_5->lines == 0 || FUNC_1(VAR_5, VAR_4.exec_dir, VAR_8, VAR_1) != VAR_2) {
   FUNC_4("Failed to load blame data");
   return 1;
  }

  if (VAR_5->env->goto_lineno > 0) {
   FUNC_5(VAR_5, VAR_5->env->goto_lineno);
   VAR_5->env->goto_lineno = 0;
  }

  VAR_7->done_reading = 1;
  return 0;

 } else {
  struct blame *VAR_9;

  if (!FUNC_0(VAR_5, &VAR_9, VAR_0, VAR_6->size, 0))
   return 0;

  VAR_9->commit = ((void*)0);
  FUNC_6(VAR_9->text, VAR_6->data, VAR_6->size);
  VAR_9->text[VAR_6->size] = 0;
  return 1;
 }
}
