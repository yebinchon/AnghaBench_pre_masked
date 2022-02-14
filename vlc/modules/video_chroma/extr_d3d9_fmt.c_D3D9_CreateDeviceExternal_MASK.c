
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int obj; } ;
typedef TYPE_1__ d3d9_handle_t ;
struct TYPE_10__ {int owner; int BufferFormat; int * dev; int adapterId; int caps; } ;
typedef TYPE_2__ d3d9_device_t ;
struct TYPE_12__ {int DeviceType; int AdapterOrdinal; } ;
struct TYPE_11__ {int Format; } ;
typedef int IDirect3DDevice9 ;
typedef int HRESULT ;
typedef TYPE_3__ D3DDISPLAYMODE ;
typedef TYPE_4__ D3DDEVICE_CREATION_PARAMETERS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int VAR_0 ;
 int FUNC_5 (int *,int) ;

HRESULT FUNC_6(IDirect3DDevice9 *VAR_1, d3d9_handle_t *VAR_2,
                                  d3d9_device_t *VAR_3)
{
    D3DDEVICE_CREATION_PARAMETERS VAR_4;
    HRESULT VAR_5 = FUNC_4(VAR_1, &VAR_4);
    if (FUNC_0(VAR_5))
       return VAR_5;
    VAR_3->dev = VAR_1;
    VAR_3->owner = 0;
    VAR_3->adapterId = VAR_4.AdapterOrdinal;
    FUNC_5(&VAR_3->caps, sizeof(VAR_3->caps));
    VAR_5 = FUNC_2(VAR_2->obj, VAR_3->adapterId, VAR_4.DeviceType, &VAR_3->caps);
    if (FUNC_0(VAR_5))
       return VAR_5;
    D3DDISPLAYMODE VAR_6;
    VAR_5 = FUNC_1(VAR_2->obj, VAR_3->adapterId, &VAR_6);
    if (FUNC_0(VAR_5))
        return VAR_5;
    FUNC_3(VAR_3->dev);
    VAR_3->BufferFormat = VAR_6.Format;
    return VAR_0;
}
