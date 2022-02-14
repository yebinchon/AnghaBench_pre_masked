
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {TYPE_3__* p_es; } ;
typedef TYPE_4__ ts_stream_t ;
struct TYPE_13__ {scalar_t__ i_current; } ;
struct TYPE_16__ {TYPE_2__ pcr; } ;
typedef TYPE_5__ ts_pmt_t ;
typedef scalar_t__ stime_t ;
struct TYPE_17__ {int out; } ;
typedef TYPE_6__ demux_t ;
struct TYPE_18__ {int* p_buffer; size_t i_buffer; int i_pts; int i_dts; } ;
typedef TYPE_7__ block_t ;
struct TYPE_12__ {scalar_t__ i_codec; } ;
struct TYPE_14__ {scalar_t__ id; TYPE_5__* p_program; TYPE_1__ fmt; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 TYPE_7__* FUNC_4 (size_t) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (int ,scalar_t__,TYPE_7__*) ;
 int FUNC_7 (int*,int const*,size_t) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9( demux_t *VAR_1,
                              const uint8_t *VAR_2, size_t VAR_3,
                              const uint8_t *VAR_4, size_t VAR_5,
                              void *VAR_6 )
{
    FUNC_2(VAR_4); FUNC_2(VAR_5);
    ts_stream_t *VAR_7 = (ts_stream_t *) VAR_6;
    FUNC_3( VAR_7->p_es->fmt.i_codec == VAR_0 );
    ts_pmt_t *VAR_8 = VAR_7->p_es->p_program;
    stime_t VAR_9 = VAR_8->pcr.i_current;

    block_t *VAR_10 = FUNC_4( VAR_3 );
    if( FUNC_8(!VAR_10) || FUNC_8(!VAR_7->p_es->id) )
        return;
    FUNC_7( VAR_10->p_buffer, VAR_2, VAR_3 );


    int VAR_11 = 0;
    size_t VAR_12 = 4;
    if( VAR_10->p_buffer[3] & 0x40 )
    {
        VAR_11 = ((VAR_10->p_buffer[7] & 0x0f) << 8) |
                VAR_10->p_buffer[8];
        VAR_12 += 5;
    }
    if( VAR_11 == 0 && VAR_10->i_buffer > VAR_12 + 8 )
    {
        bool VAR_13 = VAR_10->p_buffer[VAR_12 + 3] & 0x40;
        if( !VAR_13 )
        {
            stime_t VAR_14 = FUNC_1( &VAR_10->p_buffer[VAR_12 + 4] );
            if( VAR_14 < VAR_9 )
                VAR_9 = VAR_14 + (1ll << 32);
            else
                VAR_9 = VAR_14;
        }

    }

    VAR_10->i_dts = VAR_10->i_pts = FUNC_0(VAR_9);


    if( VAR_7->p_es->id )
        FUNC_6( VAR_1->out, VAR_7->p_es->id, VAR_10 );
    else
        FUNC_5( VAR_10 );
}
