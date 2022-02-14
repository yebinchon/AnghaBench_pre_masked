
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ skm_magic; size_t skm_cpu; scalar_t__ skm_avail; int skm_refill; scalar_t__ skm_age; } ;
typedef TYPE_1__ spl_kmem_magazine_t ;
struct TYPE_6__ {int skc_delay; int skc_lock; TYPE_1__** skc_mag; } ;
typedef TYPE_2__ spl_kmem_cache_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_2 () ;
 int VAR_2 ;
 size_t FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 spl_kmem_cache_t *VAR_4 = (spl_kmem_cache_t *)VAR_3;
 spl_kmem_magazine_t *VAR_5 = VAR_4->skc_mag[FUNC_3()];

 FUNC_0(VAR_5->skm_magic == VAR_1);
 FUNC_0(VAR_5->skm_cpu == FUNC_3());
 FUNC_0(FUNC_2());


 if ((VAR_5->skm_avail == 0) ||
     FUNC_6(VAR_2, VAR_5->skm_age + VAR_4->skc_delay * VAR_0))
  return;






 if (!FUNC_4(&VAR_4->skc_lock))
  return;

 FUNC_1(VAR_4, VAR_5, VAR_5->skm_refill);
 FUNC_5(&VAR_4->skc_lock);
}
