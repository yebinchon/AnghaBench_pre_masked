
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
struct TYPE_4__ {unsigned long long aux_guid; unsigned long long aux_pool; int aux_count; } ;
typedef TYPE_1__ spa_aux_t ;
typedef int boolean_t ;
typedef int avl_tree_t ;


 TYPE_1__* FUNC_0 (int *,TYPE_1__*,int *) ;

boolean_t
FUNC_1(uint64_t VAR_0, uint64_t *VAR_1, int *VAR_2, avl_tree_t *VAR_3)
{
 spa_aux_t VAR_4, *VAR_5;

 VAR_4.aux_guid = VAR_0;
 VAR_5 = FUNC_0(VAR_3, &VAR_4, ((void*)0));

 if (VAR_1) {
  if (VAR_5)
   *VAR_1 = VAR_5->aux_pool;
  else
   *VAR_1 = 0ULL;
 }

 if (VAR_2) {
  if (VAR_5)
   *VAR_2 = VAR_5->aux_count;
  else
   *VAR_2 = 0;
 }

 return (VAR_5 != ((void*)0));
}
