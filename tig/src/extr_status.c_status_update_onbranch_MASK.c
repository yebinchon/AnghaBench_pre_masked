
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int dummy; } ;
struct ref {char const* name; } ;
struct io {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {char* head; char* head_id; scalar_t__* remote; int git_dir; } ;


 int FUNC_0 (char const***) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 struct ref* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct io*,char*,int ,char const*) ;
 scalar_t__ FUNC_4 (struct io*,char*,int,int) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (char*,struct stat*) ;
 int FUNC_7 (char const*,char*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_8 (char*,int,char const*,scalar_t__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*,char const*,char const*,char const*,...) ;

__attribute__((used)) static void
FUNC_12(void)
{
 static const char *VAR_3[][3] = {
  { "rebase-apply/rebasing", "rebase-apply/head-name", "Rebasing" },
  { "rebase-apply/applying", "rebase-apply/head-name", "Applying mailbox to" },
  { "rebase-apply/", "rebase-apply/head-name", "Rebasing mailbox onto" },
  { "rebase-merge/interactive", "rebase-merge/head-name", "Interactive rebase" },
  { "rebase-merge/", "rebase-merge/head-name", "Rebase merge" },
  { "MERGE_HEAD", ((void*)0), "Merging" },
  { "BISECT_LOG", ((void*)0), "Bisecting" },
  { "HEAD", ((void*)0), "On branch" },
 };
 char VAR_4[VAR_0];
 struct stat VAR_5;
 int VAR_6;

 if (FUNC_5()) {
  FUNC_10(VAR_2, "Initial commit");
  return;
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_3); VAR_6++) {
  const char *VAR_7 = VAR_3[VAR_6][2];
  const char *VAR_8 = VAR_1.head;
  const char *VAR_9 = "";

  if (!FUNC_11(VAR_4, "%s/%s", VAR_1.git_dir, VAR_3[VAR_6][0]) ||
      FUNC_6(VAR_4, &VAR_5) < 0)
   continue;

  if (VAR_3[VAR_6][1]) {
   struct io VAR_10;

   if (FUNC_3(&VAR_10, "%s/%s", VAR_1.git_dir, VAR_3[VAR_6][1]) &&
       FUNC_4(&VAR_10, VAR_4, sizeof(VAR_4), 0)) {
    VAR_8 = VAR_4;
    if (!FUNC_7(VAR_8, "refs/heads/"))
     VAR_8 += FUNC_1("refs/heads/");
   }
  }

  if (!*VAR_8 && !FUNC_9(VAR_3[VAR_6][0], "HEAD") && *VAR_1.head_id) {
   const struct ref *VAR_11 = FUNC_2(VAR_1.head_id);

   VAR_7 = "HEAD detached at";
   VAR_8 = VAR_1.head_id;

   if (VAR_11 && FUNC_9(VAR_11->name, "HEAD"))
    VAR_8 = VAR_11->name;
  } else if (!VAR_3[VAR_6][1] && *VAR_1.remote) {
   if (FUNC_8(VAR_4, sizeof(VAR_4),
       VAR_8, VAR_1.remote)) {
    VAR_9 = VAR_4;
   }
  }

  const char *VAR_12 = *VAR_9 == '\0' ? "%s %s" : "%s %s. %s";

  if (!FUNC_11(VAR_2, VAR_12,
       VAR_7, VAR_8, VAR_9))
   FUNC_10(VAR_2, VAR_1.head);
  return;
 }

 FUNC_10(VAR_2, "Not currently on any branch");
}
