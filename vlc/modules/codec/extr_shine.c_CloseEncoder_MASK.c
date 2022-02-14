
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ encoder_t ;
struct TYPE_6__ {int p_fifo; int s; struct TYPE_6__* p_buffer; scalar_t__ i_buffer; } ;
typedef TYPE_2__ encoder_sys_t ;
struct TYPE_7__ {int busy; int lock; } ;


 int FUNC_0 (int ) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( vlc_object_t *VAR_1 )
{
    encoder_sys_t *VAR_2 = ((encoder_t*)VAR_1)->p_sys;

    FUNC_3( &VAR_0.lock );
    VAR_0.busy = 0;
    FUNC_4( &VAR_0.lock );



    if( VAR_2->i_buffer )
        FUNC_1( VAR_2->p_buffer );

    FUNC_2(VAR_2->s);

    FUNC_0( VAR_2->p_fifo );
    FUNC_1( VAR_2 );
}
