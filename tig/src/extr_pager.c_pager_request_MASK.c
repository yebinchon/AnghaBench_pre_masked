
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {scalar_t__ type; } ;
typedef enum request { ____Placeholder_request } request ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 struct view** VAR_7 ;
 int FUNC_0 (struct view*,int ) ;
 int FUNC_1 (struct view*,int ) ;
 int FUNC_2 (struct view*) ;
 scalar_t__ FUNC_3 (struct view*,int ) ;

enum request
FUNC_4(struct view *VAR_8, enum request VAR_9, struct line *VAR_10)
{
 int VAR_11 = 0;

 if (VAR_9 != VAR_2)
  return VAR_9;

 if (VAR_10->type == VAR_0 && FUNC_3(VAR_8, VAR_5)) {
  FUNC_0(VAR_8, VAR_1);
  VAR_11 = 1;
 }




 if (VAR_8 == VAR_7[VAR_6])
  FUNC_1(VAR_8, VAR_4);




 if (VAR_11)
  FUNC_2(VAR_8);

 return VAR_3;
}
