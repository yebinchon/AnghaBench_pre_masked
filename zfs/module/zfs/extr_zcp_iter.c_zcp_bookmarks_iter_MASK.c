
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_15__ {char* za_name; } ;
typedef TYPE_3__ zap_attribute_t ;
typedef int uint64_t ;
typedef int lua_State ;
struct TYPE_16__ {int dp_meta_objset; } ;
typedef TYPE_4__ dsl_pool_t ;
struct TYPE_17__ {scalar_t__ ds_bookmarks_obj; TYPE_2__* ds_dir; int ds_object; } ;
typedef TYPE_5__ dsl_dataset_t ;
struct TYPE_18__ {TYPE_4__* zri_pool; } ;
struct TYPE_14__ {TYPE_1__* dd_pool; } ;
struct TYPE_13__ {int dp_meta_objset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int ,int ,TYPE_5__**) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int,char*,char*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,scalar_t__,int ) ;
 int FUNC_14 (int *,TYPE_3__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,int ,int,int,scalar_t__*) ;
 TYPE_6__* FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(lua_State *VAR_5)
{
 char VAR_6[VAR_4];
 char VAR_7[VAR_4];
 uint64_t VAR_8 = FUNC_8(VAR_5, FUNC_9(1));
 uint64_t VAR_9 = FUNC_8(VAR_5, FUNC_9(2));
 dsl_pool_t *VAR_10 = FUNC_17(VAR_5)->zri_pool;
 dsl_dataset_t *VAR_11;
 zap_attribute_t VAR_12;
 zap_cursor_t VAR_13;

 int VAR_14 = FUNC_0(VAR_10, VAR_8, VAR_3, &VAR_11);
 if (VAR_14 == VAR_2) {
  return (0);
 } else if (VAR_14 != 0) {
  return (FUNC_4(VAR_5,
      "unexpected error %d from dsl_dataset_hold_obj(dsobj)",
      VAR_14));
 }

 if (!FUNC_1(VAR_11)) {
  FUNC_3(VAR_11, VAR_3);
  return (0);
 }

 VAR_14 = FUNC_16(VAR_10->dp_meta_objset, VAR_11->ds_object,
     VAR_0, sizeof (VAR_11->ds_bookmarks_obj), 1,
     &VAR_11->ds_bookmarks_obj);
 if (VAR_14 != 0 && VAR_14 != VAR_2) {
  FUNC_3(VAR_11, VAR_3);
  return (FUNC_4(VAR_5,
      "unexpected error %d from zap_lookup()", VAR_14));
 }
 if (VAR_11->ds_bookmarks_obj == 0) {
  FUNC_3(VAR_11, VAR_3);
  return (0);
 }


 FUNC_2(VAR_11, VAR_6);

 FUNC_13(&VAR_13, VAR_11->ds_dir->dd_pool->dp_meta_objset,
     VAR_11->ds_bookmarks_obj, VAR_9);
 FUNC_3(VAR_11, VAR_3);

 VAR_14 = FUNC_14(&VAR_13, &VAR_12);
 if (VAR_14 != 0) {
  FUNC_12(&VAR_13);
  if (VAR_14 != VAR_2) {
   return (FUNC_4(VAR_5,
       "unexpected error %d from zap_cursor_retrieve()",
       VAR_14));
  }
  return (0);
 }
 FUNC_11(&VAR_13);
 VAR_9 = FUNC_15(&VAR_13);
 FUNC_12(&VAR_13);


 int VAR_15 = FUNC_10(VAR_7, VAR_4, "%s#%s",
     VAR_6, VAR_12.za_name);
 if (VAR_15 >= VAR_4) {
  return (FUNC_4(VAR_5,
      "unexpected error %d from snprintf()", VAR_1));
 }

 FUNC_5(VAR_5, VAR_9);
 FUNC_7(VAR_5, FUNC_9(2));

 (void) FUNC_6(VAR_5, VAR_7);
 return (1);
}
