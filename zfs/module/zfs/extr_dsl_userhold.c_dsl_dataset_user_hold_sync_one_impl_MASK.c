
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_longlong_t ;
typedef int objset_t ;
typedef int nvlist_t ;
typedef int name ;
typedef scalar_t__ minor_t ;
struct TYPE_10__ {int dp_config_rwlock; int * dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_11__ {scalar_t__ ds_userrefs; scalar_t__ ds_object; int ds_dbuf; TYPE_1__* ds_dir; } ;
typedef TYPE_3__ dsl_dataset_t ;
typedef int dmu_tx_t ;
struct TYPE_12__ {scalar_t__ ds_userrefs_obj; } ;
struct TYPE_9__ {TYPE_2__* dd_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;
 TYPE_7__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,char const*,scalar_t__,int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,char*,int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,char*,int **) ;
 int FUNC_11 (char*,int,char*,int ) ;
 int FUNC_12 (TYPE_3__*,char*,int *,char*,char const*,int,int ) ;
 int FUNC_13 (int *,scalar_t__,char const*,int,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_14 (int *,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_15(nvlist_t *VAR_3, dsl_dataset_t *VAR_4,
    const char *VAR_5, minor_t VAR_6, uint64_t VAR_7, dmu_tx_t *VAR_8)
{
 dsl_pool_t *VAR_9 = VAR_4->ds_dir->dd_pool;
 objset_t *VAR_10 = VAR_9->dp_meta_objset;
 uint64_t VAR_11;

 FUNC_0(FUNC_1(&VAR_9->dp_config_rwlock));

 if (FUNC_4(VAR_4)->ds_userrefs_obj == 0) {




  FUNC_3(VAR_4->ds_dbuf, VAR_8);
  VAR_11 = FUNC_4(VAR_4)->ds_userrefs_obj =
      FUNC_14(VAR_10, VAR_1, VAR_0, 0, VAR_8);
 } else {
  VAR_11 = FUNC_4(VAR_4)->ds_userrefs_obj;
 }
 VAR_4->ds_userrefs++;

 FUNC_2(FUNC_13(VAR_10, VAR_11, VAR_5, 8, 1, &VAR_7, VAR_8));

 if (VAR_6 != 0) {
  char VAR_12[VAR_2];
  nvlist_t *VAR_13;

  FUNC_2(FUNC_5(VAR_9, VAR_4->ds_object,
      VAR_5, VAR_7, VAR_8));
  (void) FUNC_11(VAR_12, sizeof (VAR_12), "%llx",
      (u_longlong_t)VAR_4->ds_object);

  if (FUNC_10(VAR_3, VAR_12, &VAR_13) != 0) {
   VAR_13 = FUNC_8();
   FUNC_6(VAR_13, VAR_5);
   FUNC_7(VAR_3, VAR_12, VAR_13);
   FUNC_9(VAR_13);
  } else {
   FUNC_6(VAR_13, VAR_5);
  }
 }

 FUNC_12(VAR_4, "hold", VAR_8,
     "tag=%s temp=%d refs=%llu",
     VAR_5, VAR_6 != 0, (u_longlong_t)VAR_4->ds_userrefs);
}
