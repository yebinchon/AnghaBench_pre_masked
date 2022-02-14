
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


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_17__ {scalar_t__ i_height; int i_width; scalar_t__ orientation; int i_chroma; } ;
struct TYPE_14__ {TYPE_5__ video; } ;
struct TYPE_12__ {scalar_t__ i_height; int i_width; scalar_t__ orientation; int i_chroma; } ;
struct TYPE_13__ {TYPE_10__ video; } ;
struct TYPE_15__ {TYPE_2__ fmt_out; TYPE_1__ fmt_in; TYPE_4__* p_sys; int pf_video_filter; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_16__ {int derive_failed; int image_fallback_failed; int * dec_device; int * dest_pics; int cache; int * dpy; int va_surface_ids; } ;
typedef TYPE_4__ filter_sys_t ;


 scalar_t__ FUNC_0 (TYPE_10__*,TYPE_5__*,int*,int*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int,scalar_t__,char const*,char const*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (TYPE_3__* const,int **) ;
 int FUNC_8 (TYPE_3__* const,int *) ;
 int * FUNC_9 (int *,int *,int *,int ,int *,TYPE_5__*,int) ;

int
FUNC_10(vlc_object_t *VAR_6)
{
    filter_t *const VAR_7 = (filter_t *)VAR_6;
    filter_sys_t * VAR_8;

    if (VAR_7->fmt_in.video.i_height != VAR_7->fmt_out.video.i_height
     || VAR_7->fmt_in.video.i_width != VAR_7->fmt_out.video.i_width
     || VAR_7->fmt_in.video.orientation != VAR_7->fmt_out.video.orientation)
        return VAR_3;

    bool VAR_9;
    uint8_t VAR_10;
    if (FUNC_0(&VAR_7->fmt_in.video, &VAR_7->fmt_out.video, &VAR_9,
                 &VAR_10))
        return VAR_3;

    VAR_7->pf_video_filter = VAR_9 ? VAR_2 : VAR_1;

    if (!(VAR_8 = FUNC_2(1, sizeof(filter_sys_t))))
    {
        FUNC_4(VAR_6, "unable to allocate memory");
        return VAR_4;
    }
    VAR_8->derive_failed = 0;
    VAR_8->image_fallback_failed = 0;
    if (VAR_9)
    {
        VAR_8->dec_device = FUNC_7(VAR_7,
                                                               &VAR_8->dpy);

        if (VAR_8->dec_device == ((void*)0))
        {
            FUNC_3(VAR_8);
            return VAR_3;
        }

        VAR_8->dest_pics =
            FUNC_9(VAR_6, VAR_8->dec_device, VAR_8->dpy,
                              VAR_0, &VAR_8->va_surface_ids,
                              &VAR_7->fmt_out.video, 1);
        if (!VAR_8->dest_pics)
        {
            FUNC_8(VAR_7, VAR_8->dec_device);
            FUNC_3(VAR_8);
            return VAR_3;
        }
    }
    else
    {


        VAR_8->dec_device = ((void*)0);
        VAR_8->dpy = ((void*)0);
        VAR_8->dest_pics = ((void*)0);
    }

    if (FUNC_1(&VAR_8->cache, VAR_7->fmt_in.video.i_width
                      * VAR_10))
    {
        if (VAR_9)
        {
            FUNC_6(VAR_8->dest_pics);
            FUNC_8(VAR_7, VAR_8->dec_device);
        }
        FUNC_3(VAR_8);
        return VAR_3;
    }

    VAR_7->p_sys = VAR_8;
    FUNC_5(VAR_6, "Using SW chroma filter for %dx%d %4.4s -> %4.4s",
             VAR_7->fmt_in.video.i_width,
             VAR_7->fmt_in.video.i_height,
             (const char *) &VAR_7->fmt_in.video.i_chroma,
             (const char *) &VAR_7->fmt_out.video.i_chroma);

    return VAR_5;
}
