
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* frame; int context; } ;
typedef TYPE_2__ vlc_vdp_video_field_t ;
struct TYPE_10__ {int * sys; } ;
typedef TYPE_3__ vlc_va_t ;
typedef int vlc_va_sys_t ;
typedef int uint8_t ;
struct TYPE_11__ {int * context; } ;
typedef TYPE_4__ picture_t ;
struct TYPE_8__ {scalar_t__ surface; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(vlc_va_t *VAR_2, picture_t *VAR_3, uint8_t **VAR_4)
{
    vlc_va_sys_t *VAR_5 = VAR_2->sys;
    vlc_vdp_video_field_t *VAR_6 = FUNC_0(VAR_5);
    if (VAR_6 == ((void*)0))
        return VAR_0;

    VAR_3->context = &VAR_6->context;
    *VAR_4 = (void *)(uintptr_t)VAR_6->frame->surface;
    return VAR_1;
}
