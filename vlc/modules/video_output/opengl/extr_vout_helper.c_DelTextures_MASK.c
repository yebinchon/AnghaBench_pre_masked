
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tex_count; TYPE_1__* vt; } ;
typedef TYPE_2__ opengl_tex_converter_t ;
struct TYPE_4__ {int (* DeleteTextures ) (int,int *) ;} ;
typedef int GLuint ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void
FUNC_2(const opengl_tex_converter_t *VAR_0, GLuint *VAR_1)
{
    VAR_0->vt->DeleteTextures(VAR_0->tex_count, VAR_1);
    FUNC_0(VAR_1, 0, VAR_0->tex_count * sizeof(GLuint));
}
