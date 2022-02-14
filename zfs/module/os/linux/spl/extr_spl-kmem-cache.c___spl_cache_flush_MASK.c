
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int skm_avail; scalar_t__ skm_magic; int * skm_objs; } ;
typedef TYPE_1__ spl_kmem_magazine_t ;
struct TYPE_7__ {scalar_t__ skc_magic; } ;
typedef TYPE_2__ spl_kmem_cache_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_4(spl_kmem_cache_t *VAR_2, spl_kmem_magazine_t *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = FUNC_1(VAR_4, VAR_3->skm_avail);

 FUNC_0(VAR_2->skc_magic == VAR_0);
 FUNC_0(VAR_3->skm_magic == VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_3(VAR_2, VAR_3->skm_objs[VAR_5]);

 VAR_3->skm_avail -= VAR_6;
 FUNC_2(VAR_3->skm_objs, &(VAR_3->skm_objs[VAR_6]),
     sizeof (void *) * VAR_3->skm_avail);
}
