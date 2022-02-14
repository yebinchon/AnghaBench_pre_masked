
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* p; } ;
typedef TYPE_3__ picture_t ;
struct TYPE_11__ {unsigned int tex_count; int tex_target; TYPE_1__* vt; } ;
typedef TYPE_4__ opengl_tex_converter_t ;
struct TYPE_9__ {int i_visible_pitch; int i_pitch; int * p_pixels; } ;
struct TYPE_8__ {int (* BindTexture ) (int ,scalar_t__) ;int (* ActiveTexture ) (scalar_t__) ;} ;
typedef scalar_t__ GLuint ;
typedef int GLsizei ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_4__ const*,unsigned int,int const,int const,int ,int ,void const*) ;

__attribute__((used)) static int
FUNC_4(const opengl_tex_converter_t *VAR_2, GLuint *VAR_3,
                 const GLsizei *VAR_4, const GLsizei *VAR_5,
                 picture_t *VAR_6, const size_t *VAR_7)
{
    int VAR_8 = VAR_1;
    for (unsigned VAR_9 = 0; VAR_9 < VAR_2->tex_count && VAR_8 == VAR_1; VAR_9++)
    {
        FUNC_0(VAR_3[VAR_9] != 0);
        VAR_2->vt->ActiveTexture(VAR_0 + VAR_9);
        VAR_2->vt->BindTexture(VAR_2->tex_target, VAR_3[VAR_9]);
        const void *VAR_10 = VAR_7 != ((void*)0) ?
                             &VAR_6->p[VAR_9].p_pixels[VAR_7[VAR_9]] :
                             VAR_6->p[VAR_9].p_pixels;

        VAR_8 = FUNC_3(VAR_2, VAR_9, VAR_4[VAR_9], VAR_5[VAR_9],
                           VAR_6->p[VAR_9].i_pitch, VAR_6->p[VAR_9].i_visible_pitch, VAR_10);
    }
    return VAR_8;
}
