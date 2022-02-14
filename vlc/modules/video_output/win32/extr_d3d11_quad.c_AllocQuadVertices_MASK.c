
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int video_projection_mode_t ;
typedef int d3d_vertex_t ;
struct TYPE_8__ {int vertexCount; int indexCount; int vertexStride; int * pIndexBuffer; int * pVertexBuffer; } ;
typedef TYPE_1__ d3d_quad_t ;
struct TYPE_9__ {int d3ddevice; } ;
typedef TYPE_2__ d3d11_device_t ;
typedef int bd ;
typedef int WORD ;
struct TYPE_10__ {int ByteWidth; int CPUAccessFlags; int BindFlags; int Usage; } ;
typedef int HRESULT ;
typedef TYPE_3__ D3D11_BUFFER_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_3__*,int *,int **) ;



 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool FUNC_6(vlc_object_t *VAR_7, d3d11_device_t *VAR_8, d3d_quad_t *VAR_9, video_projection_mode_t VAR_10)
{
    HRESULT VAR_11;

    switch (VAR_10)
    {
    case 128:
        VAR_9->vertexCount = 4;
        VAR_9->indexCount = 2 * 3;
        break;
    case 129:
        VAR_9->vertexCount = (VAR_4 + 1) * (VAR_4 + 1);
        VAR_9->indexCount = VAR_5 * VAR_6 * 2 * 3;
        break;
    case 130:
        VAR_9->vertexCount = 4 * 6;
        VAR_9->indexCount = 6 * 2 * 3;
        break;
    default:
        FUNC_5(VAR_7, "Projection mode %d not handled", VAR_10);
        return 0;
    }

    VAR_9->vertexStride = sizeof(d3d_vertex_t);

    D3D11_BUFFER_DESC VAR_12;
    FUNC_3(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.Usage = VAR_3;
    VAR_12.ByteWidth = VAR_9->vertexStride * VAR_9->vertexCount;
    VAR_12.BindFlags = VAR_1;
    VAR_12.CPUAccessFlags = VAR_2;

    VAR_11 = FUNC_2(VAR_8->d3ddevice, &VAR_12, ((void*)0), &VAR_9->pVertexBuffer);
    if(FUNC_0(VAR_11)) {
        FUNC_4(VAR_7, "Failed to create vertex buffer. (hr=%lX)", VAR_11);
        goto fail;
    }


    D3D11_BUFFER_DESC VAR_13 = {
        .Usage = VAR_3,
        .ByteWidth = sizeof(WORD) * VAR_9->indexCount,
        .BindFlags = VAR_0,
        .CPUAccessFlags = VAR_2,
    };

    VAR_11 = FUNC_2(VAR_8->d3ddevice, &VAR_13, ((void*)0), &VAR_9->pIndexBuffer);
    if(FUNC_0(VAR_11)) {
        FUNC_4(VAR_7, "Could not create the quad indices. (hr=0x%lX)", VAR_11);
        goto fail;
    }

    return 1;
fail:
    if (VAR_9->pVertexBuffer)
    {
        FUNC_1(VAR_9->pVertexBuffer);
        VAR_9->pVertexBuffer = ((void*)0);
    }
    if (VAR_9->pVertexBuffer)
    {
        FUNC_1(VAR_9->pIndexBuffer);
        VAR_9->pIndexBuffer = ((void*)0);
    }
    return 0;
}
