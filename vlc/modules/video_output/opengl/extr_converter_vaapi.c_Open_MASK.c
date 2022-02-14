
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_16__ {scalar_t__ type; int * opaque; } ;
typedef TYPE_3__ vlc_decoder_device ;
struct priv {int * vadpy; int * glEGLImageTargetTexture2DOES; scalar_t__ fourcc; } ;
struct TYPE_15__ {int i_chroma; int space; } ;
struct TYPE_17__ {char const* glexts; scalar_t__ fshader; int pf_get_pool; int pf_update; TYPE_2__ fmt; TYPE_6__* gl; struct priv* priv; int * vctx; } ;
typedef TYPE_4__ opengl_tex_converter_t ;
struct TYPE_14__ {char* (* queryString ) (TYPE_6__*,int ) ;int * destroyImageKHR; int * createImageKHR; } ;
struct TYPE_18__ {scalar_t__ ext; TYPE_1__ egl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 struct priv* FUNC_1 (int,int) ;
 int FUNC_2 (struct priv*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int,int ) ;
 char* FUNC_4 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_4__*,struct priv*,int) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_3__*) ;
 int * FUNC_11 (TYPE_6__*,char*) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (int) ;
 TYPE_3__* FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(vlc_object_t *VAR_12)
{
    opengl_tex_converter_t *VAR_13 = (void *) VAR_12;

    if (VAR_13->vctx == ((void*)0))
        return VAR_7;
    vlc_decoder_device *VAR_14 = FUNC_14(VAR_13->vctx);
    if (VAR_14->type != VAR_6
     || !FUNC_13(VAR_13->fmt.i_chroma)
     || VAR_13->gl->ext != VAR_8
     || VAR_13->gl->egl.createImageKHR == ((void*)0)
     || VAR_13->gl->egl.destroyImageKHR == ((void*)0))
    {
        FUNC_10(VAR_14);
        return VAR_7;
    }

    if (!FUNC_12(VAR_13->glexts, "GL_OES_EGL_image"))
    {
        FUNC_10(VAR_14);
        return VAR_7;
    }

    const char *VAR_15 = VAR_13->gl->egl.queryString(VAR_13->gl, VAR_0);
    if (VAR_15 == ((void*)0) || !FUNC_12(VAR_15, "EGL_EXT_image_dma_buf_import"))
    {
        FUNC_10(VAR_14);
        return VAR_7;
    }

    struct priv *VAR_16 = VAR_13->priv = FUNC_1(1, sizeof(struct priv));
    if (FUNC_7(VAR_13->priv == ((void*)0)))
        goto error;
    VAR_16->fourcc = 0;

    int VAR_17;
    int VAR_18;
    switch (VAR_13->fmt.i_chroma)
    {
        case 129:
            VAR_17 = VAR_2;
            VAR_18 = VAR_4;
            break;
        case 128:
            VAR_17 = VAR_3;
            VAR_18 = VAR_5;
            break;
        default:
            FUNC_9();
    }

    if (FUNC_8(VAR_13, VAR_16, VAR_17))
        goto error;

    VAR_16->glEGLImageTargetTexture2DOES =
        FUNC_11(VAR_13->gl, "glEGLImageTargetTexture2DOES");
    if (VAR_16->glEGLImageTargetTexture2DOES == ((void*)0))
        goto error;

    VAR_16->vadpy = VAR_14->opaque;
    FUNC_0(VAR_16->vadpy != ((void*)0));

    if (FUNC_6(VAR_13, VAR_16->vadpy))
        goto error;

    if (FUNC_5(VAR_13, VAR_14))
        goto error;

    VAR_13->fshader = FUNC_3(VAR_13, VAR_1, VAR_18,
                                              VAR_13->fmt.space);
    if (VAR_13->fshader == 0)
        goto error;

    VAR_13->pf_update = VAR_11;
    VAR_13->pf_get_pool = VAR_10;

    FUNC_10(VAR_14);

    return VAR_9;
error:
    FUNC_10(VAR_14);
    FUNC_2(VAR_16);
    return VAR_7;
}
