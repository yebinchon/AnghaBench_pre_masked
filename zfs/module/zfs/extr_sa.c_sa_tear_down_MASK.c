
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int sa_user_table_sz; int lot_attr_count; int sa_lock; int sa_layout_num_tree; int sa_layout_hash_tree; struct TYPE_12__* lot_attrs; int lot_idx_tab; struct TYPE_12__* sa_user_table; } ;
typedef TYPE_1__ sa_os_t ;
typedef TYPE_1__ sa_lot_t ;
struct TYPE_13__ {int sa_refcount; } ;
typedef TYPE_3__ sa_idx_tab_t ;
typedef int sa_attr_type_t ;
struct TYPE_14__ {TYPE_1__* os_sa; } ;
typedef TYPE_4__ objset_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,void**) ;
 int FUNC_3 (TYPE_1__*,int) ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_8 (int *) ;

void
FUNC_9(objset_t *VAR_0)
{
 sa_os_t *VAR_1 = VAR_0->os_sa;
 sa_lot_t *VAR_2;
 void *VAR_3;

 FUNC_3(VAR_1->sa_user_table, VAR_1->sa_user_table_sz);



 FUNC_6(VAR_1);

 VAR_3 = ((void*)0);
 while ((VAR_2 =
     FUNC_2(&VAR_1->sa_layout_hash_tree, &VAR_3))) {
  sa_idx_tab_t *VAR_4;
  while ((VAR_4 = FUNC_4(&VAR_2->lot_idx_tab))) {
   FUNC_0(FUNC_8(&VAR_4->sa_refcount));
   FUNC_7(VAR_0, VAR_4);
  }
 }

 VAR_3 = ((void*)0);
 while ((VAR_2 = FUNC_2(&VAR_1->sa_layout_num_tree, &VAR_3))) {
  FUNC_3(VAR_2->lot_attrs,
      sizeof (sa_attr_type_t) * VAR_2->lot_attr_count);
  FUNC_3(VAR_2, sizeof (sa_lot_t));
 }

 FUNC_1(&VAR_1->sa_layout_hash_tree);
 FUNC_1(&VAR_1->sa_layout_num_tree);
 FUNC_5(&VAR_1->sa_lock);

 FUNC_3(VAR_1, sizeof (sa_os_t));
 VAR_0->os_sa = ((void*)0);
}
