
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_5__ {int i_handle; scalar_t__ p_buffer; int p_fifo; int thread; } ;
typedef TYPE_2__ sout_access_out_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6( vlc_object_t * VAR_0 )
{
    sout_access_out_t *VAR_1 = (sout_access_out_t*)VAR_0;
    sout_access_out_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_4( VAR_2->thread );
    FUNC_5( VAR_2->thread, ((void*)0) );
    FUNC_0( VAR_2->p_fifo );

    if( VAR_2->p_buffer ) FUNC_1( VAR_2->p_buffer );

    FUNC_3( VAR_2->i_handle );
    FUNC_2( VAR_2 );
}
