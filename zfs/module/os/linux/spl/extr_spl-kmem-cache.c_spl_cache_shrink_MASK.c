
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sks_magic; int sks_ref; int sks_objs; int sks_list; int sks_age; int sks_free_list; TYPE_3__* sks_cache; } ;
typedef TYPE_1__ spl_kmem_slab_t ;
struct TYPE_8__ {scalar_t__ sko_magic; int sko_list; TYPE_1__* sko_slab; } ;
typedef TYPE_2__ spl_kmem_obj_t ;
struct TYPE_9__ {scalar_t__ skc_magic; int skc_slab_alloc; int skc_partial_list; int skc_obj_alloc; } ;
typedef TYPE_3__ spl_kmem_cache_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,void*) ;

__attribute__((used)) static void
FUNC_5(spl_kmem_cache_t *VAR_4, void *VAR_5)
{
 spl_kmem_slab_t *VAR_6 = ((void*)0);
 spl_kmem_obj_t *VAR_7 = ((void*)0);

 FUNC_0(VAR_4->skc_magic == VAR_0);

 VAR_7 = FUNC_4(VAR_4, VAR_5);
 FUNC_0(VAR_7->sko_magic == VAR_1);
 VAR_6 = VAR_7->sko_slab;
 FUNC_0(VAR_6->sks_magic == VAR_2);
 FUNC_0(VAR_6->sks_cache == VAR_4);
 FUNC_1(&VAR_7->sko_list, &VAR_6->sks_free_list);

 VAR_6->sks_age = VAR_3;
 VAR_6->sks_ref--;
 VAR_4->skc_obj_alloc--;






 if (VAR_6->sks_ref == (VAR_6->sks_objs - 1)) {
  FUNC_3(&VAR_6->sks_list);
  FUNC_1(&VAR_6->sks_list, &VAR_4->skc_partial_list);
 }





 if (VAR_6->sks_ref == 0) {
  FUNC_3(&VAR_6->sks_list);
  FUNC_2(&VAR_6->sks_list, &VAR_4->skc_partial_list);
  VAR_4->skc_slab_alloc--;
 }
}
