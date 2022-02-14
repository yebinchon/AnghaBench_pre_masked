
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int private; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct view*,int *,char const**,int) ;
 char* FUNC_1 () ;
 int FUNC_2 (struct view*,int ) ;
 int FUNC_3 (struct view*,int ,int) ;
 char* VAR_2 ;
 char* FUNC_4 () ;
 char* FUNC_5 () ;
 char* FUNC_6 () ;

__attribute__((used)) static enum status_code
FUNC_7(struct view *VAR_3, enum open_flags VAR_4)
{
 const char *VAR_5[] = {
  "git", "show", VAR_2, "--pretty=fuller", "--root",
   "--patch-with-stat", FUNC_6(),
   FUNC_5(), FUNC_1(), FUNC_4(),
   VAR_0, "%(cmdlineargs)", "--no-color", "%(commit)",
   "--", "%(fileargs)", ((void*)0)
 };
 enum status_code VAR_6;

 FUNC_3(VAR_3, VAR_3->private, VAR_4);

 VAR_6 = FUNC_0(VAR_3, ((void*)0), VAR_5, VAR_4);
 if (VAR_6 != VAR_1)
  return VAR_6;

 return FUNC_2(VAR_3, VAR_3->private);
}
