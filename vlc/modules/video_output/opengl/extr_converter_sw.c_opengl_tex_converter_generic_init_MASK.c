
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
typedef int video_color_space_t ;
struct priv {int has_unpack_subimage; } ;
struct TYPE_9__ {scalar_t__ i_chroma; int i_rmask; int i_gmask; int i_bmask; int space; } ;
struct TYPE_8__ {scalar_t__ fshader; int gl; int pf_update; TYPE_1__* vt; int glexts; int is_gles; int pf_allocate_textures; struct priv* priv; TYPE_3__ fmt; } ;
typedef TYPE_2__ opengl_tex_converter_t ;
struct TYPE_7__ {unsigned char* (* GetString ) (int ) ;scalar_t__ BufferSubData; scalar_t__ BufferData; int (* DeleteShader ) (scalar_t__) ;int (* GetIntegerv ) (int ,int*) ;} ;
typedef scalar_t__ GLuint ;
typedef int GLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct priv* FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,scalar_t__ const,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (scalar_t__) ;
 unsigned char* FUNC_7 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__* FUNC_10 (scalar_t__) ;
 scalar_t__* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int ,char*) ;

int
FUNC_14(opengl_tex_converter_t *VAR_11, bool VAR_12)
{
    GLuint VAR_13 = 0;
    video_color_space_t VAR_14;
    const vlc_fourcc_t *VAR_15;

    if (FUNC_12(VAR_11->fmt.i_chroma))
    {
        GLint VAR_16 = 0;
        VAR_11->vt->GetIntegerv(VAR_1, &VAR_16);
        if (VAR_16 < 3)
            return VAR_5;

        VAR_15 = FUNC_11(VAR_11->fmt.i_chroma);
        VAR_14 = VAR_11->fmt.space;
    }
    else if (VAR_11->fmt.i_chroma == 128)
    {
        static const vlc_fourcc_t VAR_17[] = { 128, 0 };
        VAR_15 = VAR_17;
        VAR_14 = VAR_0;
    }
    else
    {
        VAR_15 = FUNC_10(VAR_11->fmt.i_chroma);
        VAR_14 = VAR_0;
    }

    while (*VAR_15)
    {
        VAR_13 =
            FUNC_2(VAR_11, VAR_2, *VAR_15, VAR_14);
        if (VAR_13 != 0)
        {
            VAR_11->fmt.i_chroma = *VAR_15;

            if (VAR_11->fmt.i_chroma == VAR_4)
            {





                VAR_11->fmt.i_rmask = 0x000000ff;
                VAR_11->fmt.i_gmask = 0x0000ff00;
                VAR_11->fmt.i_bmask = 0x00ff0000;

                FUNC_9(&VAR_11->fmt);
            }
            break;
        }
        VAR_15++;
    }
    if (VAR_13 == 0)
        return VAR_5;

    struct priv *VAR_18 = VAR_11->priv = FUNC_0(1, sizeof(struct priv));
    if (FUNC_8(VAR_18 == ((void*)0)))
    {
        VAR_11->vt->DeleteShader(VAR_13);
        return VAR_6;
    }

    VAR_11->pf_update = VAR_9;
    VAR_11->pf_allocate_textures = VAR_8;


    VAR_18->has_unpack_subimage =
        !VAR_11->is_gles || FUNC_13(VAR_11->glexts, "GL_EXT_unpack_subimage");

    if (VAR_12 && VAR_18->has_unpack_subimage)
    {

        const unsigned char *VAR_19 = VAR_11->vt->GetString(VAR_3);
        const bool VAR_20 = FUNC_4((const char *)VAR_19, "3.0") >= 0;

        const bool VAR_21 = VAR_20 &&
            (FUNC_13(VAR_11->glexts, "GL_ARB_pixel_buffer_object") ||
             FUNC_13(VAR_11->glexts, "GL_EXT_pixel_buffer_object"));

        const bool VAR_22 = VAR_21 && VAR_11->vt->BufferData
            && VAR_11->vt->BufferSubData;
        if (VAR_22 && FUNC_3(VAR_11) == VAR_7)
        {
            VAR_11->pf_update = VAR_10;
            FUNC_1(VAR_11->gl, "PBO support enabled");
        }
    }

    VAR_11->fshader = VAR_13;

    return VAR_7;
}
