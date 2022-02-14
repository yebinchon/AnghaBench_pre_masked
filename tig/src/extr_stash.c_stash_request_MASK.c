
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int argv; TYPE_1__* env; int ref; } ;
struct line {int dummy; } ;
typedef enum request { ____Placeholder_request } request ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;
struct TYPE_2__ {int stash; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;

 int FUNC_0 (TYPE_1__*,int *,char const**,int,int) ;
 char* FUNC_1 () ;
 struct view VAR_5 ;
 struct view** VAR_6 ;
 char* VAR_7 ;
 char* FUNC_2 () ;
 int FUNC_3 (struct view*,int,struct line*) ;
 int FUNC_4 (struct view*,int) ;
 int FUNC_5 (struct view*,struct view*,int) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct view*) ;

enum request
FUNC_10(struct view *VAR_8, enum request VAR_9, struct line *VAR_10)
{
 enum open_flags VAR_11 = (FUNC_9(VAR_8) && VAR_9 != 128)
    ? VAR_3 : VAR_1;
 struct view *VAR_12 = &VAR_5;

 switch (VAR_9) {
 case 128:
 case 129:
  if (FUNC_9(VAR_8) && VAR_6[0] != VAR_8)
   FUNC_4(VAR_8, 1);

  if (!FUNC_9(VAR_12) ||
      FUNC_8(VAR_8->env->stash, VAR_12->ref)) {
   const char *VAR_13[] = {
    "git", "stash", "show", VAR_7, "--pretty=fuller",
     "--root", "--patch-with-stat",
     FUNC_7(), FUNC_1(),
     FUNC_2(), VAR_0,
     "--no-color", "%(stash)", ((void*)0)
   };

   if (!FUNC_0(VAR_5.env, &VAR_5.argv, VAR_13, 0, 0))
    FUNC_6("Failed to format argument");
   else
    FUNC_5(VAR_8, &VAR_5, VAR_11 | VAR_2);
  }
  return VAR_4;

 default:
  return FUNC_3(VAR_8, VAR_9, VAR_10);
 }
}
