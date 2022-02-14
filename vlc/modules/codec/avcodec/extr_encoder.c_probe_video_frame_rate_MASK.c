
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_19__ {int i_frame_rate_base; int i_frame_rate; } ;
struct TYPE_20__ {TYPE_3__ video; } ;
struct TYPE_17__ {int i_frame_rate_base; int i_frame_rate; } ;
struct TYPE_18__ {scalar_t__ i_codec; TYPE_1__ video; } ;
struct TYPE_22__ {TYPE_4__ fmt_in; TYPE_2__ fmt_out; } ;
typedef TYPE_6__ encoder_t ;
struct TYPE_25__ {TYPE_15__* supported_framerates; } ;
struct TYPE_21__ {int num; int den; } ;
struct TYPE_24__ {TYPE_5__ time_base; } ;
struct TYPE_23__ {int num; int den; } ;
struct TYPE_16__ {int den; int num; } ;
typedef TYPE_7__ AVRational ;
typedef TYPE_8__ AVCodecContext ;
typedef TYPE_9__ AVCodec ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_7__,TYPE_15__*) ;
 int FUNC_1 (TYPE_6__*,char*,int,int) ;

__attribute__((used)) static void FUNC_2( encoder_t *VAR_2, AVCodecContext *VAR_3, AVCodec *VAR_4 )
{


    VAR_3->time_base.num = VAR_2->fmt_in.video.i_frame_rate_base ? VAR_2->fmt_in.video.i_frame_rate_base : 1;


    VAR_3->time_base.den = VAR_2->fmt_in.video.i_frame_rate_base ? VAR_2->fmt_in.video.i_frame_rate :
                                  ( VAR_2->fmt_out.i_codec == VAR_1 ? 25 : VAR_0 );

    FUNC_1( VAR_2, "Time base for probing set to %d/%d", VAR_3->time_base.num, VAR_3->time_base.den );
    if( VAR_4->supported_framerates )
    {

        AVRational VAR_5 = {
            .num = VAR_3->time_base.den,
            .den = VAR_3->time_base.num
        };
        int VAR_6 = FUNC_0(VAR_5, VAR_4->supported_framerates);

        VAR_3->time_base.num = VAR_4->supported_framerates[VAR_6].den ?
                                    VAR_4->supported_framerates[VAR_6].den : 1;
        VAR_3->time_base.den = VAR_4->supported_framerates[VAR_6].den ?
                                    VAR_4->supported_framerates[VAR_6].num : VAR_0;


        if( VAR_3->time_base.den && VAR_3->time_base.den < VAR_0 )
        {
            VAR_2->fmt_out.video.i_frame_rate_base =
                VAR_2->fmt_in.video.i_frame_rate_base =
                VAR_3->time_base.num;
            VAR_2->fmt_out.video.i_frame_rate =
                VAR_2->fmt_in.video.i_frame_rate =
                VAR_3->time_base.den;
        }
    }
    FUNC_1( VAR_2, "Time base set to %d/%d", VAR_3->time_base.num, VAR_3->time_base.den );
}
