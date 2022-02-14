
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_5__ {int p_conn; scalar_t__ b_dead; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;

int FUNC_1( intf_thread_t * VAR_1 )
{
    if( VAR_1->p_sys->b_dead )
        return VAR_0;

    FUNC_0( VAR_1->p_sys->p_conn, VAR_1 );
    return VAR_0;
}
