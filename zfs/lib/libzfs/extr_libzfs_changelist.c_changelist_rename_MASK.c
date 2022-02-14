
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uu_avl_walk_t ;
struct TYPE_6__ {TYPE_4__* cn_handle; } ;
typedef TYPE_1__ prop_changenode_t ;
struct TYPE_7__ {int cl_tree; } ;
typedef TYPE_2__ prop_changelist_t ;
typedef int newname ;
struct TYPE_8__ {char* zfs_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 TYPE_1__* FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ) ;

void
FUNC_8(prop_changelist_t *VAR_2, const char *VAR_3, const char *VAR_4)
{
 prop_changenode_t *VAR_5;
 uu_avl_walk_t *VAR_6;
 char VAR_7[VAR_1];

 if ((VAR_6 = FUNC_7(VAR_2->cl_tree, VAR_0)) == ((void*)0))
  return;

 while ((VAR_5 = FUNC_6(VAR_6)) != ((void*)0)) {



  if (!FUNC_0(VAR_5->cn_handle->zfs_name, VAR_3))
   continue;




  FUNC_1(VAR_5->cn_handle);

  (void) FUNC_3(VAR_7, VAR_4, sizeof (VAR_7));
  (void) FUNC_2(VAR_7, VAR_5->cn_handle->zfs_name + FUNC_4(VAR_3),
      sizeof (VAR_7));

  (void) FUNC_3(VAR_5->cn_handle->zfs_name, VAR_7,
      sizeof (VAR_5->cn_handle->zfs_name));
 }

 FUNC_5(VAR_6);
}
