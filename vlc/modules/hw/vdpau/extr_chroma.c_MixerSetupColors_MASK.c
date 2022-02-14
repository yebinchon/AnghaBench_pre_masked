
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {float brightness; float contrast; float saturation; float hue; } ;
struct TYPE_14__ {TYPE_3__ procamp; int vdp; } ;
typedef TYPE_4__ vlc_vdp_mixer_t ;
struct TYPE_11__ {int space; int i_height; } ;
struct TYPE_12__ {TYPE_1__ video; } ;
struct TYPE_15__ {TYPE_2__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_5__ filter_t ;
typedef scalar_t__ VdpStatus ;
struct TYPE_16__ {float brightness; float contrast; float saturation; float hue; } ;
typedef TYPE_6__ VdpProcamp ;
typedef int VdpColorStandard ;
typedef int VdpCSCMatrix ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_5__*,char*,char*,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_6__ const*,int ,int *) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static VdpStatus FUNC_3(filter_t *VAR_3, const VdpProcamp *VAR_4,
                                  VdpCSCMatrix *restrict VAR_5)
{
    vlc_vdp_mixer_t *VAR_6 = VAR_3->p_sys;
    VdpStatus VAR_7;

    VdpColorStandard VAR_8;

    switch (VAR_3->fmt_in.video.space)
    {
        case 129:
            VAR_8 = VAR_0;
            break;
        case 128:
            VAR_8 = VAR_1;
            break;
        default:
            if (VAR_3->fmt_in.video.i_height >= 720)
                VAR_8 = VAR_1;
            else
                VAR_8 = VAR_0;
    }

    VAR_7 = FUNC_1(VAR_6->vdp, VAR_4, VAR_8, VAR_5);
    if (VAR_7 != VAR_2)
    {
        FUNC_0(VAR_3, "video %s failure: %s", "color space matrix",
                FUNC_2(VAR_6->vdp, VAR_7));
        return VAR_7;
    }

    if (VAR_4 != ((void*)0))
    {
        VAR_6->procamp.brightness = VAR_4->brightness;
        VAR_6->procamp.contrast = VAR_4->contrast;
        VAR_6->procamp.saturation = VAR_4->saturation;
        VAR_6->procamp.hue = VAR_4->hue;
    }
    else
    {
        VAR_6->procamp.brightness = 0.f;
        VAR_6->procamp.contrast = 1.f;
        VAR_6->procamp.saturation = 1.f;
        VAR_6->procamp.hue = 0.f;
    }
    return VAR_2;
}
