
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ extension_t ;
struct TYPE_4__ {int command_lock; int timer; int * p_progress_id; int p_mgr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int ,int ) ;
 TYPE_2__* FUNC_4 (int *) ;

int FUNC_5( lua_State *VAR_2 )
{
    extension_t *VAR_3 = FUNC_4( VAR_2 );

    FUNC_1( &VAR_3->p_sys->command_lock );
    if( VAR_3->p_sys->p_progress_id != ((void*)0) )
    {
        FUNC_0( VAR_3->p_sys->p_mgr, VAR_3->p_sys->p_progress_id );
        VAR_3->p_sys->p_progress_id = ((void*)0);
    }
    FUNC_3( VAR_3->p_sys->timer, 0, VAR_1,
                        VAR_0 );
    FUNC_2( &VAR_3->p_sys->command_lock );

    return 1;
}
