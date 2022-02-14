
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {TYPE_1__* bpo_phys; scalar_t__ bpo_havesubobj; } ;
typedef TYPE_2__ bpobj_t ;
struct TYPE_10__ {int bpi_unprocessed_subobjs; int bpi_index; struct TYPE_10__* bpi_parent; TYPE_2__* bpi_bpo; } ;
typedef TYPE_3__ bpobj_info_t ;
struct TYPE_8__ {scalar_t__ bpo_subobjs; int bpo_num_subobjs; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int,int ) ;

__attribute__((used)) static bpobj_info_t *
FUNC_1(bpobj_t *VAR_1, bpobj_info_t *VAR_2, uint64_t VAR_3)
{
 bpobj_info_t *VAR_4 = FUNC_0(sizeof (bpobj_info_t), VAR_0);
 VAR_4->bpi_bpo = VAR_1;
 VAR_4->bpi_parent = VAR_2;
 VAR_4->bpi_index = VAR_3;
 if (VAR_1->bpo_havesubobj && VAR_1->bpo_phys->bpo_subobjs != 0) {
  VAR_4->bpi_unprocessed_subobjs = VAR_1->bpo_phys->bpo_num_subobjs;
 }
 return (VAR_4);
}
