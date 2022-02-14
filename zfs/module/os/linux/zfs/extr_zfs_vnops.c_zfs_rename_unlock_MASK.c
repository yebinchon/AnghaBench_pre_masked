
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* zl_next; int zl_rwlock; int * zl_znode; } ;
typedef TYPE_1__ zfs_zlock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(zfs_zlock_t **VAR_0)
{
 zfs_zlock_t *VAR_1;

 while ((VAR_1 = *VAR_0) != ((void*)0)) {
  if (VAR_1->zl_znode != ((void*)0))
   FUNC_3(FUNC_0(VAR_1->zl_znode));
  FUNC_2(VAR_1->zl_rwlock);
  *VAR_0 = VAR_1->zl_next;
  FUNC_1(VAR_1, sizeof (*VAR_1));
 }
}
