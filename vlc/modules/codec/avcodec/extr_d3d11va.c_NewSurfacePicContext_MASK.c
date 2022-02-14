
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* sys; } ;
typedef TYPE_4__ vlc_va_t ;
struct TYPE_9__ {int d3dcontext; } ;
struct TYPE_13__ {TYPE_1__ d3d_dev; int ** renderSrc; int ** hw_surface; } ;
typedef TYPE_5__ vlc_va_sys_t ;
typedef int vlc_va_surface_t ;
struct TYPE_11__ {int s; } ;
struct d3d11va_pic_context {TYPE_3__ ctx; int * va_surface; } ;
typedef int picture_context_t ;
struct TYPE_10__ {int ArraySlice; } ;
struct TYPE_14__ {TYPE_2__ Texture2D; } ;
typedef int ID3D11VideoDecoderOutputView ;
typedef int ID3D11ShaderResourceView ;
typedef int ID3D11Resource ;
typedef TYPE_6__ D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC ;


 struct d3d11va_pic_context* FUNC_0 (int *,int ,int,int **) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (int ) ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static picture_context_t* FUNC_6(vlc_va_t *VAR_1, vlc_va_surface_t *VAR_2)
{
    vlc_va_sys_t *VAR_3 = VAR_1->sys;
    ID3D11VideoDecoderOutputView *VAR_4 = VAR_3->hw_surface[FUNC_5(VAR_2)];
    ID3D11ShaderResourceView *VAR_5[VAR_0];
    ID3D11Resource *VAR_6;
    FUNC_3(VAR_4, &VAR_6);

    D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC VAR_7;
    FUNC_2(VAR_4, &VAR_7);

    for (int VAR_8=0; VAR_8<VAR_0; VAR_8++)
        VAR_5[VAR_8] = VAR_3->renderSrc[VAR_7.Texture2D.ArraySlice*VAR_0 + VAR_8];

    struct d3d11va_pic_context *VAR_9 = FUNC_0(
                                                  VAR_6,
                                                  VAR_3->d3d_dev.d3dcontext,
                                                  VAR_7.Texture2D.ArraySlice,
                                                  VAR_5);
    FUNC_1(VAR_6);
    if (FUNC_4(VAR_9==((void*)0)))
        return ((void*)0);
    VAR_9->va_surface = VAR_2;
    return &VAR_9->ctx.s;
}
