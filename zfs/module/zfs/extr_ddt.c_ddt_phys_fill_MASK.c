
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ddp_phys_birth; int * ddp_dva; } ;
typedef TYPE_1__ ddt_phys_t ;
struct TYPE_7__ {int * blk_dva; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 int VAR_0 ;

void
FUNC_2(ddt_phys_t *VAR_1, const blkptr_t *VAR_2)
{
 FUNC_0(VAR_1->ddp_phys_birth == 0);

 for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_1->ddp_dva[VAR_3] = VAR_2->blk_dva[VAR_3];
 VAR_1->ddp_phys_birth = FUNC_1(VAR_2);
}
