
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sa_update_cb_t ;
struct TYPE_5__ {TYPE_1__* os_sa; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_4__ {int * sa_update_cb; int sa_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void
FUNC_2(objset_t *VAR_0, sa_update_cb_t *VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0->os_sa->sa_lock));
 VAR_0->os_sa->sa_update_cb = VAR_1;
}
