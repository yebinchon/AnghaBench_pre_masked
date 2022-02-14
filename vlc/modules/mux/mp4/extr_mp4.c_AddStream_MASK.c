
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_12__ ;


typedef int uint32_t ;
struct TYPE_26__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_mux_t ;
struct TYPE_27__ {int pp_streams; scalar_t__ i_nb_streams; int muxh; } ;
typedef TYPE_4__ sout_mux_sys_t ;
struct TYPE_28__ {TYPE_6__* p_sys; TYPE_12__* p_fmt; } ;
typedef TYPE_5__ sout_input_t ;
struct TYPE_29__ {int extrabuilder; int tinfo; } ;
typedef TYPE_6__ mp4_stream_t ;
struct TYPE_25__ {int i_frame_rate; int i_frame_rate_base; } ;
struct TYPE_24__ {int i_rate; } ;
struct TYPE_30__ {TYPE_2__ video; TYPE_1__ audio; } ;
typedef TYPE_7__ es_format_t ;
struct TYPE_23__ {int i_codec; int i_cat; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,int ,TYPE_6__*) ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_8 ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*,TYPE_12__*) ;
 int FUNC_4 (TYPE_7__*,int ,int ) ;
 int FUNC_5 (TYPE_6__*) ;
 TYPE_6__* FUNC_6 () ;
 int FUNC_7 (int ,TYPE_12__*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__,TYPE_7__*,int) ;
 int FUNC_10 (TYPE_3__*,char*) ;
 int FUNC_11 (TYPE_3__*,char*,char*) ;
 int FUNC_12 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_13 (int ,int ) ;

__attribute__((used)) static int FUNC_14(sout_mux_t *VAR_9, sout_input_t *VAR_10)
{
    sout_mux_sys_t *VAR_11 = VAR_9->p_sys;
    mp4_stream_t *VAR_12;

    if(!FUNC_7(FUNC_1(VAR_9), VAR_10->p_fmt,
                      FUNC_8(VAR_11->muxh, VAR_5) ? VAR_1 : VAR_0,
                      FUNC_8(VAR_11->muxh, VAR_4)))
    {
        FUNC_11(VAR_9, "unsupported codec %4.4s in mp4",
                 (char*)&VAR_10->p_fmt->i_codec);
        return VAR_6;
    }

    if(!(VAR_12 = FUNC_6()))
        return VAR_7;

    uint32_t VAR_13 = VAR_2;
    es_format_t VAR_14;
    FUNC_4(&VAR_14, VAR_10->p_fmt->i_cat, VAR_10->p_fmt->i_codec);
    FUNC_3(&VAR_14, VAR_10->p_fmt);

    switch( VAR_10->p_fmt->i_cat )
    {
    case 129:
        if(!VAR_14.audio.i_rate)
        {
            FUNC_12( VAR_9, "no audio rate given for stream %d, assuming 48KHz",
                      VAR_11->i_nb_streams );
            VAR_14.audio.i_rate = 48000;
        }
        VAR_13 = VAR_14.audio.i_rate;
        break;
    case 128:
        if( !VAR_14.video.i_frame_rate ||
            !VAR_14.video.i_frame_rate_base )
        {
            FUNC_12( VAR_9, "Missing frame rate for stream %d, assuming 25fps",
                      VAR_11->i_nb_streams );
            VAR_14.video.i_frame_rate = 25;
            VAR_14.video.i_frame_rate_base = 1;
        }

        VAR_13 = VAR_14.video.i_frame_rate *
                            VAR_14.video.i_frame_rate_base;

        if( VAR_13 > VAR_2 )
            VAR_13 = VAR_2;
        else if( VAR_13 < 90000 )
            VAR_13 = 90000;
        break;
    default:
        break;
    }

    VAR_12->tinfo = FUNC_9(VAR_11->muxh, VAR_11->i_nb_streams + 1,
                                       &VAR_14, VAR_13);
    FUNC_2(&VAR_14);
    if(!VAR_12->tinfo)
    {
        FUNC_5(VAR_12);
        return VAR_7;
    }

    VAR_12->extrabuilder = FUNC_13(VAR_10->p_fmt->i_codec,
                                                       VAR_3);

    VAR_10->p_sys = VAR_12;

    FUNC_10(VAR_9, "adding input");

    FUNC_0(VAR_11->i_nb_streams, VAR_11->pp_streams, VAR_12);
    return VAR_8;
}
