
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_25__ {int i_nb_inputs; int p_access; TYPE_1__** pp_inputs; TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_mux_t ;
struct TYPE_24__ {size_t i_entry_count; size_t i_entry_max; TYPE_7__* entry; } ;
struct TYPE_26__ {int b_write_header; scalar_t__ i_movi_size; TYPE_2__ idx1; TYPE_6__* stream; } ;
typedef TYPE_4__ sout_mux_sys_t ;
struct TYPE_27__ {scalar_t__ i_length; scalar_t__ i_dts; int i_buffer; int i_flags; char* p_buffer; } ;
typedef TYPE_5__ block_t ;
typedef int block_fifo_t ;
struct TYPE_28__ {int i_totalsize; int fcc; int i_duration; int i_frames; } ;
typedef TYPE_6__ avi_stream_t ;
struct TYPE_29__ {int i_length; scalar_t__ i_pos; scalar_t__ i_flags; int fcc; } ;
typedef TYPE_7__ avi_idx1_entry_t ;
struct TYPE_23__ {int fmt; int * p_fifo; scalar_t__ p_sys; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int *,TYPE_5__**) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (int *) ;
 TYPE_5__* FUNC_6 (int *) ;
 TYPE_5__* FUNC_7 (TYPE_5__*,int,int) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (TYPE_3__*,char*) ;
 int FUNC_12 (int ,TYPE_5__*) ;
 TYPE_7__* FUNC_13 (TYPE_7__*,int) ;

__attribute__((used)) static int FUNC_14 ( sout_mux_t *VAR_5 )
{
    sout_mux_sys_t *VAR_6 = VAR_5->p_sys;
    avi_stream_t *VAR_7;
    int VAR_8, VAR_9;

    if( VAR_6->b_write_header )
    {
        FUNC_10( VAR_5, "writing header" );

        block_t *VAR_10 = FUNC_3( VAR_5 );
        if ( !VAR_10 )
            return VAR_3;
        FUNC_12( VAR_5->p_access, VAR_10 );

        VAR_6->b_write_header = 0;
    }

    for( VAR_9 = 0; VAR_9 < VAR_5->i_nb_inputs; VAR_9++ )
    {
        int VAR_11;
        block_fifo_t *VAR_12;

        if (!VAR_5->pp_inputs[VAR_9]->p_sys)
            continue;

        VAR_8 = *((int*)VAR_5->pp_inputs[VAR_9]->p_sys );
        VAR_7 = &VAR_6->stream[VAR_8];

        VAR_12 = VAR_5->pp_inputs[VAR_9]->p_fifo;
        VAR_11 = FUNC_4( VAR_12 );
        while( VAR_11 > 1 )
        {
            avi_idx1_entry_t *VAR_13;
            block_t *VAR_14;

            VAR_14 = FUNC_5( VAR_12 );
            if( FUNC_4( VAR_12 ) > 0 )
            {
                block_t *VAR_15 = FUNC_6( VAR_12 );
                VAR_14->i_length = VAR_15->i_dts - VAR_14->i_dts;
            }

            if( FUNC_0( VAR_7, &VAR_5->pp_inputs[VAR_9]->fmt,
                                &VAR_14 ) != VAR_4 )
            {
                VAR_11--;
                continue;
            }

            VAR_7->i_frames++;
            if( VAR_14->i_length < 0 )
            {
                FUNC_11( VAR_5, "argg length < 0 l" );
                FUNC_8( VAR_14 );
                VAR_11--;
                continue;
            }
            VAR_7->i_duration += VAR_14->i_length;
            VAR_7->i_totalsize += VAR_14->i_buffer;


            VAR_13 = &VAR_6->idx1.entry[VAR_6->idx1.i_entry_count];
            FUNC_9( VAR_13->fcc, VAR_7->fcc, 4 );
            VAR_13->i_flags = 0;
            if( ( VAR_14->i_flags & VAR_2 ) == 0 || ( VAR_14->i_flags & VAR_1 ) )
                VAR_13->i_flags = VAR_0;
            VAR_13->i_pos = VAR_6->i_movi_size + 4;
            VAR_13->i_length= VAR_14->i_buffer;
            VAR_6->idx1.i_entry_count++;
            if( VAR_6->idx1.i_entry_count >= VAR_6->idx1.i_entry_max )
            {
                VAR_6->idx1.i_entry_max += 10000;
                VAR_6->idx1.entry = FUNC_13( VAR_6->idx1.entry,
                       VAR_6->idx1.i_entry_max * sizeof( avi_idx1_entry_t ) );
            }

            VAR_14 = FUNC_7( VAR_14, 8, VAR_14->i_buffer );
            if( VAR_14 )
            {
                FUNC_2( VAR_14->p_buffer, VAR_7->fcc );
                FUNC_1( VAR_14->p_buffer + 4, VAR_14->i_buffer - 8 );

                if( VAR_14->i_buffer & 0x01 )
                {
                    VAR_14 = FUNC_7( VAR_14, 0, VAR_14->i_buffer + 1 );
                    if ( VAR_14 )
                        VAR_14->p_buffer[ VAR_14->i_buffer - 1 ] = '\0';
                }

                if ( VAR_14 )
                {
                    VAR_6->i_movi_size += VAR_14->i_buffer;
                    FUNC_12( VAR_5->p_access, VAR_14 );
                }
            }

            VAR_11--;
        }

    }
    return( 0 );
}
