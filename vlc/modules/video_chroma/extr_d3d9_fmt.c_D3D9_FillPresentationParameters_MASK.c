
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int obj; } ;
typedef TYPE_1__ d3d9_handle_t ;
struct TYPE_11__ {int adapterId; } ;
typedef TYPE_2__ d3d9_device_t ;
struct TYPE_13__ {int Format; } ;
struct TYPE_12__ {int BackBufferCount; void* BackBufferHeight; void* BackBufferWidth; int BackBufferFormat; int SwapEffect; int * hDeviceWindow; int EnableAutoDepthStencil; int PresentationInterval; int MultiSampleType; int Windowed; int Flags; } ;
typedef int HRESULT ;
typedef TYPE_3__ D3DPRESENT_PARAMETERS ;
typedef TYPE_4__ D3DDISPLAYMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_3__*,int) ;

int FUNC_4(d3d9_handle_t *VAR_10,
                                    const d3d9_device_t *VAR_11,
                                    D3DPRESENT_PARAMETERS *VAR_12)
{




    D3DDISPLAYMODE VAR_13;
    HRESULT VAR_14 = FUNC_2(VAR_10->obj, VAR_11->adapterId, &VAR_13);
    if (FUNC_0(VAR_14))
        return VAR_8;


    FUNC_3(VAR_12, sizeof(D3DPRESENT_PARAMETERS));
    VAR_12->Flags = VAR_1;
    VAR_12->Windowed = VAR_7;
    VAR_12->MultiSampleType = VAR_0;
    VAR_12->PresentationInterval = VAR_2;
    VAR_12->EnableAutoDepthStencil = VAR_4;
    VAR_12->hDeviceWindow = ((void*)0);
    VAR_12->SwapEffect = VAR_3;
    VAR_12->BackBufferFormat = VAR_13.Format;
    VAR_12->BackBufferCount = 1;
    VAR_12->BackBufferWidth = FUNC_1(VAR_5);
    VAR_12->BackBufferHeight = FUNC_1(VAR_6);

    return VAR_9;
}
