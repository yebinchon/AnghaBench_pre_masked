
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct extension_sys_t {int b_activated; int b_thread_running; int b_exiting; int thread; int command_lock; int wait; TYPE_3__* command; } ;
struct command_t {int dummy; } ;
typedef int extensions_manager_t ;
struct TYPE_5__ {int psz_title; struct extension_sys_t* p_sys; } ;
typedef TYPE_1__ extension_t ;
struct TYPE_6__ {int i_command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7( extensions_manager_t *VAR_5, extension_t *VAR_6 )
{
    FUNC_0( VAR_6 != ((void*)0) );

    struct extension_sys_t *VAR_7 = VAR_6->p_sys;
    FUNC_0( VAR_7 != ((void*)0) );

    FUNC_5( &VAR_7->command_lock );
    if ( VAR_7->b_activated == 0 )
    {

        FUNC_0(VAR_7->command == ((void*)0));
        VAR_7->command = FUNC_1( 1, sizeof( struct command_t ) );
        if( !VAR_7->command )
        {
            FUNC_6( &VAR_7->command_lock );
            return VAR_2;
        }
        VAR_7->command->i_command = VAR_0;
        if (VAR_7->b_thread_running == 1)
        {
            FUNC_2( VAR_5, "Reactivating extension %s", VAR_6->psz_title);
            FUNC_4( &VAR_7->wait );
        }
    }
    FUNC_6( &VAR_7->command_lock );

    if (VAR_7->b_thread_running == 1)
        return VAR_3;

    FUNC_2( VAR_5, "Activating extension '%s'", VAR_6->psz_title );

    VAR_7->b_exiting = 0;
    VAR_7->b_thread_running = 1;

    if( FUNC_3( &VAR_7->thread, VAR_1, VAR_6, VAR_4 )
        != VAR_3 )
    {
        VAR_7->b_exiting = 1;
        VAR_7->b_thread_running = 0;
        return VAR_2;
    }

    return VAR_3;
}
