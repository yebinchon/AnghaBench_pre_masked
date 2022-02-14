
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i_object_type; } ;
typedef TYPE_2__ mmi_t ;
struct TYPE_7__ {TYPE_1__* p_sessions; int obj; } ;
typedef TYPE_3__ cam_t ;
struct TYPE_5__ {scalar_t__ p_sys; int pf_close; int pf_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( cam_t *VAR_3, unsigned VAR_4 )
{
    mmi_t *VAR_5;

    FUNC_0( VAR_3->obj, "opening MMI session (%u)", VAR_4 );

    VAR_3->p_sessions[VAR_4 - 1].pf_handle = VAR_2;
    VAR_3->p_sessions[VAR_4 - 1].pf_close = VAR_1;
    VAR_3->p_sessions[VAR_4 - 1].p_sys = FUNC_1(sizeof(mmi_t));
    VAR_5 = (mmi_t *)VAR_3->p_sessions[VAR_4 - 1].p_sys;
    VAR_5->i_object_type = VAR_0;
}
