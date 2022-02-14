
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_16__ {int p_access; TYPE_3__** pp_inputs; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_mux_t ;
struct TYPE_17__ {int b_write_header; scalar_t__ i_dts_last; scalar_t__ i_dts_first; } ;
typedef TYPE_2__ sout_mux_sys_t ;
struct TYPE_18__ {int p_fifo; scalar_t__ p_sys; } ;
typedef TYPE_3__ sout_input_t ;
struct TYPE_19__ {int i_buffer; int* p_buffer; int i_flags; } ;
typedef TYPE_4__ block_t ;
struct TYPE_20__ {scalar_t__ i_fourcc; } ;
typedef TYPE_5__ asf_track_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char,char,char,char) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__* FUNC_1 (TYPE_1__*,int) ;
 TYPE_4__* FUNC_2 (TYPE_1__*,TYPE_5__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_6( sout_mux_t *VAR_3 )
{
    sout_mux_sys_t *VAR_4 = VAR_3->p_sys;

    if( VAR_4->b_write_header )
    {
        block_t *VAR_5 = FUNC_1( VAR_3, 1 );

        VAR_5->i_flags |= VAR_0;
        FUNC_4( VAR_3->p_access, VAR_5 );

        VAR_4->b_write_header = 0;
    }

    for( ;; )
    {
        sout_input_t *VAR_6;
        asf_track_t *VAR_7;
        vlc_tick_t VAR_8;
        block_t *VAR_9;
        block_t *VAR_10;

        int VAR_11 = FUNC_5( VAR_3, 1, &VAR_8 );
        if( VAR_11 < 0 )
        {

            return VAR_1;
        }

        if( VAR_4->i_dts_first == VAR_2 )
        {
            VAR_4->i_dts_first = VAR_8;
        }
        if( VAR_4->i_dts_last < VAR_8 )
        {
            VAR_4->i_dts_last = VAR_8;
        }

        VAR_6 = VAR_3->pp_inputs[VAR_11];
        VAR_7 = (asf_track_t*)VAR_6->p_sys;

        VAR_9 = FUNC_3( VAR_6->p_fifo );


        if( VAR_7->i_fourcc == FUNC_0( 'W', 'V', 'C', '1' ) )
        {
            while( VAR_9->i_buffer >= 4 &&
                   ( VAR_9->p_buffer[0] != 0x00 || VAR_9->p_buffer[1] != 0x00 ||
                     VAR_9->p_buffer[2] != 0x01 ||
                     ( VAR_9->p_buffer[3] != 0x0D && VAR_9->p_buffer[3] != 0x0C ) ) )
            {
                VAR_9->i_buffer--;
                VAR_9->p_buffer++;
            }
            if( VAR_9->i_buffer >= 4 )
            {
                VAR_9->i_buffer -= 4;
                VAR_9->p_buffer += 4;
            }
        }

        if( ( VAR_10 = FUNC_2( VAR_3, VAR_7, VAR_9 ) ) )
        {
            FUNC_4( VAR_3->p_access, VAR_10 );
        }
    }

    return VAR_1;
}
