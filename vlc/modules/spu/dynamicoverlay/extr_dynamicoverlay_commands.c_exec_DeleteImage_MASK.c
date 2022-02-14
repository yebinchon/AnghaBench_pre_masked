
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_9__ {int b_updated; int overlays; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_10__ {int i_id; } ;
typedef TYPE_3__ commandparams_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2( filter_t *VAR_0,
                             const commandparams_t *VAR_1,
                             commandparams_t *VAR_2 )
{
    FUNC_1(VAR_2);
    filter_sys_t *VAR_3 = VAR_0->p_sys;
    VAR_3->b_updated = 1;

    return FUNC_0( &VAR_3->overlays, VAR_1->i_id );
}
