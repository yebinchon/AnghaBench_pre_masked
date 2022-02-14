
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {size_t display_idx; TYPE_5__** display_pics; } ;
struct priv {TYPE_1__ pbo; } ;
struct TYPE_14__ {int i_planes; TYPE_2__* p; TYPE_6__* p_sys; } ;
typedef TYPE_5__ picture_t ;
struct TYPE_15__ {int * buffers; } ;
typedef TYPE_6__ picture_sys_t ;
struct TYPE_16__ {TYPE_4__* vt; TYPE_3__* texs; int tex_target; struct priv* priv; } ;
typedef TYPE_7__ opengl_tex_converter_t ;
struct TYPE_13__ {int (* BindBuffer ) (int ,int ) ;int (* TexSubImage2D ) (int ,int ,int ,int ,int const,int const,int ,int ,int *) ;int (* PixelStorei ) (int ,int const) ;int (* BindTexture ) (int ,int ) ;int (* ActiveTexture ) (scalar_t__) ;int (* BufferSubData ) (int ,int ,int,int const*) ;} ;
struct TYPE_12__ {int type; int format; } ;
struct TYPE_11__ {int i_lines; int i_pitch; int i_visible_pitch; int * p_pixels; } ;
typedef int GLvoid ;
typedef int GLuint ;
typedef int GLsizeiptr ;
typedef int GLsizei ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int const*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int const) ;
 int FUNC_6 (int ,int ,int ,int ,int const,int const,int ,int ,int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8(const opengl_tex_converter_t *VAR_5, GLuint *VAR_6,
              const GLsizei *VAR_7, const GLsizei *VAR_8,
              picture_t *VAR_9, const size_t *VAR_10)
{
    (void) VAR_10; FUNC_0(VAR_10 == ((void*)0));
    struct priv *VAR_11 = VAR_5->priv;

    picture_t *VAR_12 = VAR_11->pbo.display_pics[VAR_11->pbo.display_idx];
    picture_sys_t *VAR_13 = VAR_12->p_sys;
    VAR_11->pbo.display_idx = (VAR_11->pbo.display_idx + 1) % VAR_3;

    for (int VAR_14 = 0; VAR_14 < VAR_9->i_planes; VAR_14++)
    {
        GLsizeiptr VAR_15 = VAR_9->p[VAR_14].i_lines * VAR_9->p[VAR_14].i_pitch;
        const GLvoid *VAR_16 = VAR_9->p[VAR_14].p_pixels;
        VAR_5->vt->BindBuffer(VAR_0,
                           VAR_13->buffers[VAR_14]);
        VAR_5->vt->BufferSubData(VAR_0, 0, VAR_15, VAR_16);

        VAR_5->vt->ActiveTexture(VAR_1 + VAR_14);
        VAR_5->vt->BindTexture(VAR_5->tex_target, VAR_6[VAR_14]);

        VAR_5->vt->PixelStorei(VAR_2, VAR_9->p[VAR_14].i_pitch
            * VAR_7[VAR_14] / (VAR_9->p[VAR_14].i_visible_pitch ? VAR_9->p[VAR_14].i_visible_pitch : 1));

        VAR_5->vt->TexSubImage2D(VAR_5->tex_target, 0, 0, 0, VAR_7[VAR_14], VAR_8[VAR_14],
                              VAR_5->texs[VAR_14].format, VAR_5->texs[VAR_14].type, ((void*)0));
    }


    VAR_5->vt->BindBuffer(VAR_0, 0);

    return VAR_4;
}
