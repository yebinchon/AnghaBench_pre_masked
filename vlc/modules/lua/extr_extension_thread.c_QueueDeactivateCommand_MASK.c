
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct command_t {struct command_t* next; int i_command; } ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ extension_t ;
struct TYPE_4__ {int wait; struct command_t* command; } ;


 int VAR_0 ;
 int FUNC_0 (struct command_t*) ;
 struct command_t* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

bool FUNC_4( extension_t *VAR_1 )
{
    struct command_t *VAR_2 = FUNC_1( 1, sizeof( struct command_t ) );
    if( FUNC_2( VAR_2 == ((void*)0) ) )
        return 0;

    if( VAR_1->p_sys->command )
        FUNC_0( VAR_1->p_sys->command->next );



    VAR_2->i_command = VAR_0;
    if( VAR_1->p_sys->command )
        VAR_1->p_sys->command->next = VAR_2;
    else
        VAR_1->p_sys->command = VAR_2;

    FUNC_3( &VAR_1->p_sys->wait );
    return 1;
}
