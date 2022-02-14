
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_16__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_15__ {scalar_t__ use_ex; } ;
struct TYPE_18__ {int BufferFormat; int dev; int devex; } ;
struct TYPE_17__ {TYPE_12__ hd3d; TYPE_3__ d3d_dev; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int video_format_t ;
typedef TYPE_3__ d3d9_device_t ;
struct TYPE_19__ {int BackBufferFormat; } ;
typedef int HRESULT ;
typedef TYPE_4__ D3DPRESENT_PARAMETERS ;


 scalar_t__ FUNC_0 (TYPE_12__*,TYPE_3__*,TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int const*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_4__*,int *) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;

__attribute__((used)) static int FUNC_8(vout_display_t *VAR_2, const video_format_t *VAR_3)
{
    vout_display_sys_t *VAR_4 = VAR_2->sys;
    d3d9_device_t *VAR_5 = &VAR_4->d3d_dev;

    D3DPRESENT_PARAMETERS VAR_6;
    if (FUNC_0(&VAR_4->hd3d, VAR_5, &VAR_6))
    {
        FUNC_7(VAR_2, "Could not presentation parameters to reset device");
        return VAR_0;
    }


    FUNC_2(VAR_2);


    HRESULT VAR_7;
    if (VAR_4->hd3d.use_ex){
        VAR_7 = FUNC_4(VAR_5->devex, &VAR_6, ((void*)0));
    } else {
        VAR_7 = FUNC_5(VAR_5->dev, &VAR_6);
    }
    if (FUNC_3(VAR_7)) {
        FUNC_7(VAR_2, "IDirect3DDevice9_Reset failed! (hr=0x%lX)", VAR_7);
        return VAR_0;
    }
    VAR_5->BufferFormat = VAR_6.BackBufferFormat;


    if (FUNC_1(VAR_2, VAR_3)) {
        FUNC_6(VAR_2, "Direct3D9CreateResources failed !");
        return VAR_0;
    }
    return VAR_1;
}
