
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct vatpic {struct atpic* atpic; } ;
struct atpic {int ready; } ;
typedef enum irqstate { ____Placeholder_irqstate } irqstate ;


 int VAR_0 ;



 int FUNC_0 (struct vatpic*) ;
 int FUNC_1 (struct vatpic*) ;
 int FUNC_2 (struct vatpic*,int,int) ;
 struct vatpic* FUNC_3 (struct vm*) ;

__attribute__((used)) static int
FUNC_4(struct vm *VAR_1, int VAR_2, enum irqstate VAR_3)
{
 struct vatpic *VAR_4;
 struct atpic *VAR_5;

 if (VAR_2 < 0 || VAR_2 > 15)
  return (VAR_0);

 VAR_4 = FUNC_3(VAR_1);
 VAR_5 = &VAR_4->atpic[VAR_2 >> 3];

 if (VAR_5->ready == 0)
  return (0);

 FUNC_0(VAR_4);
 switch (VAR_3) {
 case 130:
  FUNC_2(VAR_4, VAR_2, 1);
  break;
 case 129:
  FUNC_2(VAR_4, VAR_2, 0);
  break;
 case 128:
  FUNC_2(VAR_4, VAR_2, 1);
  FUNC_2(VAR_4, VAR_2, 0);
  break;
 }
 FUNC_1(VAR_4);

 return (0);
}
