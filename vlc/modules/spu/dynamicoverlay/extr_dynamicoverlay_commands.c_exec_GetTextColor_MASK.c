
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* p_fontstyle; } ;
typedef TYPE_3__ overlay_t ;
struct TYPE_14__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_15__ {int overlays; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_12__ {int i_features; int i_font_color; } ;
struct TYPE_16__ {TYPE_2__ fontstyle; int i_id; } ;
typedef TYPE_6__ commandparams_t ;
struct TYPE_11__ {int i_font_color; } ;


 TYPE_3__* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1( filter_t *VAR_3,
                              const commandparams_t *VAR_4,
                              commandparams_t *VAR_5 )
{
    filter_sys_t *VAR_6 = VAR_3->p_sys;
    overlay_t *VAR_7 = FUNC_0( &VAR_6->overlays, VAR_4->i_id );
    if( VAR_7 == ((void*)0) )
        return VAR_1;

    VAR_5->fontstyle.i_font_color = VAR_7->p_fontstyle->i_font_color;
    VAR_5->fontstyle.i_features |= VAR_0;
    return VAR_2;
}
