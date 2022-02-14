
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_data; int (* pf_callback ) (int ,int) ;TYPE_2__* p_update; } ;
typedef TYPE_1__ update_check_thread_t ;
struct TYPE_5__ {int lock; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

void* FUNC_7( void *VAR_0 )
{
    update_check_thread_t *VAR_1 = (update_check_thread_t *)VAR_0;
    bool VAR_2;
    int VAR_3;

    VAR_3 = FUNC_6 ();
    FUNC_3( &VAR_1->p_update->lock );

    FUNC_0( VAR_1->p_update );
    VAR_2 = FUNC_1( VAR_1->p_update );
    FUNC_4( &VAR_1->p_update->lock );

    if( VAR_1->pf_callback )
        (VAR_1->pf_callback)( VAR_1->p_data, VAR_2 );

    FUNC_5 (VAR_3);
    return ((void*)0);
}
