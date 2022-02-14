
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * zri_pool; } ;
typedef TYPE_1__ zcp_run_info_t ;
struct TYPE_6__ {int kwargs; int pargs; int name; } ;
typedef TYPE_2__ zcp_lib_info_t ;
typedef int lua_State ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char const*,int ,int **) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ) ;
 char* FUNC_4 (int *,int) ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 TYPE_1__* FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_7)
{
 zcp_run_info_t *VAR_8 = FUNC_6(VAR_7);
 dsl_pool_t *VAR_9 = VAR_8->zri_pool;
 zcp_lib_info_t *VAR_10 = &VAR_6;

 FUNC_5(VAR_7, VAR_10->name, VAR_10->pargs, VAR_10->kwargs);

 const char *VAR_11 = FUNC_4(VAR_7, 1);

 dsl_dataset_t *VAR_12;
 int VAR_13 = FUNC_0(VAR_9, VAR_11, VAR_5, &VAR_12);
 if (VAR_13 == 0) {
  FUNC_1(VAR_12, VAR_5);
  FUNC_3(VAR_7, VAR_1);
 } else if (VAR_13 == VAR_3) {
  FUNC_3(VAR_7, VAR_0);
 } else if (VAR_13 == VAR_4) {
  return (FUNC_2(VAR_7, "dataset '%s' is not in the "
      "target pool", VAR_11));
 } else if (VAR_13 == VAR_2) {
  return (FUNC_2(VAR_7, "I/O error opening dataset '%s'",
      VAR_11));
 } else if (VAR_13 != 0) {
  return (FUNC_2(VAR_7, "unexpected error %d", VAR_13));
 }

 return (1);
}
