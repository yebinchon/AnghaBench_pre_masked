
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int machine; int version; int release; int nodename; } ;
typedef TYPE_1__ utsname_t ;
typedef int u_longlong_t ;
typedef int spa_t ;
typedef int dmu_tx_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,int *,char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 () ;

void
FUNC_3(spa_t *VAR_1, const char *VAR_2, dmu_tx_t *VAR_3)
{
 utsname_t *VAR_4 = FUNC_2();

 FUNC_0(VAR_1, VAR_2, VAR_3,
     "pool version %llu; software version %s; uts %s %s %s %s",
     (u_longlong_t)FUNC_1(VAR_1), VAR_0,
     VAR_4->nodename, VAR_4->release, VAR_4->version, VAR_4->machine);
}
