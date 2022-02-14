
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_28__ {int spa_root_vdev; int spa_meta_objset; int spa_deferred_bpobj; TYPE_2__* spa_dsl_pool; int spa_uberblock; int spa_config; } ;
typedef TYPE_1__ spa_t ;
typedef size_t spa_feature_t ;
typedef int longlong_t ;
struct TYPE_29__ {int dp_bptree_obj; int dp_obsolete_bpobj; int dp_free_bpobj; int dp_meta_objset; } ;
typedef TYPE_2__ dsl_pool_t ;
struct TYPE_27__ {int fi_flags; char* fi_uname; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__* VAR_13 ;
 int FUNC_3 (int ,int ,int *,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (int ) ;
 int VAR_14 ;
 int* VAR_15 ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (int *,char*,char*) ;
 int FUNC_21 (int) ;
 scalar_t__ FUNC_22 (TYPE_1__*,TYPE_10__*,scalar_t__*) ;
 scalar_t__* VAR_16 ;
 int VAR_17 ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (int *,int ,int *,int ,int ) ;
 int FUNC_25 (TYPE_1__*) ;
 scalar_t__ FUNC_26 (TYPE_1__*,int ) ;
 int FUNC_27 (TYPE_1__*,size_t) ;
 TYPE_10__* VAR_18 ;
 TYPE_2__* FUNC_28 (TYPE_1__*) ;
 int FUNC_29 (TYPE_1__*) ;
 scalar_t__ FUNC_30 (TYPE_1__*) ;
 int FUNC_31 (TYPE_1__*) ;
 int FUNC_32 (TYPE_1__*) ;
 int FUNC_33 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_34(spa_t *VAR_19)
{
 dsl_pool_t *VAR_20 = FUNC_28(VAR_19);
 int VAR_21 = 0;

 if (VAR_15['S']) {
  FUNC_19(VAR_19);
  return;
 }

 if (!VAR_15['e'] && VAR_15['C'] > 1) {
  (void) FUNC_23("\nCached configuration:\n");
  FUNC_17(VAR_19->spa_config, 8);
 }

 if (VAR_15['C'])
  FUNC_7(VAR_19);

 if (VAR_15['u'])
  FUNC_20(&VAR_19->spa_uberblock, "\nUberblock:\n", "\n");

 if (VAR_15['D'])
  FUNC_4(VAR_19);

 if (VAR_15['d'] > 2 || VAR_15['m'])
  FUNC_15(VAR_19);
 if (VAR_15['M'])
  FUNC_14(VAR_19);
 if (VAR_15['d'] > 2 || VAR_15['m']) {
  FUNC_13(VAR_19);
  FUNC_12(VAR_19);
 }

 if (VAR_15['d'] || VAR_15['i']) {
  spa_feature_t VAR_22;
  VAR_17 = FUNC_24(((void*)0), VAR_3, ((void*)0), 0,
      0);
  FUNC_18(VAR_20->dp_meta_objset);

  if (VAR_15['d'] >= 3) {
   dsl_pool_t *VAR_23 = VAR_19->spa_dsl_pool;
   FUNC_10(&VAR_19->spa_deferred_bpobj,
       "Deferred frees", 0);
   if (FUNC_30(VAR_19) >= VAR_10) {
    FUNC_10(&VAR_23->dp_free_bpobj,
        "Pool snapshot frees", 0);
   }
   if (FUNC_2(&VAR_23->dp_obsolete_bpobj)) {
    FUNC_0(FUNC_27(VAR_19,
        VAR_7));
    FUNC_10(&VAR_23->dp_obsolete_bpobj,
        "Pool obsolete blocks", 0);
   }

   if (FUNC_26(VAR_19,
       VAR_5)) {
    FUNC_6(VAR_19->spa_meta_objset,
        VAR_23->dp_bptree_obj,
        "Pool dataset frees");
   }
   FUNC_9(VAR_19->spa_root_vdev, 0);
  }

  for (spa_feature_t VAR_24 = 0; VAR_24 < VAR_4; VAR_24++)
   VAR_16[VAR_24] = VAR_11;
  VAR_16[VAR_9] = 0;
  VAR_16[VAR_6] = 0;
  VAR_16[VAR_8] = 0;

  (void) FUNC_3(FUNC_29(VAR_19), VAR_14,
      ((void*)0), VAR_1 | VAR_0);

  if (VAR_21 == 0 && !VAR_15['L'])
   VAR_21 = FUNC_16(VAR_19);

  for (VAR_22 = 0; VAR_22 < VAR_4; VAR_22++) {
   uint64_t VAR_25;

   uint64_t *VAR_26;
   if (!(VAR_18[VAR_22].fi_flags &
       VAR_12)) {
    if (VAR_16[VAR_22] == VAR_11)
     continue;
    if (!FUNC_27(VAR_19, VAR_22)) {
     FUNC_1(VAR_16[VAR_22]);
     continue;
    }
    VAR_26 = VAR_16;
   } else {
    if (!FUNC_27(VAR_19, VAR_22)) {
     FUNC_1(VAR_13[VAR_22]);
     continue;
    }
    VAR_26 = VAR_13;
   }
   if (FUNC_22(VAR_19, &VAR_18[VAR_22],
       &VAR_25) == VAR_2)
    continue;
   if (VAR_26[VAR_22] != VAR_25) {
    (void) FUNC_23("%s feature refcount mismatch: "
        "%lld consumers != %lld refcount\n",
        VAR_18[VAR_22].fi_uname,
        (longlong_t)VAR_26[VAR_22], (longlong_t)VAR_25);
    VAR_21 = 2;
   } else {
    (void) FUNC_23("Verified %s feature refcount "
        "of %llu is correct\n",
        VAR_18[VAR_22].fi_uname,
        (longlong_t)VAR_25);
   }
  }

  if (VAR_21 == 0)
   VAR_21 = FUNC_32(VAR_19);
 }

 if (VAR_21 == 0 && (VAR_15['b'] || VAR_15['c']))
  VAR_21 = FUNC_5(VAR_19);

 if (VAR_21 == 0)
  VAR_21 = FUNC_33(VAR_19);

 if (VAR_15['s'])
  FUNC_25(VAR_19);

 if (VAR_15['h'])
  FUNC_11(VAR_19);

 if (VAR_21 == 0)
  VAR_21 = FUNC_31(VAR_19);

 if (VAR_21 != 0) {
  FUNC_8();
  FUNC_21(VAR_21);
 }
}
