
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int b_exit; size_t i_blocks; int * pp_blocks; int wait; int lock; int p_vout; int thread; } ;
typedef TYPE_1__ goom_thread_t ;
struct TYPE_5__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ filter_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9( vlc_object_t *VAR_0 )
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    goom_thread_t *VAR_2 = VAR_1->p_sys;


    FUNC_6( &VAR_2->lock );
    VAR_2->b_exit = 1;
    FUNC_3( &VAR_2->wait );
    FUNC_7( &VAR_2->lock );

    FUNC_4( VAR_2->thread, ((void*)0) );


    FUNC_8( VAR_2->p_vout );
    FUNC_5( &VAR_2->lock );
    FUNC_2( &VAR_2->wait );

    while( VAR_2->i_blocks-- )
    {
        FUNC_0( VAR_2->pp_blocks[VAR_2->i_blocks] );
    }

    FUNC_1( VAR_2 );
}
