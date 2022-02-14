
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct view {int ref; } ;
struct line {int dummy; } ;
typedef enum request { ____Placeholder_request } request ;
struct TYPE_2__ {int vid; } ;


 int VAR_0 ;

 int VAR_1 ;

 TYPE_1__** VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct view*,int ) ;
 int FUNC_2 (struct view*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static enum request
FUNC_4(struct view *VAR_3, enum request VAR_4, struct line *VAR_5)
{
 switch (VAR_4) {
 case 128:
  FUNC_0(1);
  FUNC_2(VAR_3);
  return VAR_1;

 case 129:
  if (!VAR_2[1] || FUNC_3(VAR_2[1]->vid, VAR_3->ref))
   FUNC_1(VAR_3, VAR_0);
  return VAR_1;

 default:
  return VAR_4;
 }
}
