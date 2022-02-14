
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {int chroma; int * vdp; int format; int device; } ;
typedef TYPE_4__ vlc_vdp_mixer_t ;
struct TYPE_22__ {scalar_t__ i_chroma; } ;
typedef TYPE_5__ video_format_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_23__ {int i_planes; TYPE_5__ format; TYPE_3__* p; } ;
typedef TYPE_6__ picture_t ;
struct TYPE_18__ {int i_y_offset; int i_visible_height; int i_width; } ;
struct TYPE_19__ {TYPE_1__ video; } ;
struct TYPE_24__ {TYPE_2__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_7__ filter_t ;
typedef int VdpVideoSurface ;
typedef scalar_t__ VdpStatus ;
struct TYPE_20__ {void* p_pixels; int i_pitch; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_7__*,char*,char*,char*,int ) ;
 int FUNC_1 (TYPE_6__*,TYPE_6__*) ;
 TYPE_6__* FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int *,int ,int,int ,int ,int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ,int ,void const**,int*) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,int ,TYPE_6__*) ;

__attribute__((used)) static picture_t *FUNC_11(filter_t *VAR_9, picture_t *VAR_10)
{
    vlc_vdp_mixer_t *VAR_11 = VAR_9->p_sys;
    VdpVideoSurface VAR_12;
    VdpStatus VAR_13;

    if (VAR_11->vdp == ((void*)0))
        goto drop;


    VAR_13 = FUNC_6(VAR_11->vdp, VAR_11->device, VAR_11->chroma,
                                   VAR_9->fmt_in.video.i_width,
                                   VAR_9->fmt_in.video.i_visible_height,
                                   &VAR_12);
    if (VAR_13 != VAR_0)
    {
        FUNC_0(VAR_9, "video %s %s failure: %s", "surface", "creation",
                FUNC_5(VAR_11->vdp, VAR_13));
        goto drop;
    }


    const void *VAR_14[3];
    uint32_t VAR_15[3];
    for (int VAR_16 = 0; VAR_16 < VAR_10->i_planes; VAR_16++)
    {
        VAR_14[VAR_16] = VAR_10->p[VAR_16].p_pixels
                  + VAR_9->fmt_in.video.i_y_offset * VAR_10->p[VAR_16].i_pitch;
        VAR_15[VAR_16] = VAR_10->p[VAR_16].i_pitch;
    }
    if (VAR_10->format.i_chroma == VAR_1
     || VAR_10->format.i_chroma == VAR_2
     || VAR_10->format.i_chroma == VAR_3)
    {
        VAR_14[1] = VAR_10->p[2].p_pixels;
        VAR_14[2] = VAR_10->p[1].p_pixels;
        VAR_15[1] = VAR_10->p[2].i_pitch;
        VAR_15[2] = VAR_10->p[1].i_pitch;
    }
    if (VAR_10->format.i_chroma == VAR_1
     || VAR_10->format.i_chroma == VAR_8
     || VAR_10->format.i_chroma == VAR_4)
    {
        for (int VAR_17 = 1; VAR_17 < VAR_10->i_planes; VAR_17++)
            VAR_14[VAR_17] = ((const uint8_t *)VAR_14[VAR_17])
                + (VAR_9->fmt_in.video.i_y_offset / 2) * VAR_10->p[VAR_17].i_pitch;
    }

    VAR_13 = FUNC_8(VAR_11->vdp, VAR_12, VAR_11->format,
                                             VAR_14, VAR_15);
    if (VAR_13 != VAR_0)
    {
        FUNC_0(VAR_9, "video %s %s failure: %s", "surface", "import",
                FUNC_5(VAR_11->vdp, VAR_13));
        goto error;
    }


    video_format_t VAR_18 = VAR_10->format;

    switch (VAR_11->chroma)
    {
        case 130:
            VAR_18.i_chroma = VAR_5;
            break;
        case 129:
            VAR_18.i_chroma = VAR_6;
            break;
        case 128:
            VAR_18.i_chroma = VAR_7;
            break;
        default:
            FUNC_9();
    }


    picture_t *VAR_19 = FUNC_2(&VAR_18);
    if (FUNC_4(VAR_19 == ((void*)0)))
        goto error;
    FUNC_1(VAR_19, VAR_10);
    FUNC_3(VAR_10);

    VAR_13 = FUNC_10(VAR_11->vdp, VAR_12, VAR_19);
    if (FUNC_4(VAR_13 != VAR_0))
    {
        FUNC_3(VAR_19);
        VAR_19 = ((void*)0);
    }
    return VAR_19;
error:
    FUNC_7(VAR_11->vdp, VAR_12);
drop:
    FUNC_3(VAR_10);
    return ((void*)0);
}
