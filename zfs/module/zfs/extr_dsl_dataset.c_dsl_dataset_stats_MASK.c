
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_25__ ;
typedef struct TYPE_32__ TYPE_22__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int uint64_t ;
typedef int recvname ;
typedef int nvlist_t ;
typedef int dsl_pool_t ;
struct TYPE_31__ {TYPE_22__* ds_dir; scalar_t__ ds_is_snapshot; } ;
typedef TYPE_1__ dsl_dataset_t ;
struct TYPE_33__ {scalar_t__ ds_prev_snap_obj; } ;
struct TYPE_32__ {int * dd_pool; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int *,char*,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 TYPE_25__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_22__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (TYPE_1__*,char*) ;
 int FUNC_17 (TYPE_1__*,int *) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (TYPE_1__*) ;
 scalar_t__ FUNC_25 (TYPE_1__*,int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *,int ,char*) ;
 int FUNC_28 (int *,int ,int ) ;
 int FUNC_29 (int *,int ,int *) ;
 int * FUNC_30 () ;
 int FUNC_31 (TYPE_1__*,int *) ;
 int FUNC_32 (TYPE_1__*,int *) ;
 int FUNC_33 (int *) ;
 char* VAR_20 ;
 int FUNC_34 (char*,char*,int) ;
 int FUNC_35 (int ) ;

void
FUNC_36(dsl_dataset_t *VAR_21, nvlist_t *VAR_22)
{
 dsl_pool_t *VAR_23 = VAR_21->ds_dir->dd_pool;

 FUNC_0(FUNC_26(VAR_23));

 FUNC_28(VAR_22, VAR_14,
     FUNC_20(VAR_21));
 FUNC_28(VAR_22, VAR_8,
     FUNC_14(VAR_21));
 FUNC_28(VAR_22, VAR_3,
     FUNC_9(VAR_21));
 FUNC_28(VAR_22, VAR_17,
     FUNC_23(VAR_21));

 if (VAR_21->ds_is_snapshot) {
  FUNC_31(VAR_21, VAR_22);
 } else {
  char VAR_24[VAR_1];
  if (FUNC_16(VAR_21, VAR_24) == 0)
   FUNC_27(VAR_22, VAR_10,
       VAR_24);
  FUNC_7(VAR_21->ds_dir, VAR_22);
 }

 nvlist_t *VAR_25 = FUNC_30();
 FUNC_17(VAR_21, VAR_25);
 FUNC_29(VAR_22, FUNC_35(VAR_11),
     VAR_25);
 FUNC_33(VAR_25);

 FUNC_28(VAR_22, VAR_2,
     FUNC_8(VAR_21));
 FUNC_28(VAR_22, VAR_12,
     FUNC_18(VAR_21));
 FUNC_28(VAR_22, VAR_5,
     FUNC_10(VAR_21));
 FUNC_28(VAR_22, VAR_4,
     FUNC_11(VAR_21));
 FUNC_28(VAR_22, VAR_13,
     FUNC_19(VAR_21));
 FUNC_28(VAR_22, VAR_15,
     FUNC_21(VAR_21));
 FUNC_28(VAR_22, VAR_7,
     FUNC_13(VAR_21));
 FUNC_28(VAR_22, VAR_16,
     FUNC_22(VAR_21));
 FUNC_28(VAR_22, VAR_9,
     FUNC_15(VAR_21));
 FUNC_28(VAR_22, VAR_18,
     FUNC_24(VAR_21));
 FUNC_28(VAR_22, VAR_6,
     FUNC_12(VAR_21));
 FUNC_1(VAR_21, VAR_22);

 if (FUNC_5(VAR_21)->ds_prev_snap_obj != 0) {
  uint64_t VAR_26;
  if (FUNC_25(VAR_21, &VAR_26) == 0) {
   FUNC_28(VAR_22, VAR_19,
       VAR_26);
  }
 }

 if (!FUNC_3(VAR_21)) {




  FUNC_32(VAR_21, VAR_22);







  char VAR_27[VAR_1 + 6];
  dsl_dataset_t *VAR_28;
  FUNC_4(VAR_21, VAR_27);
  if (FUNC_34(VAR_27, "/", sizeof (VAR_27)) <
      sizeof (VAR_27) &&
      FUNC_34(VAR_27, VAR_20, sizeof (VAR_27)) <
      sizeof (VAR_27) &&
      FUNC_2(VAR_23, VAR_27, VAR_0, &VAR_28) == 0) {
   FUNC_32(VAR_28, VAR_22);
   FUNC_6(VAR_28, VAR_0);
  }
 }
}
