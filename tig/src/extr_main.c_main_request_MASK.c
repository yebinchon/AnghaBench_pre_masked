
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {int type; } ;
typedef enum request { ____Placeholder_request } request ;
typedef enum open_flags { ____Placeholder_open_flags } open_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;

 int VAR_7 ;




 struct view** VAR_8 ;
 int FUNC_0 (struct view*,int) ;
 int FUNC_1 (struct view*,char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct view*,int) ;
 int FUNC_4 (struct view*,int) ;
 int FUNC_5 (struct view*,int *,int ,int) ;
 int FUNC_6 (struct view*,int,int) ;
 int FUNC_7 (struct view*) ;
 scalar_t__ FUNC_8 (struct view*) ;

enum request
FUNC_9(struct view *VAR_9, enum request VAR_10, struct line *VAR_11)
{
 enum open_flags VAR_12 = (FUNC_8(VAR_9) && VAR_10 != 128)
    ? VAR_4 : VAR_3;

 switch (VAR_10) {
 case 132:
 case 130:
  if (FUNC_8(VAR_9) && VAR_8[0] != VAR_9)
   return VAR_10;


  return VAR_10 == 132 ? VAR_5 : VAR_6;

 case 128:
 case 135:
  if (FUNC_8(VAR_9) && VAR_8[0] != VAR_9)
   FUNC_3(VAR_9, 1);

  if (VAR_11->type == VAR_1
      || VAR_11->type == VAR_0)
   FUNC_5(VAR_9, ((void*)0), VAR_11->type, VAR_12);
  else if (VAR_11->type == VAR_2)
   FUNC_6(VAR_9, 1, VAR_12);
  else
   FUNC_4(VAR_9, VAR_12);
  break;

 case 129:
  FUNC_2(1);
  FUNC_7(VAR_9);
  break;

 case 131:
  FUNC_1(VAR_9, "%(commit)^", 1, 0);
  break;

 case 134:
 case 133:
  FUNC_0(VAR_9, VAR_10);
  break;

 default:
  return VAR_10;
 }

 return VAR_7;
}
