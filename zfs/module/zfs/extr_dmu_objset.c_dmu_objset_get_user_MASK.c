
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* os_user_ptr; int os_user_ptr_lock; } ;
typedef TYPE_1__ objset_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void *
FUNC_2(objset_t *VAR_0)
{
 FUNC_0(FUNC_1(&VAR_0->os_user_ptr_lock));
 return (VAR_0->os_user_ptr);
}
