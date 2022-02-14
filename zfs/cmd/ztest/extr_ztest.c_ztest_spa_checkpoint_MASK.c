
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spa_name; } ;
typedef TYPE_1__ spa_t ;


 int FUNC_0 (int ) ;

 int VAR_0 ;
 int FUNC_1 (int *) ;



 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(spa_t *VAR_2)
{
 FUNC_0(FUNC_1(&VAR_1));

 int VAR_3 = FUNC_3(VAR_2->spa_name);

 switch (VAR_3) {
 case 0:
 case 129:
 case 128:
 case 130:
  break;
 case 131:
  FUNC_4(VAR_0);
  break;
 default:
  FUNC_2(0, "spa_checkpoint(%s) = %d", VAR_2->spa_name, VAR_3);
 }
}
