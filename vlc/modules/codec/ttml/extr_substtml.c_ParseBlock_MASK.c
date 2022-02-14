
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_9__ ;
typedef struct TYPE_39__ TYPE_8__ ;
typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;
typedef struct TYPE_31__ TYPE_12__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_34__ {scalar_t__ p_next; int * p_segments; } ;
struct TYPE_32__ {scalar_t__ i_bytes; } ;
struct TYPE_35__ {TYPE_3__ updt; TYPE_1__ bgbitmap; } ;
typedef TYPE_4__ ttml_region_t ;
struct TYPE_31__ {scalar_t__ base; } ;
struct TYPE_36__ {TYPE_12__ begin; TYPE_12__ dur; TYPE_12__ end; int i_type; } ;
typedef TYPE_5__ tt_timings_t ;
typedef int tt_time_t ;
typedef int tt_node_t ;
typedef int tt_basenode_t ;
struct TYPE_37__ {int b_ephemer; int b_absolute; scalar_t__ i_stop; scalar_t__ i_start; } ;
typedef TYPE_6__ subpicture_t ;
struct TYPE_38__ {TYPE_8__* p_sys; } ;
typedef TYPE_7__ decoder_t ;
struct TYPE_33__ {scalar_t__ i_offset; scalar_t__ i_prev_segment_start_time; } ;
struct TYPE_39__ {TYPE_2__ pes; } ;
typedef TYPE_8__ decoder_sys_t ;
struct TYPE_40__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_dts; scalar_t__ i_length; int i_buffer; int p_buffer; } ;
typedef TYPE_9__ block_t ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *,int ) ;
 int * FUNC_1 (TYPE_7__*,int ,int ) ;
 int FUNC_2 (TYPE_7__*,TYPE_6__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_6__* FUNC_5 (TYPE_7__*) ;
 TYPE_6__* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_7__*,char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (TYPE_12__*) ;
 int FUNC_14 (int *,TYPE_5__*,int **,size_t*) ;
 int FUNC_15 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_16( decoder_t *VAR_5, const block_t *VAR_6 )
{
    decoder_sys_t *VAR_7 = VAR_5->p_sys;

    tt_time_t *VAR_8 = ((void*)0);
    size_t VAR_9 = 0;


    tt_timings_t VAR_10;
    VAR_10.i_type = VAR_1;
    FUNC_13( &VAR_10.begin );
    FUNC_13( &VAR_10.end );
    FUNC_13( &VAR_10.dur );
    VAR_10.begin.base = 0;

    if( VAR_6->i_flags & VAR_0 )
        return VAR_2;


    if( VAR_6->i_pts == VAR_4 )
    {
        FUNC_9( VAR_5, "subtitle without a date" );
        return VAR_2;
    }

    tt_node_t *VAR_11 = FUNC_1( VAR_5, VAR_6->p_buffer, VAR_6->i_buffer );
    if( !VAR_11 )
        return VAR_2;

    FUNC_14( (tt_basenode_t *) VAR_11, &VAR_10,
                        &VAR_8, &VAR_9 );






    vlc_tick_t VAR_12 = VAR_6->i_dts - VAR_7->pes.i_offset;

    if(FUNC_4(VAR_5) && VAR_12 < VAR_7->pes.i_prev_segment_start_time )
        VAR_12 = VAR_7->pes.i_prev_segment_start_time;

    for( size_t VAR_13=0; VAR_13+1 < VAR_9; VAR_13++ )
    {

        if( FUNC_12( &VAR_8[VAR_13] ) + VAR_3 < VAR_12 )
            continue;

        if( !FUNC_4(VAR_5) &&
            FUNC_12( &VAR_8[VAR_13] ) + VAR_3 > VAR_12 + VAR_6->i_length )
            break;

        if( FUNC_4(VAR_5) && VAR_7->pes.i_prev_segment_start_time < FUNC_12( &VAR_8[VAR_13] ) )
            VAR_7->pes.i_prev_segment_start_time = FUNC_12( &VAR_8[VAR_13] );

        bool VAR_14 = 0;
        subpicture_t *VAR_15 = ((void*)0);
        ttml_region_t *VAR_16 = FUNC_0( VAR_11, VAR_8[VAR_13] );
        if( VAR_16 )
        {
            if( VAR_16->bgbitmap.i_bytes > 0 && VAR_16->updt.p_segments == ((void*)0) )
            {
                VAR_14 = 1;
                VAR_15 = FUNC_6( VAR_5 );
            }
            else
            {
                VAR_15 = FUNC_5( VAR_5 );
            }
        }

        if( VAR_16 && VAR_15 )
        {
            VAR_15->i_start = VAR_7->pes.i_offset +
                                VAR_3 + FUNC_12( &VAR_8[VAR_13] );
            VAR_15->i_stop = VAR_7->pes.i_offset +
                                VAR_3 + FUNC_12( &VAR_8[VAR_13+1] ) - 1;
            VAR_15->b_ephemer = 1;
            VAR_15->b_absolute = 1;

            if( !VAR_14 )
                FUNC_3( VAR_5, VAR_15, VAR_16 );
            else
                FUNC_2( VAR_5, VAR_15, VAR_16 );
        }


        while( VAR_16 )
        {
            ttml_region_t *VAR_17 = (ttml_region_t *) VAR_16->updt.p_next;
            FUNC_15( VAR_16 );
            VAR_16 = VAR_17;
        }

        if( VAR_15 )
            FUNC_7( VAR_5, VAR_15 );
    }

    FUNC_11( VAR_11 );

    FUNC_8( VAR_8 );

    return VAR_2;
}
