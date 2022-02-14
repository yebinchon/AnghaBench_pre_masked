
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
struct pl_plane_data {int dummy; } ;
struct pl_gpu {int dummy; } ;
struct fmt_desc {int num_planes; } ;


 int FUNC_0 (int ,struct fmt_desc const*,struct pl_plane_data*) ;
 struct fmt_desc* FUNC_1 (int ) ;
 int FUNC_2 (struct pl_gpu const*,int *,struct pl_plane_data*) ;

bool FUNC_3(const struct pl_gpu *VAR_0, vlc_fourcc_t VAR_1)
{
    const struct fmt_desc *VAR_2 = FUNC_1(VAR_1);
    if (!VAR_2)
        return 0;

    struct pl_plane_data VAR_3[4];
    FUNC_0(VAR_1, VAR_2, VAR_3);
    for (int VAR_4 = 0; VAR_4 < VAR_2->num_planes; VAR_4++) {
        if (!FUNC_2(VAR_0, ((void*)0), &VAR_3[VAR_4]))
            return 0;
    }

    return 1;
}
