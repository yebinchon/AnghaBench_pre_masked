
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sm_phys; } ;
typedef TYPE_2__ space_map_t ;
typedef int int64_t ;
struct TYPE_4__ {int smp_alloc; } ;



int64_t
FUNC_0(space_map_t *VAR_0)
{
 return (VAR_0 != ((void*)0) ? VAR_0->sm_phys->smp_alloc : 0);
}
