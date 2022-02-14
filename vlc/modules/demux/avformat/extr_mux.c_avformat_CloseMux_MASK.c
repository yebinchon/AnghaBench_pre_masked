
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_6__ {struct TYPE_6__* io_buffer; int io; int oc; int b_error; int b_write_header; } ;
typedef TYPE_2__ sout_mux_sys_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

void FUNC_5( vlc_object_t *VAR_0 )
{
    sout_mux_t *VAR_1 = (sout_mux_t*)VAR_0;
    sout_mux_sys_t *VAR_2 = VAR_1->p_sys;

    if( !VAR_2->b_write_header && !VAR_2->b_error && FUNC_1( VAR_2->oc ) < 0 )
    {
        FUNC_4( VAR_1, "could not write trailer" );
    }

    FUNC_2(VAR_2->oc);
    FUNC_0(VAR_2->io);

    FUNC_3( VAR_2->io_buffer );
    FUNC_3( VAR_2 );
}
