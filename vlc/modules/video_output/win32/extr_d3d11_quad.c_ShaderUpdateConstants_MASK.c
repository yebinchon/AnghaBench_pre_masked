
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {scalar_t__* pPixelShaderConstants; } ;
typedef TYPE_1__ d3d_quad_t ;
struct TYPE_8__ {int d3dcontext; } ;
typedef TYPE_2__ d3d11_device_t ;
struct TYPE_9__ {int pData; } ;
typedef int PS_CONSTANT_BUFFER ;
typedef int PS_COLOR_TRANSFORM ;
typedef int ID3D11Resource ;
typedef int HRESULT ;
typedef TYPE_3__ D3D11_MAPPED_SUBRESOURCE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ,int *,int ) ;
 size_t VAR_1 ;
 int FUNC_3 (int ,void*,int) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static bool FUNC_5(vlc_object_t *VAR_2, d3d11_device_t *VAR_3, d3d_quad_t *VAR_4, size_t VAR_5, void *VAR_6)
{
    D3D11_MAPPED_SUBRESOURCE VAR_7;
    HRESULT VAR_8 = FUNC_1(VAR_3->d3dcontext, (ID3D11Resource *)VAR_4->pPixelShaderConstants[VAR_5], 0, VAR_0, 0, &VAR_7);
    if (FUNC_0(VAR_8))
    {
        FUNC_4(VAR_2, "Failed to lock the picture shader constants (hr=0x%lX)", VAR_8);
        return 0;
    }

    if (VAR_5 == VAR_1)
        FUNC_3(VAR_7.pData, VAR_6,sizeof(PS_CONSTANT_BUFFER));
    else
        FUNC_3(VAR_7.pData, VAR_6,sizeof(PS_COLOR_TRANSFORM));
    FUNC_2(VAR_3->d3dcontext, (ID3D11Resource *)VAR_4->pPixelShaderConstants[VAR_5], 0);
    return 1;
}
