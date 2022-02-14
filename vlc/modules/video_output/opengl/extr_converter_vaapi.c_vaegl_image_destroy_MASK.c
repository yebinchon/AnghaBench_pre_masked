
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* gl; } ;
typedef TYPE_2__ opengl_tex_converter_t ;
struct TYPE_5__ {int (* destroyImageKHR ) (TYPE_4__*,int ) ;} ;
struct TYPE_7__ {TYPE_1__ egl; } ;
typedef int EGLImageKHR ;


 int FUNC_0 (TYPE_4__*,int ) ;

__attribute__((used)) static void
FUNC_1(const opengl_tex_converter_t *VAR_0, EGLImageKHR VAR_1)
{
    VAR_0->gl->egl.destroyImageKHR(VAR_0->gl, VAR_1);
}
