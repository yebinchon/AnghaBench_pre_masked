
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_10__ {int * ddt_spa; } ;
typedef TYPE_1__ ddt_t ;
struct TYPE_11__ {int dds_blocks; int dds_lsize; int dds_psize; int dds_dsize; int dds_ref_blocks; int dds_ref_lsize; int dds_ref_psize; int dds_ref_dsize; } ;
typedef TYPE_2__ ddt_stat_t ;
struct TYPE_12__ {int ddp_refcnt; scalar_t__ ddp_phys_birth; int * ddp_dva; } ;
typedef TYPE_3__ ddt_phys_t ;
typedef int ddt_key_t ;
struct TYPE_13__ {int dde_key; TYPE_3__* dde_phys; } ;
typedef TYPE_4__ ddt_entry_t ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(ddt_t *VAR_1, ddt_entry_t *VAR_2, ddt_stat_t *VAR_3)
{
 spa_t *VAR_4 = VAR_1->ddt_spa;
 ddt_phys_t *VAR_5 = VAR_2->dde_phys;
 ddt_key_t *VAR_6 = &VAR_2->dde_key;
 uint64_t VAR_7 = FUNC_1(VAR_6);
 uint64_t VAR_8 = FUNC_2(VAR_6);

 FUNC_3(VAR_3, sizeof (*VAR_3));

 for (int VAR_9 = 0; VAR_9 < VAR_0; VAR_9++, VAR_5++) {
  uint64_t VAR_10 = 0;
  uint64_t VAR_11 = VAR_5->ddp_refcnt;

  if (VAR_5->ddp_phys_birth == 0)
   continue;

  for (int VAR_12 = 0; VAR_12 < FUNC_0(VAR_2); VAR_12++)
   VAR_10 += FUNC_4(VAR_4, &VAR_5->ddp_dva[VAR_12]);

  VAR_3->dds_blocks += 1;
  VAR_3->dds_lsize += VAR_7;
  VAR_3->dds_psize += VAR_8;
  VAR_3->dds_dsize += VAR_10;

  VAR_3->dds_ref_blocks += VAR_11;
  VAR_3->dds_ref_lsize += VAR_7 * VAR_11;
  VAR_3->dds_ref_psize += VAR_8 * VAR_11;
  VAR_3->dds_ref_dsize += VAR_10 * VAR_11;
 }
}
