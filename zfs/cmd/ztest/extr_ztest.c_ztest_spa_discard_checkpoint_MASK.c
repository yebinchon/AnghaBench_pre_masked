
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_name; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;


 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(spa_t *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0));

 int VAR_2 = FUNC_3(VAR_1->spa_name);

 switch (VAR_2) {
 case 0:
 case 129:
 case 128:
  break;
 default:
  FUNC_2(0, "spa_discard_checkpoint(%s) = %d",
      VAR_1->spa_name, VAR_2);
 }

}
