
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_8__ {int spa_errlist_lock; int spa_errlist_last; int spa_errlist_scrub; scalar_t__ spa_scrub_finished; scalar_t__ spa_scrub_active; } ;
typedef TYPE_1__ spa_t ;
struct TYPE_9__ {int se_bookmark; } ;
typedef TYPE_2__ spa_error_entry_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,TYPE_2__*,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void
FUNC_6(spa_t *VAR_2, const zbookmark_phys_t *VAR_3)
{
 spa_error_entry_t VAR_4;
 spa_error_entry_t *VAR_5;
 avl_tree_t *VAR_6;
 avl_index_t VAR_7;





 if (FUNC_5(VAR_2) == VAR_1)
  return;

 FUNC_3(&VAR_2->spa_errlist_lock);





 if (VAR_2->spa_scrub_active || VAR_2->spa_scrub_finished)
  VAR_6 = &VAR_2->spa_errlist_scrub;
 else
  VAR_6 = &VAR_2->spa_errlist_last;

 VAR_4.se_bookmark = *VAR_3;
 if (FUNC_0(VAR_6, &VAR_4, &VAR_7) != ((void*)0)) {
  FUNC_4(&VAR_2->spa_errlist_lock);
  return;
 }

 VAR_5 = FUNC_2(sizeof (spa_error_entry_t), VAR_0);
 VAR_5->se_bookmark = *VAR_3;
 FUNC_1(VAR_6, VAR_5, VAR_7);

 FUNC_4(&VAR_2->spa_errlist_lock);
}
