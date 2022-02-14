
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_20__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;


struct TYPE_23__ {char* za_name; int za_first_integer; } ;
typedef TYPE_1__ zap_cursor_t ;
typedef TYPE_1__ zap_attribute_t ;
typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int my_ss_cnt ;
typedef int my_fs_cnt ;
struct TYPE_25__ {int dp_spa; int * dp_meta_objset; } ;
typedef TYPE_3__ dsl_pool_t ;
struct TYPE_26__ {char* dd_myname; int dd_object; int dd_dbuf; TYPE_3__* dd_pool; } ;
typedef TYPE_4__ dsl_dir_t ;
typedef int dsl_dataset_t ;
typedef int dmu_tx_t ;
typedef int count ;
struct TYPE_24__ {int ds_snapnames_zapobj; } ;
struct TYPE_22__ {int dd_head_dataset_obj; int dd_child_dir_zapobj; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int **) ;
 TYPE_20__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int *,int ,TYPE_4__**) ;
 TYPE_15__* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 TYPE_1__* FUNC_12 (int,int ) ;
 int FUNC_13 (TYPE_1__*,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,int ,int ,int,int,scalar_t__*,int *) ;
 scalar_t__ FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_20 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_21 (int *,int ,int ,int,int,scalar_t__*) ;

__attribute__((used)) static void
FUNC_22(dsl_dir_t *VAR_5, dmu_tx_t *VAR_6)
{
 uint64_t VAR_7 = 0;
 uint64_t VAR_8 = 0;
 dsl_pool_t *VAR_9 = VAR_5->dd_pool;
 objset_t *VAR_10 = VAR_9->dp_meta_objset;
 zap_cursor_t *VAR_11;
 zap_attribute_t *VAR_12;
 dsl_dataset_t *VAR_13;

 FUNC_0(FUNC_14(VAR_9->dp_spa, VAR_4));
 FUNC_0(FUNC_11(VAR_9));
 FUNC_0(FUNC_3(VAR_6));

 FUNC_10(VAR_5, VAR_6);





 if (FUNC_16(VAR_10, VAR_5->dd_object, VAR_0) == 0)
  return;

 VAR_11 = FUNC_12(sizeof (zap_cursor_t), VAR_3);
 VAR_12 = FUNC_12(sizeof (zap_attribute_t), VAR_3);


 for (FUNC_19(VAR_11, VAR_10, FUNC_8(VAR_5)->dd_child_dir_zapobj);
     FUNC_20(VAR_11, VAR_12) == 0; FUNC_17(VAR_11)) {
  dsl_dir_t *VAR_14;
  uint64_t VAR_15;

  FUNC_1(FUNC_7(VAR_9, VAR_12->za_first_integer, ((void*)0), VAR_2,
      &VAR_14));





  if (VAR_14->dd_myname[0] == '$' ||
      VAR_14->dd_myname[0] == '%') {
   FUNC_9(VAR_14, VAR_2);
   continue;
  }

  VAR_7++;

  FUNC_22(VAR_14, VAR_6);

  FUNC_1(FUNC_21(VAR_10, VAR_14->dd_object,
      VAR_0, sizeof (VAR_15), 1, &VAR_15));
  VAR_7 += VAR_15;
  FUNC_1(FUNC_21(VAR_10, VAR_14->dd_object,
      VAR_1, sizeof (VAR_15), 1, &VAR_15));
  VAR_8 += VAR_15;

  FUNC_9(VAR_14, VAR_2);
 }
 FUNC_18(VAR_11);

 FUNC_1(FUNC_4(VAR_5->dd_pool,
     FUNC_8(VAR_5)->dd_head_dataset_obj, VAR_2, &VAR_13));

 for (FUNC_19(VAR_11, VAR_10, FUNC_5(VAR_13)->ds_snapnames_zapobj);
     FUNC_20(VAR_11, VAR_12) == 0;
     FUNC_17(VAR_11)) {

  if (VAR_12->za_name[0] != '%')
   VAR_8++;
 }
 FUNC_18(VAR_11);

 FUNC_6(VAR_13, VAR_2);

 FUNC_13(VAR_11, sizeof (zap_cursor_t));
 FUNC_13(VAR_12, sizeof (zap_attribute_t));


 FUNC_2(VAR_5->dd_dbuf, VAR_6);
 FUNC_1(FUNC_15(VAR_10, VAR_5->dd_object, VAR_0,
     sizeof (VAR_7), 1, &VAR_7, VAR_6));
 FUNC_1(FUNC_15(VAR_10, VAR_5->dd_object, VAR_1,
     sizeof (VAR_8), 1, &VAR_8, VAR_6));
}
