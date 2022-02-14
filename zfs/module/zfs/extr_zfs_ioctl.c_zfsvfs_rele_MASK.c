
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_os; scalar_t__ z_sb; int z_teardown_lock; } ;
typedef TYPE_1__ zfsvfs_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(zfsvfs_t *VAR_1, void *VAR_2)
{
 FUNC_2(&VAR_1->z_teardown_lock, VAR_2);

 if (VAR_1->z_sb) {
  FUNC_0(VAR_1->z_sb);
 } else {
  FUNC_1(VAR_1->z_os, VAR_0, VAR_1);
  FUNC_3(VAR_1);
 }
}
