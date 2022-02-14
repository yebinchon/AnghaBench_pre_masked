
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int spl_kmem_magazine_t ;
struct TYPE_4__ {int skc_lock; } ;
typedef TYPE_1__ spl_kmem_cache_t ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(spl_kmem_cache_t *VAR_0, spl_kmem_magazine_t *VAR_1, int VAR_2)
{
 FUNC_1(&VAR_0->skc_lock);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->skc_lock);
}
