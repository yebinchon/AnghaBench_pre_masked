
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int p_access; int * p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
typedef int sout_mux_sys_t ;
struct TYPE_7__ {int* p_buffer; } ;
typedef TYPE_2__ block_t ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4( vlc_object_t * VAR_0 )
{
    sout_mux_t *VAR_1 = (sout_mux_t*)VAR_0;
    sout_mux_sys_t *VAR_2 = VAR_1->p_sys;

    block_t *VAR_3;

    FUNC_2( VAR_1, "Close" );

    VAR_3 = FUNC_0( 4 );
    if( VAR_3 )
    {
        VAR_3->p_buffer[0] = 0x00; VAR_3->p_buffer[1] = 0x00;
        VAR_3->p_buffer[2] = 0x01; VAR_3->p_buffer[3] = 0xb9;

        FUNC_3( VAR_1->p_access, VAR_3 );
    }

    FUNC_1( VAR_2 );
}
