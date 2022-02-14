
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int multiview_mode; } ;
struct TYPE_9__ {TYPE_3__* prgm; TYPE_1__ fmt; } ;
typedef TYPE_4__ vout_display_opengl_t ;
struct TYPE_8__ {TYPE_2__* tc; } ;
struct TYPE_7__ {int tex_count; } ;


 int FUNC_0 (int ,float*,float*,float*,float*,float*,float*) ;



__attribute__((used)) static void FUNC_1(vout_display_opengl_t *VAR_0,
                                 float *VAR_1, float *VAR_2,
                                 float *VAR_3, float *VAR_4)
{
    float VAR_5[2];
    float VAR_6[2];

    switch (VAR_0->fmt.multiview_mode)
    {
    case 128:

        VAR_5[0] = 1; VAR_5[1] = 0.5;
        VAR_6[0] = 0; VAR_6[1] = 0;
        FUNC_0(VAR_0->prgm->tc->tex_count,
                                      VAR_5, VAR_6,
                                      VAR_1, VAR_2, VAR_3, VAR_4);
        break;
    case 129:

        VAR_5[0] = 0.5; VAR_5[1] = 1;
        VAR_6[0] = 0; VAR_6[1] = 0;
        FUNC_0(VAR_0->prgm->tc->tex_count,
                                      VAR_5, VAR_6,
                                      VAR_1, VAR_2, VAR_3, VAR_4);
        break;
    default:
        break;
    }
}
