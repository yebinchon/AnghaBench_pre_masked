
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zfsvfs_t ;
struct TYPE_5__ {int os_user_ptr_lock; } ;
typedef TYPE_1__ objset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;

int
FUNC_6(objset_t *VAR_2, zfsvfs_t **VAR_3)
{
 int VAR_4 = 0;
 if (FUNC_2(VAR_2) != VAR_0) {
  return (FUNC_0(VAR_1));
 }

 FUNC_3(&VAR_2->os_user_ptr_lock);
 *VAR_3 = FUNC_1(VAR_2);

 VAR_4 = FUNC_5(VAR_3);
 FUNC_4(&VAR_2->os_user_ptr_lock);
 return (VAR_4);
}
