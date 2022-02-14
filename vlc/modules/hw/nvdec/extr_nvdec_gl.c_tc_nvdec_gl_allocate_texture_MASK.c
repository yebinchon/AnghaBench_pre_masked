
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_decoder_device ;
struct TYPE_10__ {unsigned int tex_count; int tex_target; TYPE_2__* vt; int gl; TYPE_1__* texs; TYPE_5__* priv; } ;
typedef TYPE_3__ opengl_tex_converter_t ;
struct TYPE_11__ {int * cuCtx; } ;
typedef TYPE_4__ decoder_device_nvdec_t ;
struct TYPE_12__ {int * cu_res; int * mappedArray; int * cuConverterCtx; int * device; } ;
typedef TYPE_5__ converter_sys_t ;
struct TYPE_9__ {scalar_t__ (* GetError ) () ;int (* BindTexture ) (int ,int ) ;int (* TexImage2D ) (int ,int ,int ,int const,int const,int ,int ,int ,int *) ;} ;
struct TYPE_8__ {int type; int format; int internal; } ;
typedef int GLuint ;
typedef int GLsizei ;


 int FUNC_0 (int ,int,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int const,int const,int ,int ,int ,int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(const opengl_tex_converter_t *VAR_10, GLuint *VAR_11,
                                const GLsizei *VAR_12, const GLsizei *VAR_13)
{
    converter_sys_t *VAR_14 = VAR_10->priv;
    vlc_decoder_device *VAR_15 = VAR_14->device;
    decoder_device_nvdec_t *VAR_16 = FUNC_1(VAR_15);

    int VAR_17;
    VAR_17 = FUNC_0(VAR_5, *(VAR_14->cuConverterCtx ? VAR_14->cuConverterCtx : VAR_16->cuCtx));
    if (VAR_17 != VAR_3)
        return VAR_17;

    for (unsigned VAR_18 = 0; VAR_18 < VAR_10->tex_count; VAR_18++)
    {
        VAR_10->vt->BindTexture(VAR_10->tex_target, VAR_11[VAR_18]);
        VAR_10->vt->TexImage2D(VAR_10->tex_target, 0, VAR_10->texs[VAR_18].internal,
                           VAR_12[VAR_18], VAR_13[VAR_18], 0, VAR_10->texs[VAR_18].format,
                           VAR_10->texs[VAR_18].type, ((void*)0));
        if (VAR_10->vt->GetError() != VAR_1)
        {
            FUNC_2(VAR_10->gl, "could not alloc PBO buffers");
            return VAR_2;
        }

        VAR_17 = FUNC_0(VAR_6, VAR_14->cu_res[VAR_18], VAR_11[VAR_18], VAR_10->tex_target, VAR_0);

        VAR_17 = FUNC_0(VAR_7, 1, &VAR_14->cu_res[VAR_18], 0);
        VAR_17 = FUNC_0(VAR_8, VAR_14->mappedArray[VAR_18], VAR_14->cu_res[VAR_18], 0, 0);
        VAR_17 = FUNC_0(VAR_9, 1, &VAR_14->cu_res[VAR_18], 0);

        VAR_10->vt->BindTexture(VAR_10->tex_target, 0);
    }

    FUNC_0(VAR_4, ((void*)0));
    return VAR_17;
}
