
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int video_format_t ;
struct TYPE_22__ {scalar_t__ i_width; scalar_t__ i_height; TYPE_2__* p_palette; } ;
struct TYPE_26__ {scalar_t__ i_x; scalar_t__ i_y; TYPE_3__ fmt; TYPE_1__* p_picture; struct TYPE_26__* p_next; } ;
typedef TYPE_7__ subpicture_region_t ;
struct TYPE_27__ {int i_pitch; int * p_pixels; } ;
typedef TYPE_8__ plane_t ;
struct TYPE_28__ {TYPE_10__* p_sys; } ;
typedef TYPE_9__ demux_t ;
struct TYPE_25__ {TYPE_5__** p_overlays; } ;
struct TYPE_17__ {TYPE_6__ bdj; } ;
typedef TYPE_10__ demux_sys_t ;
struct TYPE_24__ {int lock; TYPE_7__* p_regions; } ;
struct TYPE_23__ {int T; int Cr; int Cb; int Y; } ;
struct TYPE_21__ {int i_entries; int ** palette; } ;
struct TYPE_20__ {TYPE_8__* p; } ;
struct TYPE_19__ {size_t plane; scalar_t__ x; scalar_t__ y; scalar_t__ w; scalar_t__ h; TYPE_4__* palette; TYPE_11__* img; } ;
struct TYPE_18__ {int len; int color; } ;
typedef TYPE_11__ BD_PG_RLE_ELEM ;
typedef TYPE_12__ BD_OVERLAY ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (TYPE_7__*) ;
 TYPE_7__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(demux_t *VAR_1, const BD_OVERLAY* const VAR_2)
{
    demux_sys_t *VAR_3 = VAR_1->p_sys;





    FUNC_5(&VAR_3->bdj.p_overlays[VAR_2->plane]->lock);


    subpicture_region_t **VAR_4 = &VAR_3->bdj.p_overlays[VAR_2->plane]->p_regions;
    subpicture_region_t *VAR_5 = VAR_3->bdj.p_overlays[VAR_2->plane]->p_regions;
    subpicture_region_t *VAR_6 = ((void*)0);
    while (VAR_5 != ((void*)0)) {
        VAR_6 = VAR_5;
        if (VAR_5->i_x == VAR_2->x && VAR_5->i_y == VAR_2->y &&
                VAR_5->fmt.i_width == VAR_2->w && VAR_5->fmt.i_height == VAR_2->h)
            break;
        VAR_4 = &VAR_5->p_next;
        VAR_5 = VAR_5->p_next;
    }

    if (!VAR_2->img) {
        if (VAR_5) {

            *VAR_4 = VAR_5->p_next;
            FUNC_1(VAR_5);
        }
        FUNC_6(&VAR_3->bdj.p_overlays[VAR_2->plane]->lock);
        return;
    }


    if (!VAR_5) {
        video_format_t VAR_7;
        FUNC_3(&VAR_7, 0);
        FUNC_4(&VAR_7, VAR_0, VAR_2->w, VAR_2->h, VAR_2->w, VAR_2->h, 1, 1);

        VAR_5 = FUNC_2(&VAR_7);
        if (VAR_5) {
            VAR_5->i_x = VAR_2->x;
            VAR_5->i_y = VAR_2->y;

            if (VAR_6 != ((void*)0))
                VAR_6->p_next = VAR_5;
            else
                VAR_3->bdj.p_overlays[VAR_2->plane]->p_regions = VAR_5;
        }
    }


    const BD_PG_RLE_ELEM *VAR_8 = VAR_2->img;
    for (int VAR_9 = 0; VAR_9 < VAR_2->h; VAR_9++)
        for (int VAR_10 = 0; VAR_10 < VAR_2->w;) {
            plane_t *VAR_11 = &VAR_5->p_picture->p[0];
            FUNC_0(&VAR_11->p_pixels[VAR_9 * VAR_11->i_pitch + VAR_10], VAR_8->color, VAR_8->len);
            VAR_10 += VAR_8->len;
            VAR_8++;
        }

    if (VAR_2->palette) {
        VAR_5->fmt.p_palette->i_entries = 256;
        for (int VAR_12 = 0; VAR_12 < 256; ++VAR_12) {
            VAR_5->fmt.p_palette->palette[VAR_12][0] = VAR_2->palette[VAR_12].Y;
            VAR_5->fmt.p_palette->palette[VAR_12][1] = VAR_2->palette[VAR_12].Cb;
            VAR_5->fmt.p_palette->palette[VAR_12][2] = VAR_2->palette[VAR_12].Cr;
            VAR_5->fmt.p_palette->palette[VAR_12][3] = VAR_2->palette[VAR_12].T;
        }
    }

    FUNC_6(&VAR_3->bdj.p_overlays[VAR_2->plane]->lock);



}
