
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_5__ {int pp_jack_port_table; int pp_jack_buffer; int pp_jack_port_input; scalar_t__ p_jack_ringbuffer; scalar_t__ p_jack_client; scalar_t__ p_block_audio; } ;
typedef TYPE_2__ demux_sys_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_5( vlc_object_t *VAR_0 )
{
    demux_t *VAR_1 = ( demux_t* )VAR_0;
    demux_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_4( VAR_1,"Module unloaded" );
    if( VAR_2->p_block_audio ) FUNC_0( VAR_2->p_block_audio );
    if( VAR_2->p_jack_client ) FUNC_2( VAR_2->p_jack_client );
    if( VAR_2->p_jack_ringbuffer ) FUNC_3( VAR_2->p_jack_ringbuffer );
    FUNC_1( VAR_2->pp_jack_port_input );
    FUNC_1( VAR_2->pp_jack_buffer );
    FUNC_1( VAR_2->pp_jack_port_table );
}
