
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_16__ ;
typedef struct TYPE_19__ TYPE_13__ ;


struct TYPE_22__ {TYPE_3__* sys; } ;
typedef TYPE_2__ vout_display_t ;
struct TYPE_19__ {int d3dcontext; int d3ddevice; } ;
struct TYPE_20__ {int * textureFormat; } ;
struct TYPE_23__ {int projectionVShader; TYPE_13__ d3d_dev; int hd3d; int flatVShader; int picQuad; TYPE_16__ regionQuad; int display; int legacy_shader; int prepareWait; } ;
typedef TYPE_3__ vout_display_sys_t ;
typedef int stencilDesc ;
struct TYPE_25__ {TYPE_1__* RenderTarget; int member_0; } ;
struct TYPE_24__ {int Query; int member_0; } ;
struct TYPE_21__ {int DestBlendAlpha; int SrcBlendAlpha; void* BlendOpAlpha; int DestBlend; int SrcBlend; void* BlendOp; int RenderTargetWriteMask; int BlendEnable; } ;
typedef int ID3D11DepthStencilState ;
typedef int ID3D11BlendState ;
typedef int HRESULT ;
typedef TYPE_4__ D3D11_QUERY_DESC ;
typedef int D3D11_DEPTH_STENCIL_DESC ;
typedef TYPE_5__ D3D11_BLEND_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int *,TYPE_13__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int ,TYPE_13__*,int *,int ,int ,int,TYPE_16__*) ;
 int FUNC_2 (TYPE_2__*,int *,TYPE_13__*,int *) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *,int *,int) ;
 int FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (int ,TYPE_5__*,int **) ;
 int FUNC_10 (int ,int *,int **) ;
 int FUNC_11 (int ,TYPE_4__*,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (TYPE_2__*,char*) ;
 int FUNC_16 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int FUNC_17(vout_display_t *VAR_12)
{
    vout_display_sys_t *VAR_13 = VAR_12->sys;
    HRESULT VAR_14;

    D3D11_QUERY_DESC VAR_15 = { 0 };
    VAR_15.Query = VAR_7;
    VAR_14 = FUNC_11(VAR_13->d3d_dev.d3ddevice, &VAR_15, &VAR_13->prepareWait);

    ID3D11BlendState *VAR_16;
    D3D11_BLEND_DESC VAR_17 = { 0 };
    VAR_17.RenderTarget[0].BlendEnable = VAR_9;
    VAR_17.RenderTarget[0].RenderTargetWriteMask = VAR_6;

    VAR_17.RenderTarget[0].BlendOp = VAR_3;
    VAR_17.RenderTarget[0].SrcBlend = VAR_4;
    VAR_17.RenderTarget[0].DestBlend = VAR_1;

    VAR_17.RenderTarget[0].BlendOpAlpha = VAR_3;
    VAR_17.RenderTarget[0].SrcBlendAlpha = VAR_2;
    VAR_17.RenderTarget[0].DestBlendAlpha = VAR_5;

    VAR_14 = FUNC_9(VAR_13->d3d_dev.d3ddevice, &VAR_17, &VAR_16);
    if (FUNC_4(VAR_14)) {
       FUNC_16(VAR_12, "Could not create SPU blend state. (hr=0x%lX)", VAR_14);
       return VAR_10;
    }
    FUNC_7(VAR_13->d3d_dev.d3dcontext, VAR_16, ((void*)0), 0xFFFFFFFF);
    FUNC_5(VAR_16);





    D3D11_DEPTH_STENCIL_DESC VAR_18;
    FUNC_14(&VAR_18, sizeof(VAR_18));

    ID3D11DepthStencilState *VAR_19;
    VAR_14 = FUNC_10(VAR_13->d3d_dev.d3ddevice, &VAR_18, &VAR_19 );
    if (FUNC_12(VAR_14)) {
        FUNC_8(VAR_13->d3d_dev.d3dcontext, VAR_19, 0);
        FUNC_6(VAR_19);
    }

    if (VAR_13->regionQuad.textureFormat != ((void*)0))
    {
        VAR_14 = FUNC_1(VAR_12, &VAR_13->hd3d, VAR_13->legacy_shader, &VAR_13->d3d_dev,
                                      &VAR_13->display, VAR_8, VAR_0, 1,
                                      &VAR_13->regionQuad);
        if (FUNC_4(VAR_14))
        {
            FUNC_3(&VAR_13->picQuad);
            FUNC_16(VAR_12, "Failed to create the SPU pixel shader. (hr=0x%lX)", VAR_14);
            return VAR_10;
        }
    }

    VAR_14 = FUNC_0(VAR_12, &VAR_13->hd3d, &VAR_13->d3d_dev, &VAR_13->flatVShader);
    if(FUNC_4(VAR_14)) {
      FUNC_16(VAR_12, "Failed to create the vertex input layout. (hr=0x%lX)", VAR_14);
      return VAR_10;
    }

    VAR_14 = FUNC_2(VAR_12, &VAR_13->hd3d, &VAR_13->d3d_dev, &VAR_13->projectionVShader);
    if(FUNC_4(VAR_14)) {
      FUNC_16(VAR_12, "Failed to create the projection vertex shader. (hr=0x%lX)", VAR_14);
      return VAR_10;
    }

    FUNC_13(VAR_12);

    FUNC_15(VAR_12, "Direct3D11 resources created");
    return VAR_11;
}
