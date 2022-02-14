
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int workaround; int context_mutex; int surface; int * cfg; } ;
struct TYPE_7__ {int context_mutex; } ;
struct TYPE_10__ {TYPE_3__ hw; TYPE_2__* selected_decoder; TYPE_1__ d3d_dev; int hw_surface; int cfg; } ;
typedef TYPE_4__ vlc_va_sys_t ;
struct TYPE_11__ {TYPE_3__* hwaccel_context; } ;
struct TYPE_8__ {int workaround; } ;
typedef TYPE_5__ AVCodecContext ;



__attribute__((used)) static void FUNC_0(void *VAR_0, AVCodecContext *VAR_1)
{
    vlc_va_sys_t *VAR_2 = VAR_0;
    VAR_2->hw.cfg = &VAR_2->cfg;
    VAR_2->hw.surface = VAR_2->hw_surface;
    VAR_2->hw.context_mutex = VAR_2->d3d_dev.context_mutex;
    VAR_2->hw.workaround = VAR_2->selected_decoder->workaround;
    VAR_1->hwaccel_context = &VAR_2->hw;
}
