
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int objset_t ;
typedef int nvlist_t ;
typedef int lua_State ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_4__ {int * zri_pool; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int ) ;
 int ** FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int) ;
 int * FUNC_10 (int *,int *,char const*,int ) ;
 TYPE_2__* FUNC_11 (int *) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_12(lua_State *VAR_3)
{
 const char *VAR_4 = FUNC_9(VAR_3, 1);
 dsl_pool_t *VAR_5 = FUNC_11(VAR_3)->zri_pool;
 objset_t *VAR_6;
 nvlist_t **VAR_7 = FUNC_5(VAR_3, sizeof (nvlist_t *));

 dsl_dataset_t *VAR_8 = FUNC_10(VAR_3, VAR_5, VAR_4, VAR_0);
 if (VAR_8 == ((void*)0))
  return (1);
 FUNC_0(FUNC_1(VAR_8, &VAR_6));
 FUNC_0(FUNC_3(VAR_6, VAR_7));
 FUNC_2(VAR_8, VAR_0);





 FUNC_4(VAR_3, VAR_2.name);
 (void) FUNC_8(VAR_3, -2);

 FUNC_7(VAR_3, ((void*)0));
 FUNC_6(VAR_3, &VAR_1, 2);
 return (1);
}
