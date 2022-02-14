
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_3__* p_access; } ;
typedef TYPE_1__ event_thread_t ;
struct TYPE_5__ {int i_node; } ;
typedef TYPE_2__ access_sys_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;


 int FUNC_0 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_1( void *VAR_0 )
{
    event_thread_t *VAR_1 = (event_thread_t *)VAR_0;
    access_sys_t *VAR_2 = VAR_1->p_access->p_sys;

    FUNC_0( VAR_1->p_access, VAR_2->i_node );
}
