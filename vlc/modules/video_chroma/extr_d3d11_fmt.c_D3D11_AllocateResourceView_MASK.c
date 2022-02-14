
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_11__ {scalar_t__* resourceFormat; } ;
typedef TYPE_3__ d3d_format_t ;
typedef int UINT ;
struct TYPE_10__ {int MipLevels; int ArraySize; int FirstArraySlice; } ;
struct TYPE_9__ {int MipLevels; } ;
struct TYPE_13__ {scalar_t__ Format; TYPE_2__ Texture2DArray; int ViewDimension; TYPE_1__ Texture2D; int member_0; } ;
struct TYPE_12__ {int BindFlags; int ArraySize; } ;
typedef int ID3D11Texture2D ;
typedef int ID3D11ShaderResourceView ;
typedef int ID3D11Resource ;
typedef int ID3D11Device ;
typedef int HRESULT ;
typedef TYPE_4__ D3D11_TEXTURE2D_DESC ;
typedef TYPE_5__ D3D11_SHADER_RESOURCE_VIEW_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,TYPE_5__*,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int,int,int ) ;

int FUNC_6(vlc_object_t *VAR_7, ID3D11Device *VAR_8,
                              const d3d_format_t *VAR_9,
                              ID3D11Texture2D *VAR_10[VAR_1], UINT VAR_11,
                              ID3D11ShaderResourceView *VAR_12[VAR_1])
{
    HRESULT VAR_13;
    int VAR_14;
    D3D11_SHADER_RESOURCE_VIEW_DESC VAR_15 = { 0 };
    D3D11_TEXTURE2D_DESC VAR_16;
    FUNC_3(VAR_10[0], &VAR_16);
    FUNC_4(VAR_16.BindFlags & VAR_0);

    if (VAR_16.ArraySize == 1)
    {
        VAR_15.ViewDimension = VAR_2;
        VAR_15.Texture2D.MipLevels = 1;
    }
    else
    {
        VAR_15.ViewDimension = VAR_3;
        VAR_15.Texture2DArray.MipLevels = -1;
        VAR_15.Texture2DArray.ArraySize = 1;
        VAR_15.Texture2DArray.FirstArraySlice = VAR_11;
        FUNC_4(VAR_11 < VAR_16.ArraySize);
    }
    for (VAR_14=0; VAR_14<VAR_1; VAR_14++)
    {
        VAR_15.Format = VAR_9->resourceFormat[VAR_14];
        if (VAR_15.Format == VAR_4)
            VAR_12[VAR_14] = ((void*)0);
        else
        {
            VAR_13 = FUNC_1(VAR_8, (ID3D11Resource*)VAR_10[VAR_14], &VAR_15, &VAR_12[VAR_14]);
            if (FUNC_0(VAR_13)) {
                FUNC_5(VAR_7, "Could not Create the Texture ResourceView %d slice %d. (hr=0x%lX)", VAR_14, VAR_11, VAR_13);
                break;
            }
        }
    }

    if (VAR_14 != VAR_1)
    {
        while (--VAR_14 >= 0)
        {
            FUNC_2(VAR_12[VAR_14]);
            VAR_12[VAR_14] = ((void*)0);
        }
        return VAR_5;
    }

    return VAR_6;
}
