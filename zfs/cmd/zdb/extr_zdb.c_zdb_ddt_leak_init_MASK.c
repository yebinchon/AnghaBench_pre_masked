
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int zcb_dedup_asize; int zcb_dedup_blocks; } ;
typedef TYPE_1__ zdb_cb_t ;
struct TYPE_16__ {int ** spa_ddt; } ;
typedef TYPE_2__ spa_t ;
typedef int ddt_t ;
struct TYPE_17__ {scalar_t__ ddp_phys_birth; int ddp_refcnt; } ;
typedef TYPE_3__ ddt_phys_t ;
struct TYPE_18__ {int dde_key; TYPE_3__* dde_phys; } ;
typedef TYPE_4__ ddt_entry_t ;
struct TYPE_19__ {scalar_t__ ddb_class; size_t ddb_checksum; } ;
typedef TYPE_5__ ddt_bookmark_t ;
typedef int ddb ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (size_t,int *,TYPE_3__*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_5__*,TYPE_4__*) ;
 int * VAR_6 ;
 int FUNC_10 (TYPE_1__*,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_11(spa_t *VAR_7, zdb_cb_t *VAR_8)
{
 ddt_bookmark_t VAR_9;
 ddt_entry_t VAR_10;
 int VAR_11;
 int VAR_12;

 FUNC_0(!VAR_6['L']);

 FUNC_3(&VAR_9, sizeof (VAR_9));
 while ((VAR_11 = FUNC_9(VAR_7, &VAR_9, &VAR_10)) == 0) {
  blkptr_t VAR_13;
  ddt_phys_t *VAR_14 = VAR_10.dde_phys;

  if (VAR_9.ddb_class == VAR_1)
   return;

  FUNC_0(FUNC_8(&VAR_10) > 1);

  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++, VAR_14++) {
   if (VAR_14->ddp_phys_birth == 0)
    continue;
   FUNC_4(VAR_9.ddb_checksum,
       &VAR_10.dde_key, VAR_14, &VAR_13);
   if (VAR_12 == VAR_2) {
    FUNC_10(VAR_8, ((void*)0), &VAR_13, VAR_5);
   } else {
    VAR_8->zcb_dedup_asize +=
        FUNC_1(&VAR_13) * (VAR_14->ddp_refcnt - 1);
    VAR_8->zcb_dedup_blocks++;
   }
  }
  ddt_t *VAR_15 = VAR_7->spa_ddt[VAR_9.ddb_checksum];
  FUNC_5(VAR_15);
  FUNC_2(FUNC_7(VAR_15, &VAR_13, VAR_0) != ((void*)0));
  FUNC_6(VAR_15);
 }

 FUNC_0(VAR_11 == VAR_4);
}
