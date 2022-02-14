
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct line {int type; struct help* data; } ;
struct keymap {int hidden; } ;
struct help {struct keymap* keymap; } ;
typedef enum request { ____Placeholder_request } request ;


 int VAR_0 ;

 int VAR_1 ;

 int FUNC_0 (struct view*) ;

__attribute__((used)) static enum request
FUNC_1(struct view *VAR_2, enum request VAR_3, struct line *VAR_4)
{
 struct help *VAR_5 = VAR_4->data;

 switch (VAR_3) {
 case 129:
  if (VAR_4->type == VAR_0) {
   struct keymap *VAR_6 = VAR_5->keymap;

   VAR_6->hidden = !VAR_6->hidden;
   FUNC_0(VAR_2);
  }
  return VAR_1;

 case 128:
  FUNC_0(VAR_2);
  return VAR_1;

 default:
  return VAR_3;
 }
}
