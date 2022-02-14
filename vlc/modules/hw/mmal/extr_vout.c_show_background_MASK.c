
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_5__ {void* bkg_resource; void* bkg_element; scalar_t__ layer; int dmx_handle; } ;
typedef TYPE_2__ vout_display_sys_t ;
typedef int uint32_t ;
typedef int color ;
typedef int VC_RECT_T ;
typedef int DISPMANX_UPDATE_HANDLE_T ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ,scalar_t__,int *,void*,int *,int ,int *,int *,int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int *,int ,int ,int,int) ;
 void* FUNC_3 (int ,int,int,int*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ,int,int*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(vout_display_t *VAR_4, bool VAR_5)
{
    vout_display_sys_t *VAR_6 = VAR_4->sys;
    uint32_t VAR_7, VAR_8 = 0xFF000000;
    VC_RECT_T VAR_9, VAR_10;
    DISPMANX_UPDATE_HANDLE_T VAR_11;

    if (VAR_5 && !VAR_6->bkg_element) {
        VAR_6->bkg_resource = FUNC_3(VAR_2, 1, 1,
                        &VAR_7);
        FUNC_2(&VAR_9, 0, 0, 1, 1);
        FUNC_5(VAR_6->bkg_resource, VAR_2,
                        sizeof(VAR_8), &VAR_8, &VAR_9);
        FUNC_2(&VAR_10, 0, 0, 1 << 16, 1 << 16);
        FUNC_2(&VAR_9, 0, 0, 0, 0);
        VAR_11 = FUNC_6(0);
        VAR_6->bkg_element = FUNC_0(VAR_11, VAR_6->dmx_handle,
                        VAR_6->layer - 1, &VAR_9, VAR_6->bkg_resource, &VAR_10,
                        VAR_1, ((void*)0), ((void*)0), VAR_3);
        FUNC_7(VAR_11);
    } else if (!VAR_5 && VAR_6->bkg_element) {
        VAR_11 = FUNC_6(0);
        FUNC_1(VAR_11, VAR_6->bkg_element);
        FUNC_4(VAR_6->bkg_resource);
        FUNC_7(VAR_11);
        VAR_6->bkg_element = VAR_0;
        VAR_6->bkg_resource = VAR_0;
    }
}
