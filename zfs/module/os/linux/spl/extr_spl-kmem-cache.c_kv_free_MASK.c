
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int skc_flags; } ;
typedef TYPE_2__ spl_kmem_cache_t ;
struct TYPE_7__ {TYPE_1__* reclaim_state; } ;
struct TYPE_5__ {int reclaimed_slab; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void*,int) ;

__attribute__((used)) static void
FUNC_6(spl_kmem_cache_t *VAR_4, void *VAR_5, int VAR_6)
{
 FUNC_0(FUNC_2(VAR_5, VAR_2));
 if (VAR_3->reclaim_state)
  VAR_3->reclaim_state->reclaimed_slab += VAR_6 >> VAR_1;

 if (VAR_4->skc_flags & VAR_0) {
  FUNC_0(FUNC_1(VAR_6));
  FUNC_3((unsigned long)VAR_5, FUNC_4(VAR_6));
 } else {
  FUNC_5(VAR_5, VAR_6);
 }
}
