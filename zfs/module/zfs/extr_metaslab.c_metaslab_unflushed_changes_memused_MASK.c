
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {TYPE_3__* ms_unflushed_allocs; TYPE_3__* ms_unflushed_frees; } ;
typedef TYPE_2__ metaslab_t ;
struct TYPE_5__ {int bt_elem_size; } ;
struct TYPE_7__ {TYPE_1__ rt_root; } ;


 int FUNC_0 (TYPE_3__*) ;

uint64_t
FUNC_1(metaslab_t *VAR_0)
{
 return ((FUNC_0(VAR_0->ms_unflushed_allocs) +
     FUNC_0(VAR_0->ms_unflushed_frees)) *
     VAR_0->ms_unflushed_allocs->rt_root.bt_elem_size);
}
