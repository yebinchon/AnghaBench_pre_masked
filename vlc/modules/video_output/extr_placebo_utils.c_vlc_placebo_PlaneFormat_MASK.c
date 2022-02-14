
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_visible_width; int i_visible_height; int i_chroma; } ;
typedef TYPE_1__ video_format_t ;
struct plane_desc {int w_denom; int h_denom; } ;
struct pl_plane_data {int width; int height; } ;
struct fmt_desc {int num_planes; struct plane_desc* planes; } ;


 int FUNC_0 (int ,struct fmt_desc const*,struct pl_plane_data*) ;
 struct fmt_desc* FUNC_1 (int ) ;

int FUNC_2(const video_format_t *VAR_0, struct pl_plane_data VAR_1[4])
{
    const struct fmt_desc *VAR_2 = FUNC_1(VAR_0->i_chroma);
    if (!VAR_2)
        return 0;

    FUNC_0(VAR_0->i_chroma, VAR_2, VAR_1);
    for (int VAR_3 = 0; VAR_3 < VAR_2->num_planes; VAR_3++) {
        const struct plane_desc *VAR_4 = &VAR_2->planes[VAR_3];
        VAR_1[VAR_3].width = (VAR_0->i_visible_width + VAR_4->w_denom - 1) / VAR_4->w_denom;
        VAR_1[VAR_3].height = (VAR_0->i_visible_height + VAR_4->h_denom - 1) / VAR_4->h_denom;
    }

    return VAR_2->num_planes;
}
