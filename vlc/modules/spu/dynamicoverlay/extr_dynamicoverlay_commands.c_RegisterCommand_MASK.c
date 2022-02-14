
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_9__ {size_t i_commands; TYPE_3__** pp_commands; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_10__ {size_t psz_command; int pf_unparse; int pf_execute; int pf_parser; int b_atomic; } ;
typedef TYPE_3__ commanddesc_t ;
struct TYPE_11__ {int pf_unparse; int pf_execute; int pf_parser; int b_atomic; int psz_command; } ;


 size_t FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*,size_t) ;
 TYPE_4__* VAR_0 ;
 size_t FUNC_4 (int ) ;

void FUNC_5( filter_t *VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_1->p_sys;

    VAR_2->i_commands = FUNC_0(VAR_0);
    VAR_2->pp_commands = (commanddesc_t **) FUNC_1( VAR_2->i_commands, sizeof(commanddesc_t*) );
    if( !VAR_2->pp_commands ) return;
    for( size_t VAR_3 = 0; VAR_3 < VAR_2->i_commands; VAR_3 ++ )
    {
        VAR_2->pp_commands[VAR_3] = (commanddesc_t *) FUNC_2( sizeof(commanddesc_t) );
        if( !VAR_2->pp_commands[VAR_3] ) return;
        VAR_2->pp_commands[VAR_3]->psz_command = FUNC_4( VAR_0[VAR_3].psz_command );
        VAR_2->pp_commands[VAR_3]->b_atomic = VAR_0[VAR_3].b_atomic;
        VAR_2->pp_commands[VAR_3]->pf_parser = VAR_0[VAR_3].pf_parser;
        VAR_2->pp_commands[VAR_3]->pf_execute = VAR_0[VAR_3].pf_execute;
        VAR_2->pp_commands[VAR_3]->pf_unparse = VAR_0[VAR_3].pf_unparse;
    }

    FUNC_3( VAR_1, "%zu commands are available", VAR_2->i_commands );
    for( size_t VAR_4 = 0; VAR_4 < VAR_2->i_commands; VAR_4++ )
        FUNC_3( VAR_1, "    %s", VAR_2->pp_commands[VAR_4]->psz_command );
}
