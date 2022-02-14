
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* prgm; } ;
typedef TYPE_2__ vout_display_opengl_t ;
struct TYPE_7__ {int * pf_get_pool; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_5__ {TYPE_3__* tc; } ;



bool FUNC_0(const vout_display_opengl_t *VAR_0)
{
    opengl_tex_converter_t *VAR_1 = VAR_0->prgm->tc;
    return VAR_1->pf_get_pool != ((void*)0);
}
