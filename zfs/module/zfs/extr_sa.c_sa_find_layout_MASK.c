
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_13__ {int sa_lock; int sa_layout_num_tree; int sa_layout_hash_tree; } ;
typedef TYPE_1__ sa_os_t ;
struct TYPE_14__ {scalar_t__ lot_hash; scalar_t__ lot_instance; } ;
typedef TYPE_2__ sa_lot_t ;
typedef int sa_attr_type_t ;
struct TYPE_15__ {TYPE_1__* os_sa; } ;
typedef TYPE_3__ objset_t ;
typedef int dmu_tx_t ;
typedef int boolean_t ;
typedef int avl_index_t ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,int *,int,int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int *,int) ;

__attribute__((used)) static void
FUNC_7(objset_t *VAR_2, uint64_t VAR_3, sa_attr_type_t *VAR_4,
    int VAR_5, dmu_tx_t *VAR_6, sa_lot_t **VAR_7)
{
 sa_lot_t *VAR_8, VAR_9;
 avl_index_t VAR_10;
 sa_os_t *VAR_11 = VAR_2->os_sa;
 boolean_t VAR_12 = VAR_0;

 FUNC_3(&VAR_11->sa_lock);
 VAR_9.lot_hash = VAR_3;
 VAR_9.lot_instance = 0;
 VAR_8 = FUNC_1(&VAR_11->sa_layout_hash_tree, &VAR_9, &VAR_10);
 if (VAR_8) {
  for (; VAR_8 && VAR_8->lot_hash == VAR_3;
      VAR_8 = FUNC_0(&VAR_11->sa_layout_hash_tree, VAR_8)) {
   if (FUNC_6(VAR_8, VAR_4, VAR_5) == 0) {
    VAR_12 = VAR_1;
    break;
   }
  }
 }
 if (!VAR_12) {
  VAR_8 = FUNC_5(VAR_2, VAR_4, VAR_5,
      FUNC_2(&VAR_11->sa_layout_num_tree), VAR_3, VAR_1, VAR_6);
 }
 FUNC_4(&VAR_11->sa_lock);
 *VAR_7 = VAR_8;
}
