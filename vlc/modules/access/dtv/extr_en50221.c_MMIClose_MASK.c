
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int mmi_t ;
struct TYPE_5__ {int* pb_slot_mmi_expected; int* pb_slot_mmi_undisplayed; int obj; TYPE_1__* p_sessions; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_4__ {int i_slot; scalar_t__ p_sys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static void FUNC_3( cam_t *VAR_0, int VAR_1 )
{
    int VAR_2 = VAR_0->p_sessions[VAR_1 - 1].i_slot;
    mmi_t *VAR_3 = (mmi_t *)VAR_0->p_sessions[VAR_1 - 1].p_sys;

    FUNC_0( VAR_3 );
    FUNC_1( VAR_0->p_sessions[VAR_1 - 1].p_sys );

    FUNC_2( VAR_0->obj, "closing MMI session (%d)", VAR_1 );
    VAR_0->pb_slot_mmi_expected[VAR_2] = 0;
    VAR_0->pb_slot_mmi_undisplayed[VAR_2] = 1;
}
