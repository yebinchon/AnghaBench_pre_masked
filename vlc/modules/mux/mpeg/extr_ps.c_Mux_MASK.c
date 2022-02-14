
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_19__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_21__ {int i_nb_inputs; int p_access; TYPE_3__** pp_inputs; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_22__ {int i_pes_count; scalar_t__ i_instant_dts; int i_instant_size; int i_instant_bitrate; int i_pes_max_size; int b_mpeg2; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_23__ {TYPE_19__* p_fmt; int p_fifo; scalar_t__ p_sys; } ;
typedef TYPE_3__ sout_input_t ;
struct TYPE_24__ {scalar_t__ i_dts; int i_stream_id; } ;
typedef TYPE_4__ ps_stream_t ;
typedef int int64_t ;
struct TYPE_25__ {scalar_t__ i_buffer; struct TYPE_25__* p_next; int i_flags; } ;
typedef TYPE_5__ block_t ;
struct TYPE_20__ {scalar_t__ i_cat; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__**,TYPE_19__*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_5__**,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,TYPE_5__**,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,TYPE_5__**,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__**,TYPE_5__*) ;
 TYPE_5__* FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_5__*) ;
 int FUNC_8 (TYPE_1__*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_9( sout_mux_t *VAR_4 )
{
    sout_mux_sys_t *VAR_5 = VAR_4->p_sys;

    for( ;; )
    {
        sout_input_t *VAR_6;
        ps_stream_t *VAR_7;

        block_t *VAR_8, *VAR_9;

        vlc_tick_t VAR_10;


        int VAR_11 = FUNC_8( VAR_4, 1, &VAR_10 );
        if( VAR_11 < 0 )
        {
            return VAR_3;
        }

        VAR_6 = VAR_4->pp_inputs[VAR_11];
        VAR_7 = (ps_stream_t*)VAR_6->p_sys;
        VAR_8 = ((void*)0);

        VAR_7->i_dts = VAR_10;


        if( VAR_5->i_pes_count % 30 == 0)
        {
            vlc_tick_t VAR_12 = VAR_1;
            for( int VAR_13=0; VAR_13 < VAR_4->i_nb_inputs; VAR_13++ )
            {
                ps_stream_t *VAR_14 = (ps_stream_t*)VAR_6->p_sys;
                if( VAR_6->p_fmt->i_cat == VAR_2 && VAR_4->i_nb_inputs > 1 )
                    continue;
                if( VAR_14->i_dts >= 0 && VAR_12 > VAR_14->i_dts )
                    VAR_12 = VAR_14->i_dts;
            }

            if( VAR_12 > VAR_5->i_instant_dts )
            {

                if( VAR_5->i_instant_size &&
                    VAR_10 - VAR_5->i_instant_dts > FUNC_4(1))
                {
                    int64_t VAR_15 = VAR_5->i_instant_size * 8000000 /
                            ( VAR_10 - VAR_5->i_instant_dts );

                    VAR_5->i_instant_bitrate += VAR_15;
                    VAR_5->i_instant_bitrate /= 2;

                    VAR_5->i_instant_size = 0;
                    VAR_5->i_instant_dts = VAR_10;
                }
                else if( !VAR_5->i_instant_size )
                {
                    VAR_5->i_instant_dts = VAR_10;
                }

                FUNC_2( VAR_4, &VAR_8, VAR_10 );
            }
        }


        if( VAR_5->i_pes_count % 300 == 0 )
        {
            block_t *VAR_16;

            FUNC_3( VAR_4, &VAR_8, VAR_10 );


            for( VAR_16 = VAR_8; VAR_16 != ((void*)0); VAR_16 = VAR_16->p_next )
            {
                VAR_16->i_flags |= VAR_0;
            }
        }


        if( VAR_5->b_mpeg2 && VAR_5->i_pes_count % 300 == 0 )
        {
            FUNC_1( VAR_4, &VAR_8, VAR_10 );
        }


        VAR_9 = FUNC_6( VAR_6->p_fifo );
        FUNC_0 ( &VAR_9, VAR_6->p_fmt, VAR_7->i_stream_id,
                       VAR_5->b_mpeg2, 0, 0, VAR_5->i_pes_max_size, 0 );

        FUNC_5( &VAR_8, VAR_9 );


        for( VAR_9 = VAR_8; VAR_9; VAR_9 = VAR_9->p_next )
        {
            VAR_5->i_instant_size += VAR_9->i_buffer;
        }

        FUNC_7( VAR_4->p_access, VAR_8 );


        VAR_5->i_pes_count++;
    }

    return VAR_3;
}
