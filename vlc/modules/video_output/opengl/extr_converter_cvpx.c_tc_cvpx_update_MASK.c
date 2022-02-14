
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct priv {int * last_pic; int gl_ctx; } ;
typedef int picture_t ;
struct TYPE_7__ {unsigned int tex_count; int gl; TYPE_2__* texs; int tex_target; TYPE_1__* vt; struct priv* priv; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_6__ {int type; int format; int internal; } ;
struct TYPE_5__ {int (* BindTexture ) (int ,int ) ;int (* ActiveTexture ) (scalar_t__) ;} ;
typedef int IOSurfaceRef ;
typedef int GLuint ;
typedef int GLsizei ;
typedef int CVPixelBufferRef ;
typedef scalar_t__ CGLError ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int const,int const,int ,int ,int ,unsigned int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,char*,unsigned int,int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(const opengl_tex_converter_t *VAR_4, GLuint *VAR_5,
               const GLsizei *VAR_6, const GLsizei *VAR_7,
               picture_t *VAR_8, const size_t *VAR_9)
{
    (void) VAR_9;
    struct priv *VAR_10 = VAR_4->priv;

    CVPixelBufferRef VAR_11 = FUNC_3(VAR_8);

    IOSurfaceRef VAR_12 = FUNC_2(VAR_11);

    for (unsigned VAR_13 = 0; VAR_13 < VAR_4->tex_count; ++VAR_13)
    {
        VAR_4->vt->ActiveTexture(VAR_0 + VAR_13);
        VAR_4->vt->BindTexture(VAR_4->tex_target, VAR_5[VAR_13]);

        CGLError VAR_14 =
            FUNC_1(VAR_10->gl_ctx, VAR_4->tex_target,
                                   VAR_4->texs[VAR_13].internal,
                                   VAR_6[VAR_13], VAR_7[VAR_13],
                                   VAR_4->texs[VAR_13].format,
                                   VAR_4->texs[VAR_13].type,
                                   VAR_12, VAR_13);
        if (VAR_14 != VAR_3)
        {
            FUNC_4(VAR_4->gl, "CGLTexImageIOSurface2D error: %u: %s", VAR_13,
                    FUNC_0(VAR_14));
            return VAR_1;
        }
    }

    if (VAR_10->last_pic != VAR_8)
    {
        if (VAR_10->last_pic != ((void*)0))
            FUNC_6(VAR_10->last_pic);
        VAR_10->last_pic = FUNC_5(VAR_8);
    }

    return VAR_2;
}
