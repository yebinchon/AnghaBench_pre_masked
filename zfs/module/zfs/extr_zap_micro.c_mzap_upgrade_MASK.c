
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int zap_num_chunks; } ;
struct TYPE_19__ {scalar_t__* zap_object; int zap_objset; TYPE_2__ zap_m; TYPE_1__* zap_dbuf; int zap_rwlock; } ;
typedef TYPE_3__ zap_t ;
struct TYPE_20__ {TYPE_3__* zn_zap; } ;
typedef TYPE_4__ zap_name_t ;
typedef int zap_flags_t ;
struct TYPE_21__ {TYPE_6__* mz_chunk; } ;
typedef TYPE_5__ mzap_phys_t ;
struct TYPE_22__ {scalar_t__* mze_name; int mze_value; int mze_cd; } ;
typedef TYPE_6__ mzap_ent_phys_t ;
typedef int dmu_tx_t ;
struct TYPE_17__ {int db_size; int db_data; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_5__*,int) ;
 int FUNC_4 (int ,scalar_t__*,unsigned long long,int ,int *) ;
 int FUNC_5 (char*,scalar_t__*,int) ;
 int FUNC_6 (TYPE_4__*,int,int,int*,int ,void*,int *) ;
 unsigned long long VAR_1 ;
 int FUNC_7 (TYPE_3__*,int *,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 TYPE_5__* FUNC_9 (int,int ) ;
 int FUNC_10 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_11 (TYPE_3__*,scalar_t__*,int ) ;
 int FUNC_12 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_13(zap_t **VAR_2, void *VAR_3, dmu_tx_t *VAR_4, zap_flags_t VAR_5)
{
 int VAR_6 = 0;
 zap_t *VAR_7 = *VAR_2;

 FUNC_0(FUNC_1(&VAR_7->zap_rwlock));

 int VAR_8 = VAR_7->zap_dbuf->db_size;
 mzap_phys_t *VAR_9 = FUNC_9(VAR_8, VAR_0);
 FUNC_3(VAR_7->zap_dbuf->db_data, VAR_9, VAR_8);
 int VAR_10 = VAR_7->zap_m.zap_num_chunks;

 if (!VAR_5) {
  VAR_6 = FUNC_4(VAR_7->zap_objset, VAR_7->zap_object,
      1ULL << VAR_1, 0, VAR_4);
  if (VAR_6 != 0) {
   FUNC_10(VAR_9, VAR_8);
   return (VAR_6);
  }
 }

 FUNC_5("upgrading obj=%llu with %u chunks\n",
     VAR_7->zap_object, VAR_10);

 FUNC_8(VAR_7);

 FUNC_7(VAR_7, VAR_4, VAR_5);

 for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  mzap_ent_phys_t *VAR_12 = &VAR_9->mz_chunk[VAR_11];
  if (VAR_12->mze_name[0] == 0)
   continue;
  FUNC_5("adding %s=%llu\n",
      VAR_12->mze_name, VAR_12->mze_value);
  zap_name_t *VAR_13 = FUNC_11(VAR_7, VAR_12->mze_name, 0);

  FUNC_2(FUNC_6(VAR_13, 8, 1, &VAR_12->mze_value, VAR_12->mze_cd,
      VAR_3, VAR_4));
  VAR_7 = VAR_13->zn_zap;
  FUNC_12(VAR_13);
 }
 FUNC_10(VAR_9, VAR_8);
 *VAR_2 = VAR_7;
 return (0);
}
