
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int video_projection_mode_t ;
struct TYPE_10__ {int projection; int pVertexShaderConstants; int * pPixelShaderConstants; } ;
typedef TYPE_1__ d3d_quad_t ;
struct TYPE_11__ {int d3ddevice; } ;
typedef TYPE_2__ d3d11_device_t ;
typedef int VS_PROJECTION_CONST ;
struct TYPE_12__ {int ByteWidth; int CPUAccessFlags; int BindFlags; int Usage; } ;
typedef int PS_CONSTANT_BUFFER ;
typedef int PS_COLOR_TRANSFORM ;
typedef int HRESULT ;
typedef TYPE_3__ D3D11_BUFFER_DESC ;


 int FUNC_0 (int *,TYPE_2__*,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int,char*) ;

int FUNC_6(vlc_object_t *VAR_9, d3d11_device_t *VAR_10,
                       video_projection_mode_t VAR_11, d3d_quad_t *VAR_12)
{
    HRESULT VAR_13;
    FUNC_5((sizeof(PS_CONSTANT_BUFFER)%16)==0,"Constant buffers require 16-byte alignment");
    D3D11_BUFFER_DESC VAR_14 = {
        .Usage = VAR_2,
        .ByteWidth = sizeof(PS_CONSTANT_BUFFER),
        .BindFlags = VAR_0,
        .CPUAccessFlags = VAR_1,
    };
    VAR_13 = FUNC_3(VAR_10->d3ddevice, &VAR_14, ((void*)0), &VAR_12->pPixelShaderConstants[VAR_6]);
    if(FUNC_2(VAR_13)) {
        FUNC_4(VAR_9, "Could not create the pixel shader constant buffer. (hr=0x%lX)", VAR_13);
        goto error;
    }

    FUNC_5((sizeof(PS_COLOR_TRANSFORM)%16)==0,"Constant buffers require 16-byte alignment");
    VAR_14.ByteWidth = sizeof(PS_COLOR_TRANSFORM);
    VAR_13 = FUNC_3(VAR_10->d3ddevice, &VAR_14, ((void*)0), &VAR_12->pPixelShaderConstants[VAR_5]);
    if(FUNC_2(VAR_13)) {
        FUNC_4(VAR_9, "Could not create the pixel shader colorspace buffer. (hr=0x%lX)", VAR_13);
        goto error;
    }

    if (VAR_11 == VAR_4 || VAR_11 == VAR_3)
    {
        FUNC_5((sizeof(VS_PROJECTION_CONST)%16)==0,"Constant buffers require 16-byte alignment");
        VAR_14.ByteWidth = sizeof(VS_PROJECTION_CONST);
        VAR_13 = FUNC_3(VAR_10->d3ddevice, &VAR_14, ((void*)0), &VAR_12->pVertexShaderConstants);
        if(FUNC_2(VAR_13)) {
            FUNC_4(VAR_9, "Could not create the vertex shader constant buffer. (hr=0x%lX)", VAR_13);
            goto error;
        }
    }

    if (!FUNC_0(VAR_9, VAR_10, VAR_12, VAR_11))
        goto error;
    VAR_12->projection = VAR_11;

    return VAR_8;

error:
    FUNC_1(VAR_12);
    return VAR_7;
}
