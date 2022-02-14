
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int context; int * texture; } ;
typedef TYPE_2__ picture_sys_d3d11_t ;
struct TYPE_22__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_23__ {int * staging; int * procOutTexture; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_24__ {scalar_t__ formatTexture; int name; } ;
typedef TYPE_5__ d3d_format_t ;
struct TYPE_25__ {int d3ddevice; int d3dcontext; } ;
typedef TYPE_6__ d3d11_device_t ;
typedef int UINT ;
struct TYPE_20__ {int Count; } ;
struct TYPE_26__ {int MipLevels; int ArraySize; scalar_t__ Format; int BindFlags; scalar_t__ CPUAccessFlags; int Usage; scalar_t__ MiscFlags; TYPE_1__ SampleDesc; } ;
typedef int HRESULT ;
typedef scalar_t__ DXGI_FORMAT ;
typedef TYPE_7__ D3D11_TEXTURE2D_DESC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (TYPE_3__*,TYPE_6__*,int ,int,int ,int ,int ,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,TYPE_7__*,int *,int **) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_7__*) ;
 int FUNC_7 (int *) ;
 size_t VAR_7 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_3__*,TYPE_6__*,scalar_t__,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_3__*,char*,int ) ;
 int FUNC_12 (TYPE_3__*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_13(filter_t *VAR_10, picture_sys_d3d11_t *VAR_11)
{
    filter_sys_t *VAR_12 = VAR_10->p_sys;
    HRESULT VAR_13;

    if (VAR_12->staging)
        goto ok;

    D3D11_TEXTURE2D_DESC VAR_14;
    FUNC_6( VAR_11->texture[VAR_7], &VAR_14);

    VAR_14.MipLevels = 1;
    VAR_14.SampleDesc.Count = 1;
    VAR_14.MiscFlags = 0;
    VAR_14.ArraySize = 1;
    VAR_14.Usage = VAR_5;
    VAR_14.CPUAccessFlags = VAR_1;
    VAR_14.BindFlags = 0;

    d3d11_device_t VAR_15 = { .d3dcontext = VAR_11->context };
    FUNC_3(VAR_15.d3dcontext, &VAR_15.d3ddevice);
    VAR_12->staging = ((void*)0);
    VAR_13 = FUNC_4( VAR_15.d3ddevice, &VAR_14, ((void*)0), &VAR_12->staging);

    if (FUNC_8(VAR_13) && FUNC_1(VAR_13 = FUNC_10(VAR_12, VAR_11->context)))
        FUNC_11(VAR_10, "can't map default staging texture (hr=0x%lX)", VAR_13);
    FUNC_5(VAR_15.d3ddevice);
    if (FUNC_1(VAR_13)) {
        FUNC_12(VAR_10, "Failed to create a %s staging texture to extract surface pixels (hr=0x%lX)", FUNC_0(VAR_14.Format), VAR_13 );
        return VAR_8;
    }
ok:
    return VAR_9;
}
