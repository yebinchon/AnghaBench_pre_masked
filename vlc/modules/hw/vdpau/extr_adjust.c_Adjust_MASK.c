
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* hue; void* saturation; void* contrast; void* brightness; } ;
struct TYPE_10__ {TYPE_1__ procamp; } ;
typedef TYPE_2__ vlc_vdp_video_field_t ;
struct TYPE_11__ {scalar_t__ context; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_12__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_13__ {int hue; int saturation; int contrast; int brightness; } ;
typedef TYPE_5__ filter_sys_t ;


 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int *) ;

__attribute__((used)) static picture_t *FUNC_2(filter_t *VAR_0, picture_t *VAR_1)
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    vlc_vdp_video_field_t *VAR_3 = (vlc_vdp_video_field_t *)VAR_1->context;

    if (FUNC_0(VAR_3 == ((void*)0)))
        return VAR_1;

    VAR_3->procamp.brightness = FUNC_1(&VAR_2->brightness);
    VAR_3->procamp.contrast = FUNC_1(&VAR_2->contrast);
    VAR_3->procamp.saturation = FUNC_1(&VAR_2->saturation);
    VAR_3->procamp.hue = FUNC_1(&VAR_2->hue);

    return VAR_1;
}
