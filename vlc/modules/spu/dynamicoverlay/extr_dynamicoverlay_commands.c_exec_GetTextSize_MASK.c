
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


struct TYPE_13__ {TYPE_2__* p_fontstyle; } ;
typedef TYPE_3__ overlay_t ;
struct TYPE_14__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_15__ {int overlays; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_11__ {int i_font_size; } ;
struct TYPE_16__ {TYPE_1__ fontstyle; int i_id; } ;
typedef TYPE_6__ commandparams_t ;
struct TYPE_12__ {int i_font_size; } ;


 TYPE_3__* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1( filter_t *VAR_2,
                             const commandparams_t *VAR_3,
                             commandparams_t *VAR_4 )
{
    filter_sys_t *VAR_5 = VAR_2->p_sys;
    overlay_t *VAR_6 = FUNC_0( &VAR_5->overlays, VAR_3->i_id );
    if( VAR_6 == ((void*)0) )
        return VAR_0;

    VAR_4->fontstyle.i_font_size = VAR_6->p_fontstyle->i_font_size;
    return VAR_1;
}
