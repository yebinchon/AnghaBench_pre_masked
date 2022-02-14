
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef scalar_t__ uint8_t ;
struct TYPE_22__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_23__ {int b_need_ts; scalar_t__ pts; scalar_t__ sets; int dts; scalar_t__ b_recovery_point; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_24__ {int i_flags; scalar_t__ i_dts; scalar_t__ i_pts; int i_buffer; int* p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 TYPE_3__* FUNC_2 (TYPE_1__*,scalar_t__,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (TYPE_1__*,scalar_t__,TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,scalar_t__ const) ;
 scalar_t__ FUNC_9 (int*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 int FUNC_11 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static block_t *FUNC_13(decoder_t *VAR_7, bool *VAR_8, block_t *VAR_9)
{
    decoder_sys_t *VAR_10 = VAR_7->p_sys;
    *VAR_8 = 0;
    bool VAR_11 = VAR_9->i_flags & VAR_0;

    if(VAR_10->b_need_ts)
    {
        if(VAR_9->i_dts != VAR_6)
            FUNC_8(&VAR_10->dts, VAR_9->i_dts);
        VAR_10->pts = VAR_9->i_pts;
        if(FUNC_7( &VAR_10->dts ) != VAR_6)
            VAR_10->b_need_ts = 0;
        *VAR_8 = 1;
    }

    if(FUNC_12(VAR_9->i_buffer < 5))
    {
        FUNC_11(VAR_7,"NAL too small");
        FUNC_6(VAR_9);
        return ((void*)0);
    }

    if(VAR_9->p_buffer[4] & 0x80)
    {
        FUNC_11(VAR_7,"Forbidden zero bit not null, corrupted NAL");
        FUNC_6(VAR_9);
        return FUNC_0(FUNC_1(VAR_10, 0));
    }


    const vlc_tick_t VAR_12 = VAR_9->i_dts, VAR_13 = VAR_9->i_pts;
    block_t * VAR_14 = ((void*)0);
    uint8_t VAR_15 = FUNC_9(&VAR_9->p_buffer[4]);

    if (VAR_15 < VAR_3)
    {

        VAR_14 = FUNC_3(VAR_7, VAR_15, VAR_9);
        if (VAR_14 && (VAR_14->i_flags & VAR_1))
            FUNC_10(VAR_7, "Waiting for VPS/SPS/PPS");
    }
    else
    {
        VAR_14 = FUNC_2(VAR_7, VAR_15, VAR_9);
    }

    if( !VAR_14 && VAR_11 )
        VAR_14 = FUNC_1(VAR_10, VAR_10->sets != VAR_4 &&
                                       VAR_10->b_recovery_point);

    VAR_14 = FUNC_0(VAR_14);
    if(VAR_14)
    {
        if(VAR_10->sets != VAR_5)
        {
            FUNC_5(VAR_10->sets == VAR_2);
            VAR_10->sets = VAR_5;
        }

        FUNC_4( VAR_7, VAR_14 );
        if (VAR_12 != VAR_6)
            FUNC_8(&VAR_10->dts, VAR_12);
        VAR_10->pts = VAR_13;
        *VAR_8 = 1;
    }

    return VAR_14;
}
