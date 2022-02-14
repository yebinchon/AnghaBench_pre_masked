
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* zri_tx; } ;
typedef TYPE_2__ zcp_run_info_t ;
struct TYPE_8__ {int kwargs; int pargs; int name; } ;
typedef TYPE_3__ zcp_lib_info_t ;
typedef int lua_State ;
struct TYPE_6__ {int tx_txg; } ;


 char* FUNC_0 (int *,int) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char const*) ;

__attribute__((used)) static int
FUNC_4(lua_State *VAR_1)
{
 const char *VAR_2;
 zcp_run_info_t *VAR_3 = FUNC_2(VAR_1);
 zcp_lib_info_t *VAR_4 = &VAR_0;

 FUNC_1(VAR_1, VAR_4->name, VAR_4->pargs, VAR_4->kwargs);

 VAR_2 = FUNC_0(VAR_1, 1);

 FUNC_3("txg %lld ZCP: %s", VAR_3->zri_tx->tx_txg, VAR_2);

 return (0);
}
