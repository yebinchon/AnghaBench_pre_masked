
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_13__ {int i_nb_inputs; TYPE_4__** pp_inputs; TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_mux_t ;
struct TYPE_14__ {int i_rate_bound; int i_audio_bound; int i_video_bound; } ;
typedef TYPE_3__ sout_mux_sys_t ;
struct TYPE_15__ {TYPE_1__* p_fmt; scalar_t__ p_sys; } ;
typedef TYPE_4__ sout_input_t ;
struct TYPE_16__ {int i_stream_id; int i_max_buff_size; } ;
typedef TYPE_5__ ps_stream_t ;
struct TYPE_17__ {int p_buffer; int i_pts; int i_dts; } ;
typedef TYPE_6__ block_t ;
typedef int bits_buffer_t ;
struct TYPE_12__ {scalar_t__ i_cat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int,int) ;
 TYPE_6__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_6__**,TYPE_6__*) ;

__attribute__((used)) static void FUNC_4( sout_mux_t *VAR_2, block_t **VAR_3,
                                  vlc_tick_t VAR_4 )
{
    sout_mux_sys_t *VAR_5 = VAR_2->p_sys;
    block_t *VAR_6;
    bits_buffer_t VAR_7;
    bool VAR_8;
    int VAR_9;

    int VAR_10, VAR_11;
    int VAR_12;


    for( VAR_12 = 0, VAR_10 = 0; VAR_12 < VAR_2->i_nb_inputs; VAR_12++ )
    {
        ps_stream_t *VAR_13;

        VAR_13 = (ps_stream_t*)VAR_2->pp_inputs[VAR_12]->p_sys;

        if( ( VAR_13->i_stream_id&0xff00 ) == 0xbd00 )
        {
            VAR_10++;
        }
    }


    VAR_11 = VAR_2->i_nb_inputs -
        ( VAR_10 > 0 ? VAR_10 - 1 : 0 );

    VAR_6 = FUNC_2( 12 + VAR_11 * 3 );
    if( !VAR_6 )
        return;
    VAR_6->i_dts = VAR_6->i_pts = VAR_4;


    VAR_9 = (VAR_5->i_rate_bound);

    FUNC_0( &VAR_7, 12 + VAR_11 * 3, VAR_6->p_buffer );
    FUNC_1( &VAR_7, 32, 0x01bb );
    FUNC_1( &VAR_7, 16, 12 - 6 + VAR_11 * 3 );
    FUNC_1( &VAR_7, 1, 1 );
    FUNC_1( &VAR_7, 22, VAR_9);
    FUNC_1( &VAR_7, 1, 1 );

    FUNC_1( &VAR_7, 6, VAR_5->i_audio_bound );
    FUNC_1( &VAR_7, 1, 0 );
    FUNC_1( &VAR_7, 1, 0 );
    FUNC_1( &VAR_7, 1, 0 );
    FUNC_1( &VAR_7, 1, 0 );

    FUNC_1( &VAR_7, 1, 1 );

    FUNC_1( &VAR_7, 5, VAR_5->i_video_bound );
    FUNC_1( &VAR_7, 1, 1 );
    FUNC_1( &VAR_7, 7, 0xff );


    for( VAR_12 = 0, VAR_8 = 0; VAR_12 < VAR_2->i_nb_inputs; VAR_12++ )
    {
        sout_input_t *VAR_14;
        ps_stream_t *VAR_15;

        VAR_14 = VAR_2->pp_inputs[VAR_12];
        VAR_15 = (ps_stream_t *)VAR_14->p_sys;

        if( ( VAR_15->i_stream_id&0xff00 ) == 0xbd00 )
        {
            if( VAR_8 )
            {
                continue;
            }
            VAR_8 = 1;

            FUNC_1( &VAR_7, 8, 0xbd );
        }
        else
        {

            FUNC_1( &VAR_7, 8, VAR_15->i_stream_id&0xff );
        }

        FUNC_1( &VAR_7, 2, 0x03 );
        if( VAR_14->p_fmt->i_cat == VAR_0 )
        {
            FUNC_1( &VAR_7, 1, 0 );
            FUNC_1( &VAR_7, 13, VAR_15->i_max_buff_size / 128 );
        }
        else if( VAR_14->p_fmt->i_cat == VAR_1 )
        {
            FUNC_1( &VAR_7, 1, 1 );
            FUNC_1( &VAR_7, 13, VAR_15->i_max_buff_size / 1024);
        }
        else
        {

            FUNC_1( &VAR_7, 1, 0 );
            FUNC_1( &VAR_7, 13, VAR_15->i_max_buff_size / 128 );
        }
    }

    FUNC_3( VAR_3, VAR_6 );
}
