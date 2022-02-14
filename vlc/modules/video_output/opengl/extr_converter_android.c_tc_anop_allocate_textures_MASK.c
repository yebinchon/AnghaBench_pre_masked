
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int stex_attached; int awh; } ;
struct TYPE_3__ {int gl; struct priv* priv; } ;
typedef TYPE_1__ opengl_tex_converter_t ;
typedef int GLuint ;
typedef int GLsizei ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(const opengl_tex_converter_t *VAR_2, GLuint *VAR_3,
                          const GLsizei *VAR_4, const GLsizei *VAR_5)
{
    (void) VAR_4; (void) VAR_5;
    struct priv *VAR_6 = VAR_2->priv;
    FUNC_1(VAR_3[0] != 0);
    if (FUNC_0(VAR_6->awh, VAR_3[0]) != 0)
    {
        FUNC_2(VAR_2->gl, "SurfaceTexture_attachToGLContext failed");
        return VAR_0;
    }
    VAR_6->stex_attached = 1;
    return VAR_1;
}
