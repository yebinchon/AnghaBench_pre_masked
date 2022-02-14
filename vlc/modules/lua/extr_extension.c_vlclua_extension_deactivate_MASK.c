
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ extension_t ;
struct TYPE_5__ {int command_lock; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *) ;

int FUNC_4( lua_State *VAR_0 )
{
    extension_t *VAR_1 = FUNC_3( VAR_0 );
    FUNC_1( &VAR_1->p_sys->command_lock );
    bool VAR_2 = FUNC_0( VAR_1 );
    FUNC_2( &VAR_1->p_sys->command_lock );
    return ( VAR_2 == 1 ) ? 1 : 0;
}
