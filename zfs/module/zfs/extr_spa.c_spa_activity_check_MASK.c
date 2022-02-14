
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vdev_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_11__ {int ub_txg; int ub_timestamp; int ub_mmp_config; } ;
typedef TYPE_1__ uberblock_t ;
struct TYPE_12__ {int spa_load_info; int * spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int nvlist_t ;
typedef int kmutex_t ;
typedef int kcondvar_t ;
typedef scalar_t__ hrtime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ,int *) ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int ,int ,int) ;
 int * FUNC_10 (int *,int ) ;
 char* FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ VAR_13 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,int ,int *) ;
 scalar_t__ FUNC_18 (int *,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_21 (int) ;
 int FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 (int *,int ,int) ;
 int FUNC_25 (int *,TYPE_1__*,int **) ;
 int FUNC_26 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static int
FUNC_27(spa_t *VAR_14, uberblock_t *VAR_15, nvlist_t *VAR_16)
{
 uint64_t VAR_17 = VAR_15->ub_txg;
 uint64_t VAR_18 = VAR_15->ub_timestamp;
 uint64_t VAR_19 = VAR_15->ub_mmp_config;
 uint16_t VAR_20 = FUNC_1(VAR_15) ? FUNC_0(VAR_15) : 0;
 uint64_t VAR_21;
 hrtime_t VAR_22;
 nvlist_t *VAR_23 = ((void*)0);
 vdev_t *VAR_24 = VAR_14->spa_root_vdev;
 kcondvar_t VAR_25;
 kmutex_t VAR_26;
 int VAR_27 = 0;

 FUNC_5(&VAR_25, ((void*)0), VAR_0, ((void*)0));
 FUNC_17(&VAR_26, ((void*)0), VAR_4, ((void*)0));
 FUNC_15(&VAR_26);
 if (FUNC_18(VAR_16, VAR_8)) {
  nvlist_t *VAR_28 = FUNC_10(VAR_16,
      VAR_8);

  if (FUNC_18(VAR_28, VAR_12) &&
      FUNC_12(VAR_28, VAR_12) == 0) {
   FUNC_25(VAR_24, VAR_15, &VAR_23);
   VAR_27 = FUNC_3(VAR_2);
   goto out;
  }
 }

 VAR_21 = FUNC_20(VAR_14, VAR_15);


 VAR_21 += VAR_21 * FUNC_21(250) / 1000;

 VAR_22 = FUNC_13() + VAR_21;

 while (FUNC_13() < VAR_22) {
  (void) FUNC_23(FUNC_22(VAR_14),
      FUNC_2(VAR_22 - FUNC_13()));

  FUNC_25(VAR_24, VAR_15, &VAR_23);

  if (VAR_17 != VAR_15->ub_txg || VAR_18 != VAR_15->ub_timestamp ||
      VAR_20 != (FUNC_1(VAR_15) ? FUNC_0(VAR_15) : 0)) {
   FUNC_26("multihost activity detected "
       "txg %llu ub_txg  %llu "
       "timestamp %llu ub_timestamp  %llu "
       "mmp_config %#llx ub_mmp_config %#llx",
       VAR_17, VAR_15->ub_txg, VAR_18, VAR_15->ub_timestamp,
       VAR_19, VAR_15->ub_mmp_config);

   VAR_27 = FUNC_3(VAR_2);
   break;
  }

  if (VAR_23) {
   FUNC_19(VAR_23);
   VAR_23 = ((void*)0);
  }

  VAR_27 = FUNC_6(&VAR_25, &VAR_26, FUNC_7() + VAR_13);
  if (VAR_27 != -1) {
   VAR_27 = FUNC_3(VAR_1);
   break;
  }
  VAR_27 = 0;
 }

out:
 FUNC_16(&VAR_26);
 FUNC_14(&VAR_26);
 FUNC_4(&VAR_25);
 if (VAR_27 == VAR_2) {
  char *VAR_29 = "<unknown>";
  uint64_t VAR_30 = 0;

  if (VAR_23) {
   if (FUNC_18(VAR_23, VAR_7)) {
    VAR_29 = FUNC_11(VAR_23,
        VAR_7);
    FUNC_8(VAR_14->spa_load_info,
        VAR_10, VAR_29);
   }

   if (FUNC_18(VAR_23, VAR_6)) {
    VAR_30 = FUNC_12(VAR_23,
        VAR_6);
    FUNC_9(VAR_14->spa_load_info,
        VAR_9, VAR_30);
   }
  }

  FUNC_9(VAR_14->spa_load_info,
      VAR_11, VAR_3);
  FUNC_9(VAR_14->spa_load_info,
      VAR_12, 0);

  VAR_27 = FUNC_24(VAR_24, VAR_5, VAR_2);
 }

 if (VAR_23)
  FUNC_19(VAR_23);

 return (VAR_27);
}
