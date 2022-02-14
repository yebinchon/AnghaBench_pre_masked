
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zap_cursor_t ;
struct TYPE_12__ {int za_first_integer; int za_name; } ;
typedef TYPE_1__ zap_attribute_t ;
typedef int uint64_t ;
typedef int spacemap_zap ;
struct TYPE_13__ {int spa_sm_logs_by_txg; int spa_metaslabs_by_flushed; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_14__ {int sls_mscount; int sls_txg; } ;
typedef TYPE_3__ spa_log_sm_t ;
typedef int metaslab_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int *,TYPE_3__*,int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,char*,int,...) ;
 TYPE_3__* FUNC_8 (int ,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,int ) ;
 int FUNC_13 (int *,TYPE_1__*) ;
 int FUNC_14 (int ,int ,int ,int,int,int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static int
FUNC_16(spa_t *VAR_3)
{
 int VAR_4;
 uint64_t VAR_5;

 FUNC_0(FUNC_5(&VAR_3->spa_sm_logs_by_txg));

 VAR_4 = FUNC_14(FUNC_9(VAR_3), VAR_0,
     VAR_1, sizeof (VAR_5), 1, &VAR_5);
 if (VAR_4 == VAR_2) {

  return (0);
 } else if (VAR_4 != 0) {
  FUNC_7(VAR_3, "spa_ld_log_sm_metadata(): failed at "
      "zap_lookup(DMU_POOL_DIRECTORY_OBJECT) [error %d]",
      VAR_4);
  return (VAR_4);
 }

 zap_cursor_t VAR_6;
 zap_attribute_t VAR_7;
 for (FUNC_12(&VAR_6, FUNC_9(VAR_3), VAR_5);
     (VAR_4 = FUNC_13(&VAR_6, &VAR_7)) == 0;
     FUNC_10(&VAR_6)) {
  uint64_t VAR_8 = FUNC_15(VAR_7.za_name, ((void*)0));
  spa_log_sm_t *VAR_9 =
      FUNC_8(VAR_7.za_first_integer, VAR_8);
  FUNC_2(&VAR_3->spa_sm_logs_by_txg, VAR_9);
 }
 FUNC_11(&VAR_6);
 if (VAR_4 != VAR_2) {
  FUNC_7(VAR_3, "spa_ld_log_sm_metadata(): failed at "
      "zap_cursor_retrieve(spacemap_zap) [error %d]",
      VAR_4);
  return (VAR_4);
 }

 for (metaslab_t *VAR_10 = FUNC_4(&VAR_3->spa_metaslabs_by_flushed);
     VAR_10; VAR_10 = FUNC_1(&VAR_3->spa_metaslabs_by_flushed, VAR_10)) {
  spa_log_sm_t VAR_11 = { .sls_txg = FUNC_6(VAR_10) };
  spa_log_sm_t *VAR_12 = FUNC_3(&VAR_3->spa_sm_logs_by_txg,
      &VAR_11, ((void*)0));
  FUNC_0(VAR_12 != ((void*)0));
  if (VAR_12 == ((void*)0)) {
   FUNC_7(VAR_3, "spa_ld_log_sm_metadata(): bug "
       "encountered: could not find log spacemap for "
       "TXG %ld [error %d]",
       FUNC_6(VAR_10), VAR_2);
   return (VAR_2);
  }
  VAR_12->sls_mscount++;
 }

 return (0);
}
