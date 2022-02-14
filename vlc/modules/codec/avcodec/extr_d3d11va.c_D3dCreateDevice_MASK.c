
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* sys; } ;
typedef TYPE_3__ vlc_va_t ;
struct TYPE_8__ {void* video_context; } ;
struct TYPE_7__ {scalar_t__ d3ddevice; scalar_t__ d3dcontext; } ;
struct TYPE_10__ {void* d3ddec; TYPE_2__ hw; TYPE_1__ d3d_dev; } ;
typedef TYPE_4__ vlc_va_sys_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int *,void**) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int *,void**) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_3__*,char*,int ) ;

__attribute__((used)) static int FUNC_8(vlc_va_t *VAR_4)
{
    vlc_va_sys_t *VAR_5 = VAR_4->sys;
    HRESULT VAR_6;

    FUNC_6(VAR_5->d3d_dev.d3ddevice && VAR_5->d3d_dev.d3dcontext);
    void *VAR_7 = ((void*)0);
    VAR_6 = FUNC_1(VAR_5->d3d_dev.d3dcontext, &VAR_0, &VAR_7);
    if (FUNC_0(VAR_6)) {
       FUNC_7(VAR_4, "Could not Query ID3D11VideoContext Interface. (hr=0x%lX)", VAR_6);
       FUNC_2(VAR_5->d3d_dev.d3dcontext);
       FUNC_4(VAR_5->d3d_dev.d3ddevice);
       return VAR_2;
    }
    VAR_5->hw.video_context = VAR_7;

    void *VAR_8 = ((void*)0);
    VAR_6 = FUNC_3(VAR_5->d3d_dev.d3ddevice, &VAR_1, &VAR_8);
    if (FUNC_0(VAR_6)) {
       FUNC_7(VAR_4, "Could not Query ID3D11VideoDevice Interface. (hr=0x%lX)", VAR_6);
       FUNC_2(VAR_5->d3d_dev.d3dcontext);
       FUNC_4(VAR_5->d3d_dev.d3ddevice);
       FUNC_5(VAR_5->hw.video_context);
       return VAR_2;
    }
    VAR_5->d3ddec = VAR_8;

    return VAR_3;
}
