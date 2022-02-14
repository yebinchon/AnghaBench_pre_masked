
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int video_orientation_t ;
typedef int d3d_vertex_t ;
struct TYPE_10__ {int projection; int * pVertexBuffer; scalar_t__ pIndexBuffer; } ;
typedef TYPE_1__ d3d_quad_t ;
struct TYPE_11__ {int d3dcontext; } ;
typedef TYPE_2__ d3d11_device_t ;
struct TYPE_12__ {int * pData; } ;
typedef int RECT ;
typedef int ID3D11Resource ;
typedef int HRESULT ;
typedef TYPE_3__ D3D11_MAPPED_SUBRESOURCE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ,int *,int ) ;



 int FUNC_3 (int *,int const*,TYPE_1__*,int *) ;
 int FUNC_4 (int *,int const*,TYPE_1__*,int *,int ) ;
 int FUNC_5 (int *,int const*,TYPE_1__*,int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,int) ;
 scalar_t__ FUNC_8 (int ) ;

bool FUNC_9( vlc_object_t *VAR_1, d3d11_device_t *VAR_2, d3d_quad_t *VAR_3,
                                const RECT *VAR_4, video_orientation_t VAR_5 )
{
    bool VAR_6 = 1;
    HRESULT VAR_7;
    D3D11_MAPPED_SUBRESOURCE VAR_8;
    d3d_vertex_t *VAR_9;

    if (FUNC_8(VAR_3->pVertexBuffer == ((void*)0)))
        return 0;


    VAR_7 = FUNC_1(VAR_2->d3dcontext, (ID3D11Resource *)VAR_3->pVertexBuffer, 0, VAR_0, 0, &VAR_8);
    if (FUNC_0(VAR_7)) {
        FUNC_6(VAR_1, "Failed to lock the vertex buffer (hr=0x%lX)", VAR_7);
        return 0;
    }
    VAR_9 = VAR_8.pData;


    VAR_7 = FUNC_1(VAR_2->d3dcontext, (ID3D11Resource *)VAR_3->pIndexBuffer, 0, VAR_0, 0, &VAR_8);
    if (FUNC_0(VAR_7)) {
        FUNC_6(VAR_1, "Failed to lock the index buffer (hr=0x%lX)", VAR_7);
        FUNC_2(VAR_2->d3dcontext, (ID3D11Resource *)VAR_3->pVertexBuffer, 0);
        return 0;
    }

    switch (VAR_3->projection)
    {
    case 128:
        FUNC_4(VAR_9, VAR_4, VAR_3, VAR_8.pData, VAR_5);
        break;
    case 129:
        FUNC_5(VAR_9, VAR_4, VAR_3, VAR_8.pData);
        break;
    case 130:
        FUNC_3(VAR_9, VAR_4, VAR_3, VAR_8.pData);
        break;
    default:
        FUNC_7(VAR_1, "Projection mode %d not handled", VAR_3->projection);
        VAR_6 = 0;
    }

    FUNC_2(VAR_2->d3dcontext, (ID3D11Resource *)VAR_3->pIndexBuffer, 0);
    FUNC_2(VAR_2->d3dcontext, (ID3D11Resource *)VAR_3->pVertexBuffer, 0);

    return VAR_6;
}
