
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f_fovx; int f_fovy; float f_z; } ;
typedef TYPE_1__ vout_display_opengl_t ;


 float const VAR_0 ;
 float const VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (int ) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (float) ;
 float FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(vout_display_opengl_t *VAR_3)
{



    float VAR_4 = FUNC_3(VAR_3->f_fovx / 2);
    float VAR_5 = FUNC_3(VAR_3->f_fovy / 2);
    float VAR_6 = - VAR_2 / FUNC_1(FUNC_0(FUNC_2(
                    VAR_4 * VAR_4 + VAR_5 * VAR_5)));


    const float VAR_7 = 90.f;

    if (VAR_3->f_fovx <= VAR_7 * VAR_1 / 180)
        VAR_3->f_z = 0;
    else
    {
        float VAR_8 = VAR_6 / ((VAR_0 - VAR_7) * VAR_1 / 180);
        VAR_3->f_z = VAR_8 * VAR_3->f_fovx - VAR_8 * VAR_7 * VAR_1 / 180;
        if (VAR_3->f_z < VAR_6)
            VAR_3->f_z = VAR_6;
    }
}
