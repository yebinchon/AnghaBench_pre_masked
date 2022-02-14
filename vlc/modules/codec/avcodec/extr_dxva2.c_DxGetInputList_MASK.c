
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vlc_va_t ;
struct TYPE_8__ {int d3ddec; } ;
typedef TYPE_2__ vlc_va_sys_t ;
struct TYPE_9__ {int pf_release; int * list; int count; } ;
typedef TYPE_3__ input_list_t ;
typedef int UINT ;
typedef int GUID ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_3(vlc_va_t *VAR_3, input_list_t *VAR_4)
{
    vlc_va_sys_t *VAR_5 = VAR_3->sys;
    UINT VAR_6 = 0;
    GUID *VAR_7 = ((void*)0);
    if (FUNC_0(FUNC_1(VAR_5->d3ddec,
                                                                 &VAR_6,
                                                                 &VAR_7))) {
        FUNC_2(VAR_3, "IDirectXVideoDecoderService_GetDecoderDeviceGuids failed");
        return VAR_1;
    }

    VAR_4->count = VAR_6;
    VAR_4->list = VAR_7;
    VAR_4->pf_release = VAR_0;
    return VAR_2;
}
