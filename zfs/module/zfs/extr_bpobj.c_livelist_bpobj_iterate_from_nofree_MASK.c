
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {TYPE_1__* bpo_phys; scalar_t__ bpo_havesubobj; } ;
typedef TYPE_2__ bpobj_t ;
typedef int bpobj_itor_t ;
typedef int bpobj_info_t ;
struct TYPE_5__ {int bpo_subobjs; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (int *,int ,void*,int ,int *,int ) ;
 int FUNC_3 (int *,int) ;

int
FUNC_4(bpobj_t *VAR_1, bpobj_itor_t VAR_2, void *VAR_3,
    int64_t VAR_4)
{
 if (VAR_1->bpo_havesubobj)
  FUNC_0(VAR_1->bpo_phys->bpo_subobjs);
 bpobj_info_t *VAR_5 = FUNC_1(VAR_1, ((void*)0), 0);
 int VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3, VAR_4, ((void*)0), VAR_0);
 FUNC_3(VAR_5, sizeof (bpobj_info_t));
 return (VAR_6);
}
