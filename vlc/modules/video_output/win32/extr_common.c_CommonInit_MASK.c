
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int source; } ;
typedef TYPE_1__ vout_display_t ;
typedef int vout_display_cfg_t ;
struct TYPE_7__ {int place_changed; int texture_source; int vdcfg; } ;
typedef TYPE_2__ display_win32_area_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;

void FUNC_1(vout_display_t *VAR_2, display_win32_area_t *VAR_3, const vout_display_cfg_t *VAR_4)
{
    VAR_3->place_changed = 0;
    VAR_3->vdcfg = *VAR_4;

    VAR_3->texture_source = VAR_2->source;

    FUNC_0(VAR_2, "disable-screensaver", VAR_0 | VAR_1);
}
