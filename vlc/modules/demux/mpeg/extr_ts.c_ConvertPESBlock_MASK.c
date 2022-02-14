
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_17__ {int i_current; int i_first; } ;
struct TYPE_19__ {TYPE_1__ pcr; } ;
typedef TYPE_3__ ts_pmt_t ;
struct TYPE_18__ {scalar_t__ i_codec; } ;
struct TYPE_20__ {int b_interlaced; TYPE_2__ fmt; TYPE_3__* p_program; } ;
typedef TYPE_4__ ts_es_t ;
typedef int stime_t ;
typedef int demux_t ;
struct TYPE_21__ {size_t i_buffer; char* p_buffer; scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_5__ block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_5__* FUNC_2 (int *,TYPE_5__*,int ) ;
 TYPE_5__* FUNC_3 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_7 ;
 TYPE_5__* FUNC_7 (TYPE_5__*,int ,int) ;
 int FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static block_t * FUNC_10( demux_t *VAR_8, ts_es_t *VAR_9,
                                  size_t VAR_10, uint8_t VAR_11,
                                  block_t *VAR_12 )
{
    if(!VAR_12)
        return ((void*)0);

    if( VAR_9->fmt.i_codec == VAR_5 )
    {
        if( VAR_10 > 0 && VAR_12->i_buffer > VAR_10 )
        {
            VAR_12->i_buffer = VAR_10;
        }

        VAR_12 = FUNC_7( VAR_12, 0, VAR_12->i_buffer + 1 );
        if( VAR_12 )
            VAR_12->p_buffer[VAR_12->i_buffer -1] = '\0';
    }
    else if( VAR_9->fmt.i_codec == VAR_6 )
    {
        const ts_pmt_t *VAR_13 = VAR_9->p_program;
        if( VAR_12->i_pts != VAR_7 &&
            VAR_13->pcr.i_current > -1 )
        {

            vlc_tick_t VAR_14 = FUNC_0(FUNC_5( VAR_13->pcr.i_first,
                                                               VAR_13->pcr.i_current ));
            if( VAR_14 < VAR_12->i_pts || VAR_14 - VAR_12->i_pts > VAR_0 )
                VAR_12->i_dts = VAR_12->i_pts = VAR_7;
        }
        if( VAR_12->i_pts == VAR_7 )
        {


            stime_t VAR_15 = FUNC_1( VAR_9->p_program );
            if( FUNC_4(VAR_15) )
            {
                VAR_15 = FUNC_5( VAR_13->pcr.i_first, VAR_15 );
                VAR_12->i_dts = VAR_12->i_pts = FUNC_0(VAR_15) + FUNC_6(40);
            }
        }
    }
    else if( VAR_9->fmt.i_codec == VAR_1 ||
             VAR_9->fmt.i_codec == VAR_2 )
    {
        if( VAR_12->i_pts == VAR_7 )
        {
            if( VAR_10 > 0 && VAR_12->i_buffer > VAR_10 )
            {
                VAR_12->i_buffer = VAR_10;
            }

            VAR_12 = FUNC_7( VAR_12, 0, VAR_12->i_buffer + 1 );
            if( VAR_12 )
                VAR_12->p_buffer[VAR_12->i_buffer -1] = '\0';
        }
    }
    else if( VAR_9->fmt.i_codec == VAR_4)
    {
        VAR_12 = FUNC_3(VAR_8, VAR_12);
    }
    else if( VAR_9->fmt.i_codec == VAR_3 )
    {
        if( FUNC_9(VAR_11 != 0xBD) )
        {
            FUNC_8( VAR_12 );
            VAR_12 = ((void*)0);
        }
        else
        {
            VAR_12 = FUNC_2( VAR_8, VAR_12, VAR_9->b_interlaced );
        }
    }

    return VAR_12;
}
