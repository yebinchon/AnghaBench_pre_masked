
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pl_var {scalar_t__ type; int dim_m; int dim_v; } ;
struct pl_shader_var {float* data; struct pl_var var; } ;
struct pl_shader_res {int num_variables; struct pl_shader_var* variables; } ;
struct TYPE_5__ {int FillColor; int* TexSize; int* pl_vars; int * Texture; int Coefficients; } ;
struct TYPE_7__ {unsigned int tex_count; scalar_t__ tex_target; TYPE_2__* vt; TYPE_1__ uloc; struct pl_shader_res* pl_sh_res; int yuv_coefficients; scalar_t__ yuv_color; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_6__ {int (* Uniform4f ) (int,float const,float const,float const,float const) ;int (* Uniform3f ) (int,float const,float const,float const) ;int (* Uniform2f ) (int,float const,float const) ;int (* Uniform1f ) (int,float const) ;int (* UniformMatrix2fv ) (int,int,int ,float const*) ;int (* UniformMatrix3fv ) (int,int,int ,float const*) ;int (* UniformMatrix4fv ) (int,int,int ,float const*) ;int (* Uniform1i ) (int ,unsigned int) ;int (* Uniform4fv ) (int ,int,int ) ;} ;
typedef float GLsizei ;
typedef int GLint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int,float const,float const,float const) ;
 int FUNC_2 (int,float const,float const,float const,float const) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int,float,float,float,float) ;
 int FUNC_5 (int,float const,float const) ;
 int FUNC_6 (int,int,int ,float const*) ;
 int FUNC_7 (int,int,int ,float const*) ;
 int FUNC_8 (int,int,int ,float const*) ;
 int FUNC_9 (int,float const) ;
 int FUNC_10 (int,float const,float const) ;

__attribute__((used)) static void
FUNC_11(const opengl_tex_converter_t *VAR_3,
                       const GLsizei *VAR_4, const GLsizei *VAR_5,
                       float VAR_6)
{
    (void) VAR_4; (void) VAR_5;

    if (VAR_3->yuv_color)
        VAR_3->vt->Uniform4fv(VAR_3->uloc.Coefficients, 4, VAR_3->yuv_coefficients);

    for (unsigned VAR_7 = 0; VAR_7 < VAR_3->tex_count; ++VAR_7)
        VAR_3->vt->Uniform1i(VAR_3->uloc.Texture[VAR_7], VAR_7);

    VAR_3->vt->Uniform4f(VAR_3->uloc.FillColor, 1.0f, 1.0f, 1.0f, VAR_6);

    if (VAR_3->tex_target == VAR_1)
    {
        for (unsigned VAR_8 = 0; VAR_8 < VAR_3->tex_count; ++VAR_8)
            VAR_3->vt->Uniform2f(VAR_3->uloc.TexSize[VAR_8], VAR_4[VAR_8],
                               VAR_5[VAR_8]);
    }
}
