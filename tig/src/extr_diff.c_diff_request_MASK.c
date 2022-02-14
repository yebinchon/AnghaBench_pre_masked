
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int vid; } ;
struct line {int dummy; } ;
typedef enum request { ____Placeholder_request } request ;




 int VAR_0 ;


 int FUNC_0 (struct view*,int,struct line*) ;
 int FUNC_1 (struct view*,int,struct line*) ;
 int FUNC_2 (struct view*,struct line*) ;
 int FUNC_3 (struct view*,int,struct line*) ;
 int FUNC_4 (struct view*) ;
 int FUNC_5 (struct view*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static enum request
FUNC_7(struct view *VAR_1, enum request VAR_2, struct line *VAR_3)
{
 switch (VAR_2) {
 case 128:
  return FUNC_2(VAR_1, VAR_3);

 case 131:
  return FUNC_0(VAR_1, VAR_2, VAR_3);

 case 130:
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 case 129:
  if (FUNC_6(VAR_1->vid))
   FUNC_4(VAR_1);
  else
   FUNC_5(VAR_1);
  return VAR_0;

 default:
  return FUNC_3(VAR_1, VAR_2, VAR_3);
 }
}
