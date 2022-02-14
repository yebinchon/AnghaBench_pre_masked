
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_check; } ;
typedef TYPE_1__ update_t ;
struct TYPE_9__ {void (* pf_callback ) (void*,int) ;int thread; void* p_data; TYPE_1__* p_update; } ;
typedef TYPE_2__ update_check_thread_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_2__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5( update_t *VAR_2, void (*VAR_3)( void*, bool ), void *VAR_4 )
{
    FUNC_0( VAR_2 );


    if( VAR_2->p_check )
    {
        FUNC_4( VAR_2->p_check->thread, ((void*)0) );
        FUNC_2( VAR_2->p_check );
    }

    update_check_thread_t *VAR_5 = FUNC_1( 1, sizeof( *VAR_5 ) );
    if( !VAR_5 ) return;

    VAR_5->p_update = VAR_2;
    VAR_2->p_check = VAR_5;
    VAR_5->pf_callback = VAR_3;
    VAR_5->p_data = VAR_4;

    FUNC_3( &VAR_5->thread, VAR_1, VAR_5, VAR_0 );
}
