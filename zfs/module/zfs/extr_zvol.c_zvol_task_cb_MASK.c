
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int op; int value; int name1; int name2; } ;
typedef TYPE_1__ zvol_task_t ;


 int FUNC_0 (int ) ;





 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_0)
{
 zvol_task_t *VAR_1 = (zvol_task_t *)VAR_0;

 switch (VAR_1->op) {
 case 132:
  (void) FUNC_1(VAR_1->name1);
  break;
 case 131:
  FUNC_2(VAR_1->name1);
  break;
 case 130:
  FUNC_3(VAR_1->name1, VAR_1->name2);
  break;
 case 129:
  FUNC_4(VAR_1->name1, VAR_1->value);
  break;
 case 128:
  FUNC_5(VAR_1->name1, VAR_1->value);
  break;
 default:
  FUNC_0(0);
  break;
 }

 FUNC_6(VAR_1);
}
