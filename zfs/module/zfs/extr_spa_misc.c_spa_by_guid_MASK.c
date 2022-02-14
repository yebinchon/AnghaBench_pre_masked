
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_7__ {scalar_t__ spa_state; int * spa_pending_vdev; int * spa_root_vdev; } ;
typedef TYPE_1__ spa_t ;
typedef int avl_tree_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (int *,scalar_t__) ;

spa_t *
FUNC_6(uint64_t VAR_3, uint64_t VAR_4)
{
 spa_t *VAR_5;
 avl_tree_t *VAR_6 = &VAR_1;

 FUNC_0(FUNC_2(&VAR_2));

 for (VAR_5 = FUNC_3(VAR_6); VAR_5 != ((void*)0); VAR_5 = FUNC_1(VAR_6, VAR_5)) {
  if (VAR_5->spa_state == VAR_0)
   continue;
  if (VAR_5->spa_root_vdev == ((void*)0))
   continue;
  if (FUNC_4(VAR_5) == VAR_3) {
   if (VAR_4 == 0)
    break;

   if (FUNC_5(VAR_5->spa_root_vdev,
       VAR_4) != ((void*)0))
    break;




   if (VAR_5->spa_pending_vdev) {
    if (FUNC_5(VAR_5->spa_pending_vdev,
        VAR_4) != ((void*)0))
     break;
   }
  }
 }

 return (VAR_5);
}
