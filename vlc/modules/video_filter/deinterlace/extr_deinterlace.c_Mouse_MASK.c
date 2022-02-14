
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int i_y; } ;
typedef TYPE_3__ vlc_mouse_t ;
struct TYPE_14__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_11__ {scalar_t__ b_half_height; } ;
struct TYPE_12__ {TYPE_1__ settings; } ;
struct TYPE_15__ {TYPE_2__ context; } ;
typedef TYPE_5__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__ const*) ;

int FUNC_1( filter_t *VAR_1,
           vlc_mouse_t *VAR_2,
           const vlc_mouse_t *VAR_3, const vlc_mouse_t *VAR_4 )
{
    FUNC_0(VAR_3);
    *VAR_2 = *VAR_4;
    filter_sys_t *VAR_5 = VAR_1->p_sys;
    if( VAR_5->context.settings.b_half_height )
        VAR_2->i_y *= 2;
    return VAR_0;
}
