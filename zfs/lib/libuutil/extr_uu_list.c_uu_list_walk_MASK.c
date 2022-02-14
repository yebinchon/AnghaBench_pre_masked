
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* uu_walk_fn_t ) (void*,void*) ;
typedef int uu_list_walk_t ;
struct TYPE_8__ {struct TYPE_8__* uln_prev; struct TYPE_8__* uln_next; } ;
struct TYPE_7__ {TYPE_2__ ul_null_node; scalar_t__ ul_debug; } ;
typedef TYPE_1__ uu_list_t ;
typedef TYPE_2__ uu_list_node_impl_t ;
typedef int uint32_t ;


 void* FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 int FUNC_3 (void*,void*) ;
 int FUNC_4 (void*,void*) ;
 int FUNC_5 (void*,void*) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

int
FUNC_8(uu_list_t *VAR_5, uu_walk_fn_t *VAR_6, void *VAR_7, uint32_t VAR_8)
{
 uu_list_node_impl_t *VAR_9;

 int VAR_10 = VAR_2;

 int VAR_11 = (VAR_8 & VAR_4);
 int VAR_12 = (VAR_8 & VAR_3);

 if (VAR_8 & ~(VAR_4 | VAR_3)) {
  FUNC_7(VAR_1);
  return (-1);
 }

 if (VAR_5->ul_debug || VAR_11) {
  uu_list_walk_t VAR_13;
  void *VAR_14;

  FUNC_2(&VAR_13, VAR_5, VAR_8);
  while (VAR_10 == VAR_2 &&
      (VAR_14 = FUNC_6(&VAR_13)) != ((void*)0))
   VAR_10 = (*VAR_6)(VAR_14, VAR_7);
  FUNC_1(&VAR_13);
 } else {
  if (!VAR_12) {
   for (VAR_9 = VAR_5->ul_null_node.uln_next;
       VAR_10 == VAR_2 && VAR_9 != &VAR_5->ul_null_node;
       VAR_9 = VAR_9->uln_next) {
    VAR_10 = (*VAR_6)(FUNC_0(VAR_5, VAR_9), VAR_7);
   }
  } else {
   for (VAR_9 = VAR_5->ul_null_node.uln_prev;
       VAR_10 == VAR_2 && VAR_9 != &VAR_5->ul_null_node;
       VAR_9 = VAR_9->uln_prev) {
    VAR_10 = (*VAR_6)(FUNC_0(VAR_5, VAR_9), VAR_7);
   }
  }
 }
 if (VAR_10 >= 0)
  return (0);
 FUNC_7(VAR_0);
 return (-1);
}
