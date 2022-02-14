
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned int tex_count; int (* pf_allocate_textures ) (TYPE_2__ const*,int *,int const*,int const*) ;TYPE_1__* vt; int tex_target; } ;
typedef TYPE_2__ opengl_tex_converter_t ;
struct TYPE_5__ {int (* DeleteTextures ) (unsigned int,int *) ;int (* TexParameteri ) (int ,int ,int ) ;int (* TexEnvf ) (int ,int ,int ) ;int (* TexParameterf ) (int ,int ,double) ;int (* BindTexture ) (int ,int ) ;int (* GenTextures ) (unsigned int,int *) ;} ;
typedef int GLuint ;
typedef int GLsizei ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (unsigned int,int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,double) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_2__ const*,int *,int const*,int const*) ;

__attribute__((used)) static int
FUNC_11(const opengl_tex_converter_t *VAR_11,
            const GLsizei *VAR_12, const GLsizei *VAR_13,
            GLuint *VAR_14)
{
    VAR_11->vt->GenTextures(VAR_11->tex_count, VAR_14);

    for (unsigned VAR_15 = 0; VAR_15 < VAR_11->tex_count; VAR_15++)
    {
        VAR_11->vt->BindTexture(VAR_11->tex_target, VAR_14[VAR_15]);



        VAR_11->vt->TexParameterf(VAR_11->tex_target, VAR_7, 1.0);
        VAR_11->vt->TexEnvf(VAR_3, VAR_4, VAR_2);


        VAR_11->vt->TexParameteri(VAR_11->tex_target, VAR_5, VAR_1);
        VAR_11->vt->TexParameteri(VAR_11->tex_target, VAR_6, VAR_1);
        VAR_11->vt->TexParameteri(VAR_11->tex_target, VAR_8, VAR_0);
        VAR_11->vt->TexParameteri(VAR_11->tex_target, VAR_9, VAR_0);
    }

    if (VAR_11->pf_allocate_textures != ((void*)0))
    {
        int VAR_16 = VAR_11->pf_allocate_textures(VAR_11, VAR_14, VAR_12, VAR_13);
        if (VAR_16 != VAR_10)
        {
            VAR_11->vt->DeleteTextures(VAR_11->tex_count, VAR_14);
            FUNC_0(VAR_14, 0, VAR_11->tex_count * sizeof(GLuint));
            return VAR_16;
        }
    }
    return VAR_10;
}
