
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * zn_handle; } ;
typedef TYPE_1__ zpool_node_t ;
struct TYPE_9__ {int zl_avl; } ;
typedef TYPE_2__ zpool_list_t ;
typedef int zpool_handle_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(zpool_list_t *VAR_0, zpool_handle_t *VAR_1)
{
 zpool_node_t VAR_2, *VAR_3;

 VAR_2.zn_handle = VAR_1;
 if ((VAR_3 = FUNC_1(VAR_0->zl_avl, &VAR_2, ((void*)0), ((void*)0))) != ((void*)0)) {
  FUNC_2(VAR_0->zl_avl, VAR_3);
  FUNC_3(VAR_3->zn_handle);
  FUNC_0(VAR_3);
 }
}
