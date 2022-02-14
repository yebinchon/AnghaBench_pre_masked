
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * vfs_mntpoint; } ;
typedef TYPE_1__ vfs_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(vfs_t *VAR_0)
{
 if (VAR_0 != ((void*)0)) {
  if (VAR_0->vfs_mntpoint != ((void*)0))
   FUNC_1(VAR_0->vfs_mntpoint);

  FUNC_0(VAR_0, sizeof (vfs_t));
 }
}
