
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int zlp_rewind; int zlp_txg; } ;
typedef TYPE_1__ zpool_load_policy_t ;
struct TYPE_17__ {scalar_t__ spa_state; int spa_last_open_failed; scalar_t__ spa_load_txg; scalar_t__ spa_last_ubsync_txg; int spa_load_info; int * spa_config; int spa_config_source; } ;
typedef TYPE_2__ spa_t ;
typedef scalar_t__ spa_load_state_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *,int **,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int * FUNC_8 (TYPE_2__*,int *,unsigned long long,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,scalar_t__,int ,int) ;
 TYPE_2__* FUNC_11 (char const*) ;
 int VAR_11 ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_13 (TYPE_2__*,void*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int,int) ;
 int FUNC_17 (char*,char const*) ;
 int FUNC_18 (int *,TYPE_1__*) ;
 int FUNC_19 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_20(const char *VAR_13, spa_t **VAR_14, void *VAR_15, nvlist_t *VAR_16,
    nvlist_t **VAR_17)
{
 spa_t *VAR_18;
 spa_load_state_t VAR_19 = VAR_7;
 int VAR_20;
 int VAR_21 = VAR_0;
 int VAR_22 = VAR_0;

 *VAR_14 = ((void*)0);







 if (FUNC_0(&VAR_12)) {
  FUNC_3(&VAR_12);
  VAR_21 = VAR_1;
 }

 if ((VAR_18 = FUNC_11(VAR_13)) == ((void*)0)) {
  if (VAR_21)
   FUNC_4(&VAR_12);
  return (FUNC_1(VAR_3));
 }

 if (VAR_18->spa_state == VAR_5) {
  zpool_load_policy_t VAR_23;

  VAR_22 = VAR_1;

  FUNC_18(VAR_16 ? VAR_16 : VAR_18->spa_config,
      &VAR_23);
  if (VAR_23.zlp_rewind & VAR_10)
   VAR_19 = VAR_8;

  FUNC_7(VAR_18, VAR_11);

  if (VAR_19 != VAR_8)
   VAR_18->spa_last_ubsync_txg = VAR_18->spa_load_txg = 0;
  VAR_18->spa_config_source = VAR_6;

  FUNC_17("spa_open_common: opening %s", VAR_13);
  VAR_20 = FUNC_10(VAR_18, VAR_19, VAR_23.zlp_txg,
      VAR_23.zlp_rewind);

  if (VAR_20 == VAR_2) {







   FUNC_15(VAR_18);
   FUNC_9(VAR_18);
   FUNC_16(VAR_18, VAR_1, VAR_1);
   FUNC_14(VAR_18);
   if (VAR_21)
    FUNC_4(&VAR_12);
   return (FUNC_1(VAR_3));
  }

  if (VAR_20) {





   if (VAR_17 != ((void*)0) && VAR_18->spa_config) {
    FUNC_2(FUNC_6(VAR_18->spa_config, VAR_17,
        VAR_4) == 0);
    FUNC_2(FUNC_5(*VAR_17,
        VAR_9,
        VAR_18->spa_load_info) == 0);
   }
   FUNC_15(VAR_18);
   FUNC_9(VAR_18);
   VAR_18->spa_last_open_failed = VAR_20;
   if (VAR_21)
    FUNC_4(&VAR_12);
   *VAR_14 = ((void*)0);
   return (VAR_20);
  }
 }

 FUNC_13(VAR_18, VAR_15);

 if (VAR_17 != ((void*)0))
  *VAR_17 = FUNC_8(VAR_18, ((void*)0), -1ULL, VAR_1);





 if (VAR_19 == VAR_8) {
  FUNC_2(FUNC_5(*VAR_17, VAR_9,
      VAR_18->spa_load_info) == 0);
 }

 if (VAR_21) {
  VAR_18->spa_last_open_failed = 0;
  VAR_18->spa_last_ubsync_txg = 0;
  VAR_18->spa_load_txg = 0;
  FUNC_4(&VAR_12);
 }

 if (VAR_22)
  FUNC_19(VAR_18, FUNC_12(VAR_18), VAR_1);

 *VAR_14 = VAR_18;

 return (0);
}
