
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int owner; void* context_mutex; int * d3ddevice; int feature_level; int * d3dcontext; } ;
typedef TYPE_1__ d3d11_device_t ;
typedef int context_lock ;
typedef int UINT ;
typedef int ID3D11DeviceContext ;
typedef int HRESULT ;
typedef void* HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int *,int*,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* VAR_3 ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int *,char*) ;

HRESULT FUNC_9(vlc_object_t *VAR_5, ID3D11DeviceContext *VAR_6,
                                   bool VAR_7, d3d11_device_t *VAR_8)
{
    HRESULT VAR_9;
    FUNC_2( VAR_6, &VAR_8->d3ddevice );

    if (VAR_7)
    {
        UINT VAR_10 = FUNC_4(VAR_8->d3ddevice);
        if (!(VAR_10 & VAR_0))
        {
            FUNC_8(VAR_5, "the provided D3D11 device doesn't support decoding");
            FUNC_6(VAR_8->d3ddevice);
            VAR_8->d3ddevice = ((void*)0);
            return VAR_1;
        }
    }

    FUNC_1( VAR_6 );
    VAR_8->d3dcontext = VAR_6;
    VAR_8->owner = 0;
    VAR_8->feature_level = FUNC_5(VAR_8->d3ddevice );

    HANDLE VAR_11 = VAR_3;
    UINT VAR_12 = sizeof(VAR_11);
    VAR_9 = FUNC_3(VAR_6, &VAR_2, &VAR_12, &VAR_11);
    if (FUNC_7(VAR_9))
        VAR_8->context_mutex = VAR_11;
    else
        VAR_8->context_mutex = VAR_3;

    FUNC_0(VAR_5, VAR_8);
    return VAR_4;
}
