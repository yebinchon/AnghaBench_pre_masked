
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint32_t ;
struct TYPE_11__ {int i_nb_inputs; TYPE_3__** pp_inputs; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_12__ {int i_psm_version; int* crc32_table; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_13__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_input_t ;
struct TYPE_14__ {scalar_t__* lang; int i_stream_type; int i_stream_id; } ;
typedef TYPE_4__ ps_stream_t ;
struct TYPE_15__ {int* p_buffer; size_t i_buffer; int i_pts; int i_dts; } ;
typedef TYPE_5__ block_t ;
typedef int bits_buffer_t ;


 int FUNC_0 (int *,int,int*) ;
 int FUNC_1 (int *,int,int) ;
 TYPE_5__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__**,TYPE_5__*) ;
 int FUNC_4 (int*,int ,size_t) ;

__attribute__((used)) static void FUNC_5( sout_mux_t *VAR_0, block_t **VAR_1, vlc_tick_t VAR_2 )
{
    sout_mux_sys_t *VAR_3 = VAR_0->p_sys;
    block_t *VAR_4;
    bits_buffer_t VAR_5;
    int VAR_6, VAR_7 = 16, VAR_8 = 0;

    for( VAR_6 = 0; VAR_6 < VAR_0->i_nb_inputs; VAR_6++ )
    {
        sout_input_t *VAR_9 = VAR_0->pp_inputs[VAR_6];
        ps_stream_t *VAR_10 = VAR_9->p_sys;

        VAR_8 += 4;
        if( VAR_10->lang[0] != 0 ) VAR_8 += 6;
    }

    VAR_7 += VAR_8;

    VAR_4 = FUNC_2( VAR_7 );
    if( !VAR_4 )
        return;
    VAR_4->i_dts = VAR_4->i_pts = VAR_2;

    FUNC_4( VAR_4->p_buffer, 0, VAR_4->i_buffer );
    FUNC_0( &VAR_5, VAR_7, VAR_4->p_buffer );
    FUNC_1( &VAR_5, 32, 0x01bc );
    FUNC_1( &VAR_5, 16, VAR_7 - 6 );
    FUNC_1( &VAR_5, 1, 1 );
    FUNC_1( &VAR_5, 2, 0xF );
    FUNC_1( &VAR_5, 5, VAR_3->i_psm_version );
    FUNC_1( &VAR_5, 7, 0xFF );
    FUNC_1( &VAR_5, 1, 1 );

    FUNC_1( &VAR_5, 16, 0 );


    FUNC_1( &VAR_5, 16, VAR_8 );
    for( VAR_6 = 0; VAR_6 < VAR_0->i_nb_inputs; VAR_6++ )
    {
        sout_input_t *VAR_11 = VAR_0->pp_inputs[VAR_6];
        ps_stream_t *VAR_12 = VAR_11->p_sys;

        FUNC_1( &VAR_5, 8, VAR_12->i_stream_type );
        FUNC_1( &VAR_5, 8, VAR_12->i_stream_id );


        if( VAR_12->lang[0] != 0 )
        {
            FUNC_1( &VAR_5, 16, 6 );

            FUNC_1( &VAR_5, 8, 0x0a );
            FUNC_1( &VAR_5, 8, 4 );

            FUNC_1( &VAR_5, 8, VAR_12->lang[0] );
            FUNC_1( &VAR_5, 8, VAR_12->lang[1] );
            FUNC_1( &VAR_5, 8, VAR_12->lang[2] );
            FUNC_1( &VAR_5, 8, 0 );
        }
        else
        {
            FUNC_1( &VAR_5, 16, 0 );
        }
    }


    {
        uint32_t VAR_13 = 0xffffffff;
        for( VAR_6 = 0; (size_t)VAR_6 < VAR_4->i_buffer; VAR_6++ )
        VAR_13 = (VAR_13 << 8) ^
            VAR_3->crc32_table[((VAR_13 >> 24) ^ VAR_4->p_buffer[VAR_6]) & 0xff];

        FUNC_1( &VAR_5, 32, VAR_13 );
    }

    FUNC_3( VAR_1, VAR_4 );
}
