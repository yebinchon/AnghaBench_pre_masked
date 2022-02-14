
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {int bpo_lock; TYPE_1__* bpo_phys; scalar_t__ bpo_havecomp; } ;
typedef TYPE_2__ bpobj_t ;
struct TYPE_6__ {int bpo_uncomp; int bpo_comp; int bpo_bytes; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(bpobj_t *VAR_1, uint64_t *VAR_2, uint64_t *VAR_3, uint64_t *VAR_4)
{
 FUNC_0(FUNC_1(VAR_1));
 FUNC_3(&VAR_1->bpo_lock);

 *VAR_2 = VAR_1->bpo_phys->bpo_bytes;
 if (VAR_1->bpo_havecomp) {
  *VAR_3 = VAR_1->bpo_phys->bpo_comp;
  *VAR_4 = VAR_1->bpo_phys->bpo_uncomp;
  FUNC_4(&VAR_1->bpo_lock);
  return (0);
 } else {
  FUNC_4(&VAR_1->bpo_lock);
  return (FUNC_2(VAR_1, 0, VAR_0,
      VAR_2, VAR_3, VAR_4));
 }
}
