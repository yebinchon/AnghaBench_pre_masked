
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int uu_avl_walk_t ;
typedef int shareopts ;
struct TYPE_17__ {TYPE_3__* cn_handle; scalar_t__ cn_shared; scalar_t__ cn_mounted; scalar_t__ cn_needpost; scalar_t__ cn_zoned; } ;
typedef TYPE_1__ prop_changenode_t ;
struct TYPE_18__ {scalar_t__ cl_prop; scalar_t__ cl_waslegacy; int cl_tree; } ;
typedef TYPE_2__ prop_changelist_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;
struct TYPE_19__ {int * zfs_hdl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int * FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int *,int ) ;
 scalar_t__ FUNC_11 (TYPE_3__*,int ,char*,int,int *,int *,int ,scalar_t__) ;
 scalar_t__ FUNC_12 (TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_3__*) ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (TYPE_3__*,int *) ;
 scalar_t__ FUNC_18 (TYPE_3__*,int *) ;

int
FUNC_19(prop_changelist_t *VAR_13)
{
 prop_changenode_t *VAR_14;
 uu_avl_walk_t *VAR_15;
 char VAR_16[VAR_7];
 int VAR_17 = 0;
 libzfs_handle_t *VAR_18;
 if ((VAR_14 = FUNC_5(VAR_13->cl_tree)) == ((void*)0))
  return (0);

 if (VAR_13->cl_prop == VAR_10)
  FUNC_3(VAR_14->cn_handle);







 if (VAR_14->cn_handle != ((void*)0)) {
  VAR_18 = VAR_14->cn_handle->zfs_hdl;
  FUNC_1(VAR_18 != ((void*)0));
  FUNC_16(VAR_18);
 }






 if ((VAR_15 = FUNC_8(VAR_13->cl_tree,
     VAR_3 | VAR_4)) == ((void*)0))
  return (-1);

 while ((VAR_14 = FUNC_7(VAR_15)) != ((void*)0)) {

  boolean_t VAR_19;
  boolean_t VAR_20;
  boolean_t VAR_21;
  boolean_t VAR_22;





  if (FUNC_2() == VAR_1 && VAR_14->cn_zoned)
   continue;


  if (!VAR_14->cn_needpost)
   continue;
  VAR_14->cn_needpost = VAR_0;

  FUNC_13(VAR_14->cn_handle);

  if (FUNC_0(VAR_14->cn_handle))
   continue;





  VAR_19 = ((FUNC_11(VAR_14->cn_handle, VAR_11,
      VAR_16, sizeof (VAR_16), ((void*)0), ((void*)0), 0,
      VAR_0) == 0) && (FUNC_4(VAR_16, "off") != 0));

  VAR_20 = ((FUNC_11(VAR_14->cn_handle, VAR_12,
      VAR_16, sizeof (VAR_16), ((void*)0), ((void*)0), 0,
      VAR_0) == 0) && (FUNC_4(VAR_16, "off") != 0));

  VAR_22 = (FUNC_12(VAR_14->cn_handle,
      VAR_9) == VAR_6);

  VAR_21 = FUNC_9(VAR_14->cn_handle, ((void*)0));

  if (!VAR_21 && !VAR_22 && (VAR_14->cn_mounted ||
      ((VAR_19 || VAR_20 || VAR_13->cl_waslegacy) &&
      (FUNC_12(VAR_14->cn_handle,
      VAR_8) == VAR_5)))) {

   if (FUNC_10(VAR_14->cn_handle, ((void*)0), 0) != 0)
    VAR_17++;
   else
    VAR_21 = VAR_2;
  }






  if (VAR_19 && VAR_21)
   VAR_17 += FUNC_14(VAR_14->cn_handle);
  else if (VAR_14->cn_shared || VAR_13->cl_waslegacy)
   VAR_17 += FUNC_17(VAR_14->cn_handle, ((void*)0));
  if (VAR_20 && VAR_21)
   VAR_17 += FUNC_15(VAR_14->cn_handle);
  else if (VAR_14->cn_shared || VAR_13->cl_waslegacy)
   VAR_17 += FUNC_18(VAR_14->cn_handle, ((void*)0));
 }

 FUNC_6(VAR_15);

 return (VAR_17 ? -1 : 0);
}
