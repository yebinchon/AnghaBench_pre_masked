
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int lua_State ;
typedef int dsl_pool_t ;
struct TYPE_5__ {int ds_object; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int * zri_pool; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int,char*,char const*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_5 (int *,int *,char const*,int ) ;
 TYPE_2__* FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(lua_State *VAR_2)
{
 const char *VAR_3 = FUNC_3(VAR_2, 1);
 dsl_pool_t *VAR_4 = FUNC_6(VAR_2)->zri_pool;

 dsl_dataset_t *VAR_5 = FUNC_5(VAR_2, VAR_4, VAR_3, VAR_0);
 if (VAR_5 == ((void*)0))
  return (1);

 boolean_t VAR_6 = VAR_5->ds_is_snapshot;
 uint64_t VAR_7 = VAR_5->ds_object;
 uint64_t VAR_8 = 0;
 FUNC_0(VAR_5, VAR_0);

 if (VAR_6) {
  return (FUNC_4(VAR_2, 1, "%s is a snapshot", VAR_3));
 }

 FUNC_2(VAR_2, VAR_7);
 FUNC_2(VAR_2, VAR_8);
 FUNC_1(VAR_2, &VAR_1, 2);
 return (1);
}
