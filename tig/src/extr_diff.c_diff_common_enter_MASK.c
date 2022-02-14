
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int line; } ;
struct line {scalar_t__ type; } ;
typedef enum request { ____Placeholder_request } request ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct line* FUNC_0 (struct view*,struct line*) ;
 int FUNC_1 (struct view*,int,struct line*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct view*,struct line*) ;

enum request
FUNC_5(struct view *VAR_2, enum request VAR_3, struct line *VAR_4)
{
 if (VAR_4->type == VAR_0) {
  VAR_4 = FUNC_0(VAR_2, VAR_4);
  if (!VAR_4) {
   FUNC_2("Failed to find file diff");
   return VAR_1;
  }

  FUNC_4(VAR_2, VAR_4 - VAR_2->line);
  FUNC_3();
  return VAR_1;

 } else {
  return FUNC_1(VAR_2, VAR_3, VAR_4);
 }
}
