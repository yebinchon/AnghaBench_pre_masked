
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ zfs_prop_t ;
struct TYPE_4__ {int kwargs; int pargs; int name; } ;
typedef TYPE_1__ zcp_lib_info_t ;
typedef int lua_State ;
typedef int dsl_pool_t ;
struct TYPE_5__ {int * zri_pool; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 char* FUNC_1 (int *,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *,int *,char const*,scalar_t__) ;
 int FUNC_3 (int *,int *,char const*,char const*) ;
 int FUNC_4 (int *,int *,char const*,char const*) ;
 int FUNC_5 (int *,int *,char const*,char const*) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 TYPE_2__* FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*) ;

__attribute__((used)) static int
FUNC_12(lua_State *VAR_2)
{
 const char *VAR_3;
 const char *VAR_4;
 dsl_pool_t *VAR_5 = FUNC_7(VAR_2)->zri_pool;
 zcp_lib_info_t *VAR_6 = &VAR_1;

 FUNC_6(VAR_2, VAR_6->name, VAR_6->pargs, VAR_6->kwargs);

 VAR_3 = FUNC_1(VAR_2, 1);
 VAR_4 = FUNC_1(VAR_2, 2);


 if (FUNC_9(VAR_4)) {
  return (FUNC_3(VAR_2, VAR_5,
      VAR_3, VAR_4));
 }

 if (FUNC_10(VAR_4)) {




  return (FUNC_0(VAR_2,
      "user quota properties only supported in kernel mode",
      VAR_4));

 }

 if (FUNC_11(VAR_4)) {
  return (FUNC_5(VAR_2, VAR_5,
      VAR_3, VAR_4));
 }

 zfs_prop_t VAR_7 = FUNC_8(VAR_4);

 if (VAR_7 != VAR_0) {
  return (FUNC_2(VAR_2, VAR_5, VAR_3,
      VAR_7));
 }


 return (FUNC_0(VAR_2,
     "'%s' is not a valid property", VAR_4));
}
