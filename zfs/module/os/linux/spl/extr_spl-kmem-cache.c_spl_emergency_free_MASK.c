
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ske_obj; int ske_node; } ;
typedef TYPE_1__ spl_kmem_emergency_t ;
struct TYPE_7__ {int skc_lock; int skc_obj_total; int skc_obj_emergency; int skc_emergency_tree; int skc_obj_size; } ;
typedef TYPE_2__ spl_kmem_cache_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *,void*) ;

__attribute__((used)) static int
FUNC_7(spl_kmem_cache_t *VAR_1, void *VAR_2)
{
 spl_kmem_emergency_t *VAR_3;
 int VAR_4 = FUNC_1(VAR_1->skc_obj_size);

 FUNC_4(&VAR_1->skc_lock);
 VAR_3 = FUNC_6(&VAR_1->skc_emergency_tree, VAR_2);
 if (VAR_3) {
  FUNC_3(&VAR_3->ske_node, &VAR_1->skc_emergency_tree);
  VAR_1->skc_obj_emergency--;
  VAR_1->skc_obj_total--;
 }
 FUNC_5(&VAR_1->skc_lock);

 if (VAR_3 == ((void*)0))
  return (-VAR_0);

 FUNC_0(VAR_3->ske_obj, VAR_4);
 FUNC_2(VAR_3);

 return (0);
}
