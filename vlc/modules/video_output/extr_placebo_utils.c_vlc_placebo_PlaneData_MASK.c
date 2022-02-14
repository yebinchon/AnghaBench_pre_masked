
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pl_plane_data {scalar_t__ height; uintptr_t buf_offset; scalar_t__ pixels; struct pl_buf const* buf; int row_stride; } ;
struct TYPE_5__ {scalar_t__ size; } ;
struct pl_buf {int data; TYPE_1__ params; } ;
typedef uintptr_t ptrdiff_t ;
struct TYPE_7__ {int i_planes; TYPE_2__* p; int format; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_6__ {scalar_t__ i_visible_lines; scalar_t__ p_pixels; int i_pitch; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct pl_plane_data*) ;

int FUNC_2(const picture_t *VAR_0, struct pl_plane_data VAR_1[4],
                          const struct pl_buf *VAR_2)
{
    int VAR_3 = FUNC_1(&VAR_0->format, VAR_1);
    if (!VAR_3)
        return 0;

    FUNC_0(VAR_3 == VAR_0->i_planes);
    for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        FUNC_0(VAR_1[VAR_4].height == VAR_0->p[VAR_4].i_visible_lines);
        VAR_1[VAR_4].row_stride = VAR_0->p[VAR_4].i_pitch;
        if (VAR_2) {
            FUNC_0(VAR_2->data);
            FUNC_0(VAR_0->p[VAR_4].p_pixels <= VAR_2->data + VAR_2->params.size);
            VAR_1[VAR_4].buf = VAR_2;
            VAR_1[VAR_4].buf_offset = (uintptr_t) VAR_0->p[VAR_4].p_pixels - (ptrdiff_t) VAR_2->data;
        } else {
            VAR_1[VAR_4].pixels = VAR_0->p[VAR_4].p_pixels;
        }
    }

    return VAR_3;
}
