
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_7__ {TYPE_1__* bpo_phys; } ;
struct TYPE_8__ {TYPE_2__ dle_bpobj; } ;
typedef TYPE_3__ dsl_deadlist_entry_t ;
typedef int boolean_t ;
struct TYPE_6__ {int bpo_num_freed; int bpo_num_blkptrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_0(dsl_deadlist_entry_t *VAR_3,
    dsl_deadlist_entry_t *VAR_4)
{
 uint64_t VAR_5 = VAR_3->dle_bpobj.bpo_phys->bpo_num_freed +
     VAR_4->dle_bpobj.bpo_phys->bpo_num_freed;
 uint64_t VAR_6 = VAR_3->dle_bpobj.bpo_phys->bpo_num_blkptrs +
     VAR_4->dle_bpobj.bpo_phys->bpo_num_blkptrs;
 if ((VAR_6 - (2 * VAR_5)) < VAR_2)
  return (VAR_1);
 return (VAR_0);
}
