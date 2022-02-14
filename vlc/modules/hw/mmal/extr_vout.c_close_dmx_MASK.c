
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* sys; } ;
typedef TYPE_1__ vout_display_t ;
struct TYPE_6__ {int dmx_handle; struct dmx_region_t* dmx_region; } ;
typedef TYPE_2__ vout_display_sys_t ;
struct dmx_region_t {struct dmx_region_t* next; } ;
typedef int DISPMANX_UPDATE_HANDLE_T ;


 int VAR_0 ;
 int FUNC_0 (struct dmx_region_t*,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(vout_display_t *VAR_1)
{
    vout_display_sys_t *VAR_2 = VAR_1->sys;
    DISPMANX_UPDATE_HANDLE_T VAR_3 = FUNC_3(10);
    struct dmx_region_t *VAR_4 = VAR_2->dmx_region;
    struct dmx_region_t *VAR_5;

    while(VAR_4) {
        VAR_5 = VAR_4->next;
        FUNC_0(VAR_4, VAR_3);
        VAR_4 = VAR_5;
    }

    FUNC_4(VAR_3);
    VAR_2->dmx_region = ((void*)0);

    FUNC_1(VAR_1, 0);

    FUNC_2(VAR_2->dmx_handle);
    VAR_2->dmx_handle = VAR_0;
}
