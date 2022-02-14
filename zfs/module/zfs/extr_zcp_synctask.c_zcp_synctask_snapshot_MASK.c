
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int zri_cred; TYPE_1__* zri_pool; } ;
typedef TYPE_2__ zcp_run_info_t ;
typedef int zcp_cleanup_t ;
typedef int zcp_cleanup_handler_t ;
typedef int nvlist_t ;
typedef int lua_State ;
struct TYPE_8__ {int ddsa_snaps; int ddsa_cr; int * ddsa_props; int * ddsa_errors; int member_0; } ;
typedef TYPE_3__ dsl_dataset_snapshot_arg_t ;
typedef int boolean_t ;
struct TYPE_6__ {int dp_spa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,int *,int ) ;
 TYPE_2__* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ,TYPE_3__*,int ,char const*) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_4, boolean_t VAR_5, nvlist_t *VAR_6)
{
 int VAR_7;
 dsl_dataset_snapshot_arg_t VAR_8 = { 0 };
 const char *VAR_9 = FUNC_3(VAR_4, 1);
 zcp_run_info_t *VAR_10 = FUNC_7(VAR_4);






 if (FUNC_4(VAR_10->zri_pool->dp_spa) < VAR_1) {
  return (VAR_0);
 }





 VAR_8.ddsa_errors = ((void*)0);
 VAR_8.ddsa_props = ((void*)0);
 VAR_8.ddsa_cr = VAR_10->zri_cred;
 VAR_8.ddsa_snaps = FUNC_1();
 FUNC_0(VAR_8.ddsa_snaps, VAR_9);

 zcp_cleanup_handler_t *VAR_11 = FUNC_6(VAR_4,
     (zcp_cleanup_t *)&FUNC_2, VAR_8.ddsa_snaps);

 VAR_7 = FUNC_8(VAR_4, VAR_2,
     VAR_3, &VAR_8, VAR_5, VAR_9);

 FUNC_5(VAR_4, VAR_11);
 FUNC_2(VAR_8.ddsa_snaps);

 return (VAR_7);
}
