
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zn_avlnode; int * zn_handle; } ;
typedef TYPE_1__ zpool_node_t ;
struct TYPE_9__ {int zl_avl; scalar_t__ zl_proplist; int zl_pool; } ;
typedef TYPE_2__ zpool_list_t ;
typedef int zpool_handle_t ;
typedef int uu_avl_index_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(zpool_handle_t *VAR_0, void *VAR_1)
{
 zpool_list_t *VAR_2 = VAR_1;
 zpool_node_t *VAR_3 = FUNC_1(sizeof (zpool_node_t));
 uu_avl_index_t VAR_4;

 VAR_3->zn_handle = VAR_0;
 FUNC_4(VAR_3, &VAR_3->zn_avlnode, VAR_2->zl_pool);
 if (FUNC_2(VAR_2->zl_avl, VAR_3, ((void*)0), &VAR_4) == ((void*)0)) {
  if (VAR_2->zl_proplist &&
      FUNC_6(VAR_0, VAR_2->zl_proplist) != 0) {
   FUNC_5(VAR_0);
   FUNC_0(VAR_3);
   return (-1);
  }
  FUNC_3(VAR_2->zl_avl, VAR_3, VAR_4);
 } else {
  FUNC_5(VAR_0);
  FUNC_0(VAR_3);
  return (-1);
 }

 return (0);
}
