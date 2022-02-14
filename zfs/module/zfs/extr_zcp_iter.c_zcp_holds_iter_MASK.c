
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_13__ {int za_first_integer; int za_name; } ;
typedef TYPE_3__ zap_attribute_t ;
typedef int uint64_t ;
typedef int lua_State ;
typedef int dsl_pool_t ;
struct TYPE_14__ {TYPE_2__* ds_dir; } ;
typedef TYPE_4__ dsl_dataset_t ;
struct TYPE_16__ {scalar_t__ ds_userrefs_obj; } ;
struct TYPE_15__ {int * zri_pool; } ;
struct TYPE_12__ {TYPE_1__* dd_pool; } ;
struct TYPE_11__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,TYPE_4__**) ;
 TYPE_8__* FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,scalar_t__,int ) ;
 int FUNC_12 (int *,TYPE_3__*) ;
 int FUNC_13 (int *) ;
 TYPE_5__* FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(lua_State *VAR_2)
{
 uint64_t VAR_3 = FUNC_7(VAR_2, FUNC_8(1));
 uint64_t VAR_4 = FUNC_7(VAR_2, FUNC_8(2));
 dsl_pool_t *VAR_5 = FUNC_14(VAR_2)->zri_pool;
 dsl_dataset_t *VAR_6;
 zap_attribute_t VAR_7;
 zap_cursor_t VAR_8;

 int VAR_9 = FUNC_0(VAR_5, VAR_3, VAR_1, &VAR_6);
 if (VAR_9 == VAR_0) {
  return (0);
 } else if (VAR_9 != 0) {
  return (FUNC_3(VAR_2,
      "unexpected error %d from dsl_dataset_hold_obj(dsobj)",
      VAR_9));
 }

 if (FUNC_1(VAR_6)->ds_userrefs_obj == 0) {
  FUNC_2(VAR_6, VAR_1);
  return (0);
 }

 FUNC_11(&VAR_8, VAR_6->ds_dir->dd_pool->dp_meta_objset,
     FUNC_1(VAR_6)->ds_userrefs_obj, VAR_4);
 FUNC_2(VAR_6, VAR_1);

 VAR_9 = FUNC_12(&VAR_8, &VAR_7);
 if (VAR_9 != 0) {
  FUNC_10(&VAR_8);
  if (VAR_9 != VAR_0) {
   return (FUNC_3(VAR_2,
       "unexpected error %d from zap_cursor_retrieve()",
       VAR_9));
  }
  return (0);
 }
 FUNC_9(&VAR_8);
 VAR_4 = FUNC_13(&VAR_8);
 FUNC_10(&VAR_8);

 FUNC_4(VAR_2, VAR_4);
 FUNC_6(VAR_2, FUNC_8(2));

 (void) FUNC_5(VAR_2, VAR_7.za_name);
 (void) FUNC_4(VAR_2, VAR_7.za_first_integer);
 return (2);
}
