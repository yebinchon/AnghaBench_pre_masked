
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_y; int i_x; } ;
typedef TYPE_1__ overlay_t ;
struct TYPE_10__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_11__ {int overlays; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_12__ {int i_y; int i_x; int i_id; } ;
typedef TYPE_4__ commandparams_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;
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

    VAR_4->i_x = VAR_6->i_x;
    VAR_4->i_y = VAR_6->i_y;
    return VAR_1;
}
