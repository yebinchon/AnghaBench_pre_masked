
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ddp_phys_birth; int * ddp_dva; } ;
typedef TYPE_1__ ddt_phys_t ;
struct TYPE_6__ {scalar_t__ dde_phys; } ;
typedef TYPE_2__ ddt_entry_t ;
typedef int blkptr_t ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,int *) ;

ddt_phys_t *
FUNC_3(const ddt_entry_t *VAR_1, const blkptr_t *VAR_2)
{
 ddt_phys_t *VAR_3 = (ddt_phys_t *)VAR_1->dde_phys;

 for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_3++) {
  if (FUNC_2(FUNC_0(VAR_2), &VAR_3->ddp_dva[0]) &&
      FUNC_1(VAR_2) == VAR_3->ddp_phys_birth)
   return (VAR_3);
 }
 return (((void*)0));
}
