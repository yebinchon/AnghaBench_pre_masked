
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_10__ {int * cbs; } ;
typedef TYPE_3__ es_out_t ;
struct TYPE_9__ {int * channels; int * p_video_es; } ;
struct TYPE_8__ {int i_audio_pid; int i_spu_pid; } ;
struct TYPE_11__ {int b_discontinuity; int b_disable_output; int b_entered_recycling; int b_restart_decoders_on_reuse; int b_lowdelay; TYPE_3__ es_out; int lock; TYPE_2__ overlay; TYPE_1__ selected; void* priv; int * p_obj; TYPE_3__* p_dst_out; int es; } ;
typedef TYPE_4__ bluray_esout_priv_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static es_out_t *FUNC_4(vlc_object_t *VAR_3, es_out_t *VAR_4, void *VAR_5)
{
    bluray_esout_priv_t *VAR_6 = FUNC_0(sizeof(*VAR_6));
    if (FUNC_1(VAR_6 == ((void*)0)))
        return ((void*)0);

    FUNC_2(&VAR_6->es);
    VAR_6->p_dst_out = VAR_4;
    VAR_6->p_obj = VAR_3;
    VAR_6->priv = VAR_5;
    VAR_6->es_out.cbs = &VAR_2;
    VAR_6->b_discontinuity = 0;
    VAR_6->b_disable_output = 0;
    VAR_6->b_entered_recycling = 0;
    VAR_6->b_restart_decoders_on_reuse = 1;
    VAR_6->b_lowdelay = 0;
    VAR_6->selected.i_audio_pid = -1;
    VAR_6->selected.i_spu_pid = -1;
    VAR_6->overlay.p_video_es = ((void*)0);
    for(size_t VAR_7=0; VAR_7<VAR_0; VAR_7++)
        VAR_6->overlay.channels[VAR_7] = VAR_1;
    FUNC_3(&VAR_6->lock);
    return &VAR_6->es_out;
}
