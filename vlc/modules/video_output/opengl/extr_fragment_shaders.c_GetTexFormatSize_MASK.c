
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* vt; } ;
typedef TYPE_2__ opengl_tex_converter_t ;
struct TYPE_4__ {int (* DeleteTextures ) (int,int *) ;int (* GetTexLevelParameteriv ) (int,int ,int,int*) ;int (* TexImage2D ) (int,int ,int,int,int,int ,int,int,int *) ;int (* BindTexture ) (int,int ) ;int (* GenTextures ) (int,int *) ;} ;
typedef int GLuint ;
typedef int GLint ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int,int,int,int ,int,int,int *) ;
 int FUNC_3 (int,int ,int,int*) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5(opengl_tex_converter_t *VAR_2, int VAR_3,
                            int VAR_4, int VAR_5, int VAR_6)
{
    if (!VAR_2->vt->GetTexLevelParameteriv)
        return -1;

    GLint VAR_7;
    int VAR_8 = 1;
    switch (VAR_4)
    {
        case 131:
            VAR_8 = 4;

        case 129:
        case 128:
            VAR_7 = VAR_1;
            break;
        case 130:
            VAR_7 = VAR_0;
            break;
        default:
            return -1;
    }
    GLuint VAR_9;

    VAR_2->vt->GenTextures(1, &VAR_9);
    VAR_2->vt->BindTexture(VAR_3, VAR_9);
    VAR_2->vt->TexImage2D(VAR_3, 0, VAR_5, 64, 64, 0, VAR_4, VAR_6, ((void*)0));
    GLint VAR_10 = 0;
    VAR_2->vt->GetTexLevelParameteriv(VAR_3, 0, VAR_7, &VAR_10);

    VAR_2->vt->DeleteTextures(1, &VAR_9);
    return VAR_10 > 0 ? VAR_10 * VAR_8 : VAR_10;
}
