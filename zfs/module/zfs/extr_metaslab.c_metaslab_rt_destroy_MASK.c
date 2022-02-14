
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_btree_t ;
typedef int range_tree_t ;
struct TYPE_3__ {int * mra_bt; } ;
typedef TYPE_1__ metaslab_rt_arg_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(range_tree_t *VAR_0, void *VAR_1)
{
 metaslab_rt_arg_t *VAR_2 = VAR_1;
 zfs_btree_t *VAR_3 = VAR_2->mra_bt;

 FUNC_1(VAR_3);
 FUNC_0(VAR_2, sizeof (*VAR_2));
}
