
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {int i_chroma; } ;
struct TYPE_21__ {TYPE_4__ video; } ;
struct TYPE_18__ {int i_chroma; } ;
struct TYPE_19__ {TYPE_2__ video; } ;
struct TYPE_22__ {TYPE_5__ fmt_out; TYPE_3__ fmt_in; } ;
typedef TYPE_6__ vlc_blender_t ;
struct TYPE_23__ {int i_alpha; TYPE_8__* p_region; scalar_t__ b_absolute; int b_fade; } ;
typedef TYPE_7__ subpicture_t ;
struct TYPE_24__ {scalar_t__ i_align; int i_alpha; scalar_t__ p_picture; int i_y; int i_x; int fmt; struct TYPE_24__* p_next; } ;
typedef TYPE_8__ subpicture_region_t ;
struct TYPE_17__ {int i_height; int i_width; } ;
struct TYPE_25__ {TYPE_1__ format; } ;
typedef TYPE_9__ picture_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_6__*,TYPE_9__*,int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_2 (TYPE_6__*,int ,int ,int *) ;
 int FUNC_3 (TYPE_6__*,char*,char*,char*) ;

unsigned FUNC_4(picture_t *VAR_0,
                                 vlc_blender_t *VAR_1, subpicture_t *VAR_2)
{
    unsigned VAR_3 = 0;

    FUNC_0(VAR_2 && !VAR_2->b_fade && VAR_2->b_absolute);

    for (subpicture_region_t *VAR_4 = VAR_2->p_region; VAR_4 != ((void*)0); VAR_4 = VAR_4->p_next) {
        FUNC_0(VAR_4->p_picture && VAR_4->i_align == 0);
        if (FUNC_2(VAR_1, VAR_0->format.i_width,
                                  VAR_0->format.i_height, &VAR_4->fmt)
         || FUNC_1(VAR_1, VAR_0, VAR_4->i_x, VAR_4->i_y, VAR_4->p_picture,
                         VAR_2->i_alpha * VAR_4->i_alpha / 255))
            FUNC_3(VAR_1, "blending %4.4s to %4.4s failed",
                    (char *)&VAR_1->fmt_in.video.i_chroma,
                    (char *)&VAR_1->fmt_out.video.i_chroma );
        else
            VAR_3++;
    }
    return VAR_3;
}
