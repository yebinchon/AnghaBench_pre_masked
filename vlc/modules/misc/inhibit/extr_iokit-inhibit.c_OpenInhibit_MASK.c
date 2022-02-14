
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int inhibit; TYPE_2__* p_sys; } ;
typedef TYPE_1__ vlc_inhibit_t ;
struct TYPE_5__ {void* inh_assertion_id; void* act_assertion_id; } ;
typedef TYPE_2__ vlc_inhibit_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(vlc_object_t *VAR_4)
{
    vlc_inhibit_t *VAR_5 = (vlc_inhibit_t *)VAR_4;


    vlc_inhibit_sys_t *VAR_6 = VAR_5->p_sys =
            FUNC_1(VAR_4, sizeof(vlc_inhibit_sys_t));
    if (FUNC_0(VAR_5->p_sys == ((void*)0)))
        return VAR_1;

    VAR_6->act_assertion_id = VAR_3;
    VAR_6->inh_assertion_id = VAR_3;

    VAR_5->inhibit = VAR_0;
    return VAR_2;
}
