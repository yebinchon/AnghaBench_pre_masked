
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* zl_itxg; int zl_spa; } ;
typedef TYPE_2__ zilog_t ;
typedef size_t uint64_t ;
struct TYPE_11__ {size_t itxg_txg; int itxg_lock; TYPE_1__* itxg_itxs; } ;
typedef TYPE_3__ itxg_t ;
struct TYPE_12__ {int ia_list; } ;
typedef TYPE_4__ itx_async_node_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;
struct TYPE_9__ {int i_sync_list; int i_async_tree; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 TYPE_4__* FUNC_0 (int *,void**) ;
 TYPE_4__* FUNC_1 (int *,size_t*,int *) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;

void
FUNC_9(zilog_t *VAR_4, uint64_t VAR_5)
{
 uint64_t VAR_6, VAR_7;
 itx_async_node_t *VAR_8;
 avl_tree_t *VAR_9;
 avl_index_t VAR_10;

 if (FUNC_7(VAR_4->zl_spa) != VAR_2)
  VAR_6 = VAR_3;
 else
  VAR_6 = FUNC_8(VAR_4->zl_spa) + 1;





 for (VAR_7 = VAR_6; VAR_7 < (VAR_6 + VAR_0); VAR_7++) {
  itxg_t *VAR_11 = &VAR_4->zl_itxg[VAR_7 & VAR_1];

  FUNC_5(&VAR_11->itxg_lock);
  if (VAR_11->itxg_txg != VAR_7) {
   FUNC_6(&VAR_11->itxg_lock);
   continue;
  }







  VAR_9 = &VAR_11->itxg_itxs->i_async_tree;
  if (VAR_5 != 0) {
   VAR_8 = FUNC_1(VAR_9, &VAR_5, &VAR_10);
   if (VAR_8 != ((void*)0)) {
    FUNC_4(&VAR_11->itxg_itxs->i_sync_list,
        &VAR_8->ia_list);
   }
  } else {
   void *VAR_12 = ((void*)0);

   while ((VAR_8 = FUNC_0(VAR_9, &VAR_12)) != ((void*)0)) {
    FUNC_4(&VAR_11->itxg_itxs->i_sync_list,
        &VAR_8->ia_list);
    FUNC_3(&VAR_8->ia_list);
    FUNC_2(VAR_8, sizeof (itx_async_node_t));
   }
  }
  FUNC_6(&VAR_11->itxg_lock);
 }
}
