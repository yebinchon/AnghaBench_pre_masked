
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int zap_num_entries; } ;
struct TYPE_12__ {TYPE_1__ zap_m; int zap_ismicro; } ;
typedef TYPE_2__ zap_t ;
typedef int zap_name_t ;
struct TYPE_13__ {size_t mze_chunkid; } ;
typedef TYPE_3__ mzap_ent_t ;
typedef int mzap_ent_phys_t ;
typedef int matchtype_t ;
typedef int dmu_tx_t ;
struct TYPE_14__ {int * mz_chunk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 TYPE_6__* FUNC_5 (TYPE_2__*) ;
 int * FUNC_6 (TYPE_2__*,char const*,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(zap_t *VAR_2, const char *VAR_3,
    matchtype_t VAR_4, dmu_tx_t *VAR_5)
{
 int VAR_6 = 0;

 zap_name_t *VAR_7 = FUNC_6(VAR_2, VAR_3, VAR_4);
 if (VAR_7 == ((void*)0))
  return (FUNC_0(VAR_1));
 if (!VAR_2->zap_ismicro) {
  VAR_6 = FUNC_2(VAR_7, VAR_5);
 } else {
  mzap_ent_t *VAR_8 = FUNC_3(VAR_7);
  if (VAR_8 == ((void*)0)) {
   VAR_6 = FUNC_0(VAR_0);
  } else {
   VAR_2->zap_m.zap_num_entries--;
   FUNC_1(&FUNC_5(VAR_2)->mz_chunk[VAR_8->mze_chunkid],
       sizeof (mzap_ent_phys_t));
   FUNC_4(VAR_2, VAR_8);
  }
 }
 FUNC_7(VAR_7);
 return (VAR_6);
}
