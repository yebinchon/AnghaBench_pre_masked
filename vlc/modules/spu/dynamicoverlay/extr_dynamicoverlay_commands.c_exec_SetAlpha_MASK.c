
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int b_active; int i_alpha; } ;
typedef TYPE_1__ overlay_t ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_12__ {int b_updated; int overlays; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_13__ {int i_alpha; int i_id; } ;
typedef TYPE_4__ commandparams_t ;


 TYPE_1__* FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_2( filter_t *VAR_2,
                          const commandparams_t *VAR_3,
                          commandparams_t *VAR_4 )
{
    FUNC_1(VAR_4);
    filter_sys_t *VAR_5 = VAR_2->p_sys;

    overlay_t *VAR_6 = FUNC_0( &VAR_5->overlays, VAR_3->i_id );
    if( VAR_6 == ((void*)0) )
        return VAR_0;

    VAR_6->i_alpha = VAR_3->i_alpha;
    VAR_5->b_updated = VAR_6->b_active;
    return VAR_1;
}
