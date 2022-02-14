
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int tex_count; TYPE_2__* texs; int tex_target; TYPE_1__* vt; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_6__ {int type; int format; int internal; } ;
struct TYPE_5__ {int (* TexImage2D ) (int ,int ,int ,int const,int const,int ,int ,int ,int *) ;int (* BindTexture ) (int ,int ) ;} ;
typedef int GLuint ;
typedef int GLsizei ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int const,int const,int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(const opengl_tex_converter_t *VAR_1, GLuint *VAR_2,
                            const GLsizei *VAR_3, const GLsizei *VAR_4)
{
    for (unsigned VAR_5 = 0; VAR_5 < VAR_1->tex_count; VAR_5++)
    {
        VAR_1->vt->BindTexture(VAR_1->tex_target, VAR_2[VAR_5]);
        VAR_1->vt->TexImage2D(VAR_1->tex_target, 0, VAR_1->texs[VAR_5].internal,
                           VAR_3[VAR_5], VAR_4[VAR_5], 0, VAR_1->texs[VAR_5].format,
                           VAR_1->texs[VAR_5].type, ((void*)0));
    }
    return VAR_0;
}
