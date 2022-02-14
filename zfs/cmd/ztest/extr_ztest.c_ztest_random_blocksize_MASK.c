
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int spa_max_ashift; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_3(void)
{
 FUNC_0(VAR_3->spa_max_ashift != 0);





 int VAR_4 = VAR_2;
 if (FUNC_1(VAR_3) == VAR_0)
  VAR_4 = 20;
 uint64_t VAR_5 =
     FUNC_2(VAR_4 - VAR_3->spa_max_ashift + 1);
 return (1 << (VAR_1 + VAR_5));
}
