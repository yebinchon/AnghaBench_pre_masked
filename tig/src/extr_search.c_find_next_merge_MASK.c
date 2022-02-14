
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
typedef enum status_code { ____Placeholder_status_code } status_code ;
typedef enum request { ____Placeholder_request } request ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct view*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static enum status_code
FUNC_2(struct view *VAR_1, enum request VAR_2)
{
 switch (VAR_2) {
 case 129:
  return FUNC_1(VAR_1, 1, VAR_0);

 case 128:
  return FUNC_1(VAR_1, -1, VAR_0);

 default:
  return FUNC_0("Invalid request searching for next merge");
 }
}
