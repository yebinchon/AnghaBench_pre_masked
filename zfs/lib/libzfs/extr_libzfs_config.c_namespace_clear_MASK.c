
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * libzfs_ns_avlpool; int * libzfs_ns_avl; } ;
typedef TYPE_1__ libzfs_handle_t ;
struct TYPE_7__ {struct TYPE_7__* cn_name; int cn_config; } ;
typedef TYPE_2__ config_node_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *,void**) ;

void
FUNC_5(libzfs_handle_t *VAR_0)
{
 if (VAR_0->libzfs_ns_avl) {
  config_node_t *VAR_1;
  void *VAR_2 = ((void*)0);

  while ((VAR_1 = FUNC_4(VAR_0->libzfs_ns_avl,
      &VAR_2)) != ((void*)0)) {
   FUNC_1(VAR_1->cn_config);
   FUNC_0(VAR_1->cn_name);
   FUNC_0(VAR_1);
  }

  FUNC_2(VAR_0->libzfs_ns_avl);
  VAR_0->libzfs_ns_avl = ((void*)0);
 }

 if (VAR_0->libzfs_ns_avlpool) {
  FUNC_3(VAR_0->libzfs_ns_avlpool);
  VAR_0->libzfs_ns_avlpool = ((void*)0);
 }
}
