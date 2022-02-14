
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int projection_mode; } ;
struct TYPE_11__ {float f_fovx; int prgm; TYPE_1__ fmt; int vp; } ;
typedef TYPE_2__ vout_display_opengl_t ;
struct TYPE_12__ {float fov; } ;
typedef TYPE_3__ vlc_viewpoint_t ;


 float VAR_0 ;
 float VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 float FUNC_2 (float) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (int *,TYPE_3__ const*) ;

int FUNC_5(vout_display_opengl_t *VAR_5,
                                     const vlc_viewpoint_t *VAR_6)
{
    if (VAR_6->fov > VAR_0
            || VAR_6->fov < VAR_1)
        return VAR_3;


    float VAR_7 = VAR_6->fov * (float)VAR_2 / 180.f;


    FUNC_4(&VAR_5->vp, VAR_6);

    if (FUNC_2(VAR_7 - VAR_5->f_fovx) >= 0.001f)
    {

        VAR_5->f_fovx = VAR_7;
        FUNC_0(VAR_5);
        FUNC_1(VAR_5);
    }
    FUNC_3(VAR_5, VAR_5->fmt.projection_mode, VAR_5->prgm);

    return VAR_4;
}
