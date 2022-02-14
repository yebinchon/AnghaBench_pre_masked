
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct aom_image {int * stride; int * planes; } ;
struct TYPE_6__ {int i_pitch; int p_pixels; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_7__ {int i_planes; TYPE_1__* p; } ;
typedef TYPE_2__ picture_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(const struct aom_image *VAR_0, picture_t *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1->i_planes; VAR_2++ ) {
        plane_t VAR_3 = VAR_1->p[VAR_2];
        VAR_3.p_pixels = VAR_0->planes[VAR_2];
        VAR_3.i_pitch = VAR_0->stride[VAR_2];
        FUNC_0(&VAR_1->p[VAR_2], &VAR_3);
    }
}
