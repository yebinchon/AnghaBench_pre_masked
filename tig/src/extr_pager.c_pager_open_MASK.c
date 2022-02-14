
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int private; int lines; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct view*,int *,int *,int) ;
 int FUNC_1 (struct view*,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct view*,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static enum status_code
FUNC_5(struct view *VAR_3, enum open_flags VAR_4)
{
 enum status_code VAR_5;

 if (!FUNC_4(VAR_4) && !VAR_3->lines && !(VAR_4 & VAR_0))
  return FUNC_2("No pager content, press %s to run command from prompt",
        FUNC_3(VAR_3, VAR_1));

 VAR_5 = FUNC_0(VAR_3, ((void*)0), ((void*)0), VAR_4);
 if (VAR_5 != VAR_2)
  return VAR_5;

 return FUNC_1(VAR_3, VAR_3->private);
}
