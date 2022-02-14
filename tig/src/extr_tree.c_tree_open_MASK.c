
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct view {scalar_t__ lines; TYPE_2__* env; TYPE_1__* ops; int vid; int pos; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_6__ {char* prefix; int exec_dir; } ;
struct TYPE_5__ {scalar_t__* directory; int commit; } ;
struct TYPE_4__ {int id; } ;


 int FUNC_0 (struct view*,int ,char const**,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct view*,char*,int *) ;
 TYPE_3__ VAR_0 ;
 char* FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static enum status_code
FUNC_6(struct view *VAR_1, enum open_flags VAR_2)
{
 static const char *VAR_3[] = {
  "git", "ls-tree", "-l", "%(commit)", "--", "%(directory)", ((void*)0)
 };

 if (FUNC_5(VAR_1->env->commit))
  return FUNC_1("No tree exists for this commit");

 if (VAR_1->lines == 0 && VAR_0.prefix[0]) {
  char *VAR_4 = VAR_0.prefix;

  while (VAR_4 && *VAR_4) {
   char *VAR_5 = FUNC_3(VAR_4, '/');

   if (VAR_5)
    *VAR_5 = 0;
   FUNC_2(VAR_1, VAR_4, &VAR_1->pos);
   VAR_4 = VAR_5;
   if (VAR_5) {
    *VAR_5 = '/';
    VAR_4++;
   }
  }

 } else if (FUNC_4(VAR_1->vid, VAR_1->ops->id)) {
  VAR_1->env->directory[0] = 0;
 }

 return FUNC_0(VAR_1, VAR_0.exec_dir, VAR_3, VAR_2);
}
