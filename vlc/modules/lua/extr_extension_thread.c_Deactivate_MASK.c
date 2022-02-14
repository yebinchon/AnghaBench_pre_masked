
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int extensions_manager_t ;
struct TYPE_7__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ extension_t ;
struct TYPE_6__ {int command_lock; int * p_progress_id; scalar_t__ b_exiting; } ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5( extensions_manager_t *VAR_3, extension_t *VAR_4 )
{
    FUNC_3( &VAR_4->p_sys->command_lock );

    if( VAR_4->p_sys->b_exiting )
    {
        FUNC_4( &VAR_4->p_sys->command_lock );
        return VAR_0;
    }

    if( VAR_4->p_sys->p_progress_id != ((void*)0) )
    {

        FUNC_2( VAR_3, VAR_4->p_sys->p_progress_id );
        VAR_4->p_sys->p_progress_id = ((void*)0);
        FUNC_0( VAR_3, VAR_4 );
        FUNC_4( &VAR_4->p_sys->command_lock );
        return VAR_2;
    }

    bool VAR_5 = FUNC_1( VAR_4 );
    FUNC_4( &VAR_4->p_sys->command_lock );

    return VAR_5 ? VAR_2 : VAR_1;
}
