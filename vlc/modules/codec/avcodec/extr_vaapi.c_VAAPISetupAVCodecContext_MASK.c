
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hw_ctx; } ;
typedef TYPE_1__ vlc_va_sys_t ;
struct TYPE_5__ {int * hwaccel_context; } ;
typedef TYPE_2__ AVCodecContext ;



__attribute__((used)) static void FUNC_0(void *VAR_0, AVCodecContext *VAR_1)
{
    vlc_va_sys_t *VAR_2 = VAR_0;
    VAR_1->hwaccel_context = &VAR_2->hw_ctx;
}
