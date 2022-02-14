
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {int height; int width; } ;
typedef TYPE_3__ vout_window_cfg_t ;
typedef int vlc_object_t ;
struct TYPE_12__ {int i_format; } ;
struct TYPE_14__ {TYPE_10__ audio; } ;
struct TYPE_13__ {TYPE_10__ audio; } ;
struct TYPE_16__ {int pf_audio_filter; TYPE_2__ fmt_in; TYPE_1__ fmt_out; TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_17__ {int thread; int * fifo; int * gl; int wind_param; int f_rotationIncrement; scalar_t__ f_rotationAngle; int * p_prev_s16_buff; scalar_t__ i_prev_nb_samples; int i_channels; } ;
typedef TYPE_5__ filter_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_10__*) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_7 (int *,int ,TYPE_4__*,int ) ;
 int * FUNC_8 (int *,TYPE_3__*,int *) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(vlc_object_t * VAR_8)
{
    filter_t *VAR_9 = (filter_t *)VAR_8;
    filter_sys_t *VAR_10;

    VAR_10 = VAR_9->p_sys = (filter_sys_t*)FUNC_5(sizeof(*VAR_10));
    if (VAR_10 == ((void*)0))
        return VAR_5;


    VAR_10->i_channels = FUNC_1(&VAR_9->fmt_in.audio);
    VAR_10->i_prev_nb_samples = 0;
    VAR_10->p_prev_s16_buff = ((void*)0);

    VAR_10->f_rotationAngle = 0;
    VAR_10->f_rotationIncrement = VAR_1;


    FUNC_9( FUNC_0( VAR_9 ), &VAR_10->wind_param );


    VAR_10->fifo = FUNC_2();
    if (VAR_10->fifo == ((void*)0))
        goto error;


    vout_window_cfg_t VAR_11 = {
        .width = FUNC_6(VAR_9, "glspectrum-width"),
        .height = FUNC_6(VAR_9, "glspectrum-height"),
    };

    VAR_10->gl = FUNC_8(VAR_8, &VAR_11, ((void*)0));
    if (VAR_10->gl == ((void*)0))
    {
        FUNC_3(VAR_10->fifo);
        goto error;
    }


    if (FUNC_7(&VAR_10->thread, VAR_2, VAR_9,
                  VAR_7))
        goto error;

    VAR_9->fmt_in.audio.i_format = VAR_3;
    VAR_9->fmt_out.audio = VAR_9->fmt_in.audio;
    VAR_9->pf_audio_filter = VAR_0;

    return VAR_6;

error:
    FUNC_4(VAR_10);
    return VAR_4;
}
