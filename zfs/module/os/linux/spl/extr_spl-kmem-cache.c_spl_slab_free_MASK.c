
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_4__ {scalar_t__ sks_magic; scalar_t__ sks_ref; int sks_free_list; int sks_list; scalar_t__ sks_objs; TYPE_2__* sks_cache; } ;
typedef TYPE_1__ spl_kmem_slab_t ;
struct TYPE_5__ {scalar_t__ skc_magic; int skc_slab_total; int skc_obj_total; } ;
typedef TYPE_2__ spl_kmem_cache_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct list_head*) ;

__attribute__((used)) static void
FUNC_4(spl_kmem_slab_t *VAR_2,
    struct list_head *VAR_3, struct list_head *VAR_4)
{
 spl_kmem_cache_t *VAR_5;

 FUNC_0(VAR_2->sks_magic == VAR_1);
 FUNC_0(VAR_2->sks_ref == 0);

 VAR_5 = VAR_2->sks_cache;
 FUNC_0(VAR_5->skc_magic == VAR_0);







 VAR_5->skc_obj_total -= VAR_2->sks_objs;
 VAR_5->skc_slab_total--;
 FUNC_2(&VAR_2->sks_list);
 FUNC_1(&VAR_2->sks_list, VAR_3);
 FUNC_3(&VAR_2->sks_free_list, VAR_4);
}
