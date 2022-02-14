
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct command_t {scalar_t__ i_command; struct command_t* next; } ;
typedef int extensions_manager_t ;
struct TYPE_5__ {TYPE_1__* p_sys; int psz_title; } ;
typedef TYPE_2__ extension_t ;
struct TYPE_4__ {int command_lock; int timer; int * p_progress_id; struct command_t* command; int * p_mgr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int *,int,double,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_9( void *VAR_2 )
{
    extension_t *VAR_3 = VAR_2;
    extensions_manager_t *VAR_4 = VAR_3->p_sys->p_mgr;

    FUNC_6( &VAR_3->p_sys->command_lock );

    for( struct command_t *VAR_5 = VAR_3->p_sys->command;
         VAR_5 != ((void*)0);
         VAR_5 = VAR_5->next )
        if( VAR_5->i_command == VAR_0 )
        {
            if( VAR_3->p_sys->p_progress_id != ((void*)0) )
            {
                FUNC_5( VAR_4, VAR_3->p_sys->p_progress_id );
                VAR_3->p_sys->p_progress_id = ((void*)0);
            }
            FUNC_0( VAR_4, VAR_3 );
            FUNC_7( &VAR_3->p_sys->command_lock );
            return;
        }

    if( VAR_3->p_sys->p_progress_id == ((void*)0) )
    {
        VAR_3->p_sys->p_progress_id =
            FUNC_3( VAR_4, 1, 0.0,
                                         FUNC_2( "Yes" ),
                                         FUNC_2( "Extension not responding!" ),
                                         FUNC_2( "Extension '%s' does not respond.\n"
                                         "Do you want to kill it now? " ),
                                         VAR_3->psz_title );
        if( VAR_3->p_sys->p_progress_id == ((void*)0) )
        {
            FUNC_0( VAR_4, VAR_3 );
            FUNC_7( &VAR_3->p_sys->command_lock );
            return;
        }
        FUNC_8( VAR_3->p_sys->timer, 0, FUNC_1(100),
                            VAR_1 );
    }
    else
    {
        if( FUNC_4( VAR_4, VAR_3->p_sys->p_progress_id ) )
        {
            FUNC_5( VAR_4, VAR_3->p_sys->p_progress_id );
            VAR_3->p_sys->p_progress_id = ((void*)0);
            FUNC_0( VAR_4, VAR_3 );
            FUNC_7( &VAR_3->p_sys->command_lock );
            return;
        }
        FUNC_8( VAR_3->p_sys->timer, 0, FUNC_1(100),
                            VAR_1 );
    }
    FUNC_7( &VAR_3->p_sys->command_lock );
}
