
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfs_share_proto_t ;
typedef int uu_avl_walk_t ;
struct TYPE_5__ {int cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
struct TYPE_6__ {scalar_t__ cl_prop; int cl_tree; } ;
typedef TYPE_2__ prop_changelist_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;

int
FUNC_4(prop_changelist_t *VAR_3, zfs_share_proto_t *VAR_4)
{
 prop_changenode_t *VAR_5;
 uu_avl_walk_t *VAR_6;
 int VAR_7 = 0;

 if (VAR_3->cl_prop != VAR_1 &&
     VAR_3->cl_prop != VAR_2)
  return (0);

 if ((VAR_6 = FUNC_2(VAR_3->cl_tree, VAR_0)) == ((void*)0))
  return (-1);

 while ((VAR_5 = FUNC_1(VAR_6)) != ((void*)0)) {
  if (FUNC_3(VAR_5->cn_handle, ((void*)0), VAR_4) != 0)
   VAR_7 = -1;
 }

 FUNC_0(VAR_6);

 return (VAR_7);
}
