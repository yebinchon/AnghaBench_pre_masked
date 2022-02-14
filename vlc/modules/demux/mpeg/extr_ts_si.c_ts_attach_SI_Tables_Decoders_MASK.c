
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* p_si; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ u; } ;
typedef TYPE_3__ ts_pid_t ;
struct TYPE_6__ {int handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;

bool FUNC_2( ts_pid_t *VAR_2 )
{
    if( VAR_2->type != VAR_1 )
        return 0;

    if( FUNC_1( VAR_2->u.p_si->handle ) )
        return 1;

    return FUNC_0( VAR_2->u.p_si->handle, VAR_0, VAR_2 );
}
