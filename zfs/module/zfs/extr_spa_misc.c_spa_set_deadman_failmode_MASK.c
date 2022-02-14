
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* spa_deadman_failmode; } ;
typedef TYPE_1__ spa_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

void
FUNC_1(spa_t *VAR_3, const char *VAR_4)
{
 if (FUNC_0(VAR_4, "wait") == 0)
  VAR_3->spa_deadman_failmode = VAR_2;
 else if (FUNC_0(VAR_4, "continue") == 0)
  VAR_3->spa_deadman_failmode = VAR_0;
 else if (FUNC_0(VAR_4, "panic") == 0)
  VAR_3->spa_deadman_failmode = VAR_1;
 else
  VAR_3->spa_deadman_failmode = VAR_2;
}
