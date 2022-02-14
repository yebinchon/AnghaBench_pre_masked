
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_8__ ;
typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_13__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


struct TYPE_35__ {TYPE_8__* sys; } ;
typedef TYPE_7__ vout_display_t ;
struct TYPE_31__ {scalar_t__ y; scalar_t__ x; scalar_t__ height; scalar_t__ width; } ;
struct TYPE_32__ {TYPE_3__ place; } ;
struct TYPE_34__ {int dev; } ;
struct TYPE_36__ {size_t d3dregion_count; scalar_t__ d3dregion_format; TYPE_4__ area; TYPE_6__ d3d_dev; TYPE_11__* d3dregion; } ;
typedef TYPE_8__ vout_display_sys_t ;
typedef int uint8_t ;
struct TYPE_37__ {float i_original_picture_width; float i_original_picture_height; int i_alpha; TYPE_10__* p_region; } ;
typedef TYPE_9__ subpicture_t ;
struct TYPE_33__ {scalar_t__ i_width; scalar_t__ i_height; float const i_visible_width; float const i_visible_height; float const i_x_offset; float const i_y_offset; } ;
struct TYPE_25__ {float const i_x; float const i_y; int i_alpha; TYPE_5__ fmt; TYPE_2__* p_picture; struct TYPE_25__* p_next; } ;
typedef TYPE_10__ subpicture_region_t ;
struct TYPE_26__ {scalar_t__ format; scalar_t__ width; scalar_t__ height; int vertex; int * texture; } ;
typedef TYPE_11__ d3d_region_t ;
struct TYPE_30__ {TYPE_1__* p; } ;
struct TYPE_29__ {int i_pitch; int * p_pixels; } ;
struct TYPE_28__ {int Pitch; int * pBits; } ;
struct TYPE_27__ {float left; float right; float top; float bottom; } ;
typedef TYPE_12__ RECT ;
typedef int HRESULT ;
typedef TYPE_13__ D3DLOCKED_RECT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_12__*,TYPE_12__*,TYPE_12__*,int,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int,int ,scalar_t__,int ,int **,int *) ;
 int FUNC_3 (int *,int ,TYPE_13__*,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int) ;
 TYPE_11__* FUNC_7 (size_t,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (TYPE_11__*,int ,int) ;
 int FUNC_10 (TYPE_7__*,char*,float,int) ;
 int FUNC_11 (TYPE_7__*,char*,...) ;

__attribute__((used)) static void FUNC_12(vout_display_t *VAR_4,
                                     size_t *VAR_5, d3d_region_t **VAR_6,
                                     subpicture_t *VAR_7)
{
    vout_display_sys_t *VAR_8 = VAR_4->sys;

    size_t VAR_9 = 0;
    for (subpicture_region_t *VAR_10 = VAR_7->p_region; VAR_10; VAR_10 = VAR_10->p_next)
        VAR_9++;

    *VAR_5 = VAR_9;
    *VAR_6 = FUNC_7(VAR_9, sizeof(**VAR_6));
    if (*VAR_6 == ((void*)0)) {
        *VAR_5 = 0;
        return;
    }

    int VAR_11 = 0;
    for (subpicture_region_t *VAR_12 = VAR_7->p_region; VAR_12; VAR_12 = VAR_12->p_next, VAR_11++) {
        d3d_region_t *VAR_13 = &(*VAR_6)[VAR_11];
        HRESULT VAR_14;

        VAR_13->texture = ((void*)0);
        for (size_t VAR_15 = 0; VAR_15 < VAR_8->d3dregion_count; VAR_15++) {
            d3d_region_t *VAR_16 = &VAR_8->d3dregion[VAR_15];
            if (VAR_16->texture &&
                VAR_16->format == VAR_8->d3dregion_format &&
                VAR_16->width == VAR_12->fmt.i_width &&
                VAR_16->height == VAR_12->fmt.i_height) {
                *VAR_13 = *VAR_16;
                FUNC_9(VAR_16, 0, sizeof(*VAR_16));
                break;
            }
        }
        if (!VAR_13->texture) {
            VAR_13->format = VAR_8->d3dregion_format;
            VAR_13->width = VAR_12->fmt.i_width;
            VAR_13->height = VAR_12->fmt.i_height;
            VAR_14 = FUNC_2(VAR_8->d3d_dev.dev,
                                                VAR_13->width, VAR_13->height,
                                                1,
                                                VAR_2,
                                                VAR_13->format,
                                                VAR_1,
                                                &VAR_13->texture,
                                                ((void*)0));
            if (FUNC_1(VAR_14)) {
                VAR_13->texture = ((void*)0);
                FUNC_11(VAR_4, "Failed to create %dx%d texture for OSD (hr=0x%lX)",
                        VAR_13->width, VAR_13->height, VAR_14);
                continue;
            }

            FUNC_10(VAR_4, "Created %dx%d texture for OSD",
                    VAR_12->fmt.i_width, VAR_12->fmt.i_height);

        }

        D3DLOCKED_RECT VAR_17;
        VAR_14 = FUNC_3(VAR_13->texture, 0, &VAR_17, ((void*)0), 0);
        if (FUNC_5(VAR_14)) {
            uint8_t *VAR_18 = VAR_17.pBits;
            int VAR_19 = VAR_17.Pitch;
            uint8_t *VAR_20 = VAR_12->p_picture->p->p_pixels;
            int VAR_21 = VAR_12->p_picture->p->i_pitch;

            if (VAR_13->format == VAR_0) {
                if (VAR_19 == VAR_12->p_picture->p->i_pitch) {
                    FUNC_8(VAR_18, VAR_20, VAR_12->fmt.i_height * VAR_19);
                } else {
                    int VAR_22 = FUNC_6(VAR_19, VAR_12->p_picture->p->i_pitch);
                    for (unsigned VAR_23 = 0; VAR_23 < VAR_12->fmt.i_height; VAR_23++) {
                        FUNC_8(&VAR_18[VAR_23 * VAR_19], &VAR_20[VAR_23 * VAR_21], VAR_22);
                    }
                }
            } else {
                int VAR_24 = FUNC_6(VAR_19, VAR_12->p_picture->p->i_pitch);
                for (unsigned VAR_25 = 0; VAR_25 < VAR_12->fmt.i_height; VAR_25++) {
                    for (int VAR_26 = 0; VAR_26 < VAR_24; VAR_26 += 4) {
                        VAR_18[VAR_25 * VAR_19 + VAR_26 + 0] = VAR_20[VAR_25 * VAR_21 + VAR_26 + 2];
                        VAR_18[VAR_25 * VAR_19 + VAR_26 + 1] = VAR_20[VAR_25 * VAR_21 + VAR_26 + 1];
                        VAR_18[VAR_25 * VAR_19 + VAR_26 + 2] = VAR_20[VAR_25 * VAR_21 + VAR_26 + 0];
                        VAR_18[VAR_25 * VAR_19 + VAR_26 + 3] = VAR_20[VAR_25 * VAR_21 + VAR_26 + 3];
                    }
                }
            }
            VAR_14 = FUNC_4(VAR_13->texture, 0);
            if (FUNC_1(VAR_14))
                FUNC_11(VAR_4, "Failed to unlock the texture");
        } else {
            FUNC_11(VAR_4, "Failed to lock the texture");
        }


        const float VAR_27 = (float)(VAR_8->area.place.width) / VAR_7->i_original_picture_width;
        const float VAR_28 = (float)(VAR_8->area.place.height) / VAR_7->i_original_picture_height;

        RECT VAR_29;
        VAR_29.left = VAR_27 * VAR_12->i_x,
        VAR_29.right = VAR_29.left + VAR_27 * VAR_12->fmt.i_visible_width,
        VAR_29.top = VAR_28 * VAR_12->i_y,
        VAR_29.bottom = VAR_29.top + VAR_28 * VAR_12->fmt.i_visible_height;

        VAR_29.left += VAR_8->area.place.x;
        VAR_29.right += VAR_8->area.place.x;
        VAR_29.top += VAR_8->area.place.y;
        VAR_29.bottom += VAR_8->area.place.y;

        RECT VAR_30;
        VAR_30.left = 0;
        VAR_30.right = VAR_12->fmt.i_width;
        VAR_30.top = 0;
        VAR_30.bottom = VAR_12->fmt.i_height;

        RECT VAR_31;
        VAR_31.left = VAR_12->fmt.i_x_offset;
        VAR_31.right = VAR_12->fmt.i_x_offset + VAR_12->fmt.i_visible_width;
        VAR_31.top = VAR_12->fmt.i_y_offset;
        VAR_31.bottom = VAR_12->fmt.i_y_offset + VAR_12->fmt.i_visible_height;

        FUNC_0(VAR_13->vertex, &VAR_30, &VAR_31,
                              &VAR_29, VAR_7->i_alpha * VAR_12->i_alpha / 255, VAR_3);
    }
}
