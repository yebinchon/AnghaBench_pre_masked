
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ z_unmounted; } ;
typedef TYPE_1__ zfsvfs_t ;
struct TYPE_8__ {int os_user_ptr_lock; } ;
typedef TYPE_2__ objset_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

boolean_t
FUNC_5(objset_t *VAR_3)
{
 zfsvfs_t *VAR_4;
 boolean_t VAR_5 = VAR_0;

 FUNC_0(FUNC_2(VAR_3) == VAR_2);

 FUNC_3(&VAR_3->os_user_ptr_lock);
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 != ((void*)0) && VAR_4->z_unmounted)
  VAR_5 = VAR_1;
 FUNC_4(&VAR_3->os_user_ptr_lock);

 return (VAR_5);
}
