
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int skc_flags; int skc_ref; } ;
typedef TYPE_1__ spl_kmem_cache_t ;
struct TYPE_6__ {int ska_flags; TYPE_1__* ska_cache; } ;
typedef TYPE_2__ spl_kmem_alloc_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 spl_kmem_alloc_t *VAR_2 = (spl_kmem_alloc_t *)VAR_1;
 spl_kmem_cache_t *VAR_3 = VAR_2->ska_cache;

 (void) FUNC_0(VAR_3, VAR_2->ska_flags);

 FUNC_1(&VAR_3->skc_ref);
 FUNC_5();
 FUNC_2(VAR_0, &VAR_3->skc_flags);
 FUNC_4();

 FUNC_3(VAR_2);
}
