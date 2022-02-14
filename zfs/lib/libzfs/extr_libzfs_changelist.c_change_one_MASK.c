
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ zprop_source_t ;
typedef int zfs_handle_t ;
typedef int where ;
typedef int uu_avl_index_t ;
typedef int property ;
struct TYPE_8__ {int cn_mounted; int cn_treenode; scalar_t__ cn_zoned; void* cn_needpost; int cn_shared; int * cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
struct TYPE_9__ {scalar_t__ cl_realprop; scalar_t__ cl_prop; scalar_t__ cl_shareprop; int cl_gflags; scalar_t__ cl_alldependents; int cl_tree; int cl_pool; void* cl_haszonedchild; scalar_t__ cl_allchildren; } ;
typedef TYPE_2__ prop_changelist_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (int ,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int *,int ) ;
 TYPE_1__* FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int (*) (int *,void*),void*) ;
 scalar_t__ FUNC_12 (int *,scalar_t__,char*,int,scalar_t__*,char*,int,int ) ;
 scalar_t__ FUNC_13 (int *,int ) ;

__attribute__((used)) static int
FUNC_14(zfs_handle_t *VAR_11, void *VAR_12)
{
 prop_changelist_t *VAR_13 = VAR_12;
 char VAR_14[VAR_4];
 char VAR_15[64];
 prop_changenode_t *VAR_16 = ((void*)0);
 zprop_source_t VAR_17 = VAR_10;
 zprop_source_t VAR_18 = VAR_10;
 int VAR_19 = 0;
 if (!(FUNC_0(VAR_11) && VAR_13->cl_realprop == VAR_5) &&
     FUNC_12(VAR_11, VAR_13->cl_prop, VAR_14,
     sizeof (VAR_14), &VAR_17, VAR_15, sizeof (VAR_15),
     VAR_0) != 0) {
  goto out;
 }






 if (VAR_13->cl_shareprop != VAR_7 &&
     FUNC_12(VAR_11, VAR_13->cl_shareprop, VAR_14,
     sizeof (VAR_14), &VAR_18, VAR_15, sizeof (VAR_15),
     VAR_0) != 0) {
  goto out;
 }

 if (VAR_13->cl_alldependents || VAR_13->cl_allchildren ||
     VAR_17 == VAR_8 ||
     VAR_17 == VAR_9 ||
     (VAR_13->cl_shareprop != VAR_7 &&
     (VAR_18 == VAR_8 ||
     VAR_18 == VAR_9))) {
  if ((VAR_16 = FUNC_6(FUNC_8(VAR_11),
      sizeof (prop_changenode_t))) == ((void*)0)) {
   VAR_19 = -1;
   goto out;
  }

  VAR_16->cn_handle = VAR_11;
  VAR_16->cn_mounted = (VAR_13->cl_gflags & VAR_2) ||
      FUNC_9(VAR_11, ((void*)0));
  VAR_16->cn_shared = FUNC_10(VAR_11);
  VAR_16->cn_zoned = FUNC_13(VAR_11, VAR_6);
  VAR_16->cn_needpost = VAR_1;


  if (FUNC_2() == VAR_3 && VAR_16->cn_zoned)
   VAR_13->cl_haszonedchild = VAR_1;

  FUNC_5(VAR_16, &VAR_16->cn_treenode, VAR_13->cl_pool);

  uu_avl_index_t VAR_20;

  if (FUNC_3(VAR_13->cl_tree, VAR_16, ((void*)0), &VAR_20) == ((void*)0)) {
   FUNC_4(VAR_13->cl_tree, VAR_16, VAR_20);
  } else {
   FUNC_1(VAR_16);
   VAR_16 = ((void*)0);
  }

  if (!VAR_13->cl_alldependents)
   VAR_19 = FUNC_11(VAR_11, FUNC_14, VAR_12);





  if (VAR_16 != ((void*)0))
   return (VAR_19);
 }

out:
 FUNC_7(VAR_11);
 return (VAR_19);
}
