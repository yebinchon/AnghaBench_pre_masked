
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* name; } ;
struct pl_shader_var {TYPE_3__ var; } ;
struct pl_shader_res {int num_variables; struct pl_shader_var* variables; } ;
struct TYPE_6__ {int Coefficients; int* Texture; int* TexSize; int FillColor; int* pl_vars; } ;
struct TYPE_9__ {unsigned int tex_count; scalar_t__ tex_target; TYPE_2__* vt; TYPE_1__ uloc; struct pl_shader_res* pl_sh_res; scalar_t__ yuv_color; } ;
typedef TYPE_4__ opengl_tex_converter_t ;
typedef int name ;
struct TYPE_7__ {int (* GetUniformLocation ) (int ,char*) ;} ;
typedef int GLuint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(opengl_tex_converter_t *VAR_3, GLuint VAR_4)
{
    if (VAR_3->yuv_color)
    {
        VAR_3->uloc.Coefficients = VAR_3->vt->GetUniformLocation(VAR_4,
                                                            "Coefficients");
        if (VAR_3->uloc.Coefficients == -1)
            return VAR_1;
    }

    for (unsigned int VAR_5 = 0; VAR_5 < VAR_3->tex_count; ++VAR_5)
    {
        char VAR_6[sizeof("TextureX")];
        FUNC_0(VAR_6, sizeof(VAR_6), "Texture%1u", VAR_5);
        VAR_3->uloc.Texture[VAR_5] = VAR_3->vt->GetUniformLocation(VAR_4, VAR_6);
        if (VAR_3->uloc.Texture[VAR_5] == -1)
            return VAR_1;
        if (VAR_3->tex_target == VAR_0)
        {
            FUNC_0(VAR_6, sizeof(VAR_6), "TexSize%1u", VAR_5);
            VAR_3->uloc.TexSize[VAR_5] = VAR_3->vt->GetUniformLocation(VAR_4, VAR_6);
            if (VAR_3->uloc.TexSize[VAR_5] == -1)
                return VAR_1;
        }
    }

    VAR_3->uloc.FillColor = VAR_3->vt->GetUniformLocation(VAR_4, "FillColor");
    if (VAR_3->uloc.FillColor == -1)
        return VAR_1;
    return VAR_2;
}
