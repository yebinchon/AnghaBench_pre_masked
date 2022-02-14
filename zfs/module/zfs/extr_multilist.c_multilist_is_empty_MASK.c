
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ml_num_sublists; TYPE_2__* ml_sublists; } ;
typedef TYPE_1__ multilist_t ;
struct TYPE_5__ {int mls_lock; int mls_list; } ;
typedef TYPE_2__ multilist_sublist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(multilist_t *VAR_2)
{
 for (int VAR_3 = 0; VAR_3 < VAR_2->ml_num_sublists; VAR_3++) {
  multilist_sublist_t *VAR_4 = &VAR_2->ml_sublists[VAR_3];

  boolean_t VAR_5 = !FUNC_0(&VAR_4->mls_lock);

  if (VAR_5)
   FUNC_2(&VAR_4->mls_lock);

  if (!FUNC_1(&VAR_4->mls_list)) {
   if (VAR_5)
    FUNC_3(&VAR_4->mls_lock);

   return (VAR_0);
  }

  if (VAR_5)
   FUNC_3(&VAR_4->mls_lock);
 }

 return (VAR_1);
}
