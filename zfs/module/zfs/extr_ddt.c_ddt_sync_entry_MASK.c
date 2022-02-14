
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int uint64_t ;
typedef enum ddt_type { ____Placeholder_ddt_type } ddt_type ;
typedef enum ddt_class { ____Placeholder_ddt_class } ddt_class ;
struct TYPE_22__ {int dp_scan; } ;
typedef TYPE_2__ dsl_pool_t ;
typedef int dmu_tx_t ;
struct TYPE_23__ {int ddt_checksum; TYPE_1__* ddt_spa; } ;
typedef TYPE_3__ ddt_t ;
struct TYPE_24__ {scalar_t__ ddp_phys_birth; scalar_t__ ddp_refcnt; } ;
typedef TYPE_4__ ddt_phys_t ;
typedef int ddt_key_t ;
struct TYPE_25__ {int dde_type; int dde_class; int dde_loaded; TYPE_4__* dde_phys; int ** dde_lead_zio; int dde_loading; int dde_key; } ;
typedef TYPE_5__ ddt_entry_t ;
struct TYPE_21__ {TYPE_2__* spa_dsl_pool; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,int,int *) ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int,int,TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,int,int,TYPE_5__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int,int,TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *,TYPE_4__*,int) ;
 int FUNC_9 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_10 (int ,int ,TYPE_5__*,int *) ;

__attribute__((used)) static void
FUNC_11(ddt_t *VAR_7, ddt_entry_t *VAR_8, dmu_tx_t *VAR_9, uint64_t VAR_10)
{
 dsl_pool_t *VAR_11 = VAR_7->ddt_spa->spa_dsl_pool;
 ddt_phys_t *VAR_12 = VAR_8->dde_phys;
 ddt_key_t *VAR_13 = &VAR_8->dde_key;
 enum ddt_type VAR_14 = VAR_8->dde_type;
 enum ddt_type VAR_15 = VAR_5;
 enum ddt_class VAR_16 = VAR_8->dde_class;
 enum ddt_class VAR_17;
 uint64_t VAR_18 = 0;

 FUNC_0(VAR_8->dde_loaded);
 FUNC_0(!VAR_8->dde_loading);

 for (int VAR_19 = 0; VAR_19 < VAR_3; VAR_19++, VAR_12++) {
  FUNC_0(VAR_8->dde_lead_zio[VAR_19] == ((void*)0));
  if (VAR_12->ddp_phys_birth == 0) {
   FUNC_0(VAR_12->ddp_refcnt == 0);
   continue;
  }
  if (VAR_19 == VAR_2) {




   FUNC_8(VAR_7, VAR_13, VAR_12, VAR_10);
   continue;
  }
  if (VAR_12->ddp_refcnt == 0)
   FUNC_8(VAR_7, VAR_13, VAR_12, VAR_10);
  VAR_18 += VAR_12->ddp_refcnt;
 }


 FUNC_1(VAR_8->dde_phys[VAR_2].ddp_phys_birth);
 if (VAR_18 > 1)
  VAR_17 = VAR_0;
 else
  VAR_17 = VAR_1;

 if (VAR_14 != VAR_4 &&
     (VAR_14 != VAR_15 || VAR_16 != VAR_17 || VAR_18 == 0)) {
  FUNC_2(FUNC_6(VAR_7, VAR_14, VAR_16, VAR_8, VAR_9) == 0);
  FUNC_0(FUNC_5(VAR_7, VAR_14, VAR_16, VAR_8) == VAR_6);
 }

 if (VAR_18 != 0) {
  VAR_8->dde_type = VAR_15;
  VAR_8->dde_class = VAR_17;
  FUNC_9(VAR_7, VAR_8, 0);
  if (!FUNC_4(VAR_7, VAR_15, VAR_17))
   FUNC_3(VAR_7, VAR_15, VAR_17, VAR_9);
  FUNC_2(FUNC_7(VAR_7, VAR_15, VAR_17, VAR_8, VAR_9) == 0);
  if (VAR_17 < VAR_16) {
   FUNC_10(VAR_11->dp_scan,
       VAR_7->ddt_checksum, VAR_8, VAR_9);
  }
 }
}
