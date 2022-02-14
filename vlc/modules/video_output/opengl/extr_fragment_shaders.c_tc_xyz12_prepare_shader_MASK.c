
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * Texture; } ;
struct TYPE_7__ {TYPE_2__ uloc; TYPE_1__* vt; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_5__ {int (* Uniform1i ) (int ,int ) ;} ;
typedef int GLsizei ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(const opengl_tex_converter_t *VAR_0,
                        const GLsizei *VAR_1, const GLsizei *VAR_2,
                        float VAR_3)
{
    (void) VAR_1; (void) VAR_2; (void) VAR_3;
    VAR_0->vt->Uniform1i(VAR_0->uloc.Texture[0], 0);
}
