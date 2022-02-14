
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* rn_name; int rn_labelpaths; scalar_t__ rn_order; int * rn_hdl; int * rn_avl; int * rn_lock; scalar_t__ rn_vdev_guid; } ;
typedef TYPE_1__ rdsk_node_t ;
typedef int pthread_mutex_t ;
typedef int libpc_handle_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__**,char*,char const*,char const*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *,int) ;

__attribute__((used)) static void
FUNC_7(libpc_handle_t *VAR_2, pthread_mutex_t *VAR_3,
    avl_tree_t *VAR_4, const char *VAR_5, const char *VAR_6, int VAR_7)
{
 avl_index_t VAR_8;
 rdsk_node_t *VAR_9;

 VAR_9 = FUNC_6(VAR_2, sizeof (rdsk_node_t));
 if (FUNC_0(&VAR_9->rn_name, "%s/%s", VAR_5, VAR_6) == -1) {
  FUNC_3(VAR_9);
  return;
 }
 VAR_9->rn_vdev_guid = 0;
 VAR_9->rn_lock = VAR_3;
 VAR_9->rn_avl = VAR_4;
 VAR_9->rn_hdl = VAR_2;
 VAR_9->rn_order = VAR_7 + VAR_1;
 VAR_9->rn_labelpaths = VAR_0;

 FUNC_4(VAR_3);
 if (FUNC_1(VAR_4, VAR_9, &VAR_8)) {
  FUNC_3(VAR_9->rn_name);
  FUNC_3(VAR_9);
 } else {
  FUNC_2(VAR_4, VAR_9, VAR_8);
 }
 FUNC_5(VAR_3);
}
