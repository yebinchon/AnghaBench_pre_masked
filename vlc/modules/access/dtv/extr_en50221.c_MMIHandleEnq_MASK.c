
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int b_blind; char* psz_text; } ;
struct TYPE_10__ {TYPE_2__ enq; } ;
struct TYPE_11__ {TYPE_3__ u; int i_object_type; } ;
typedef TYPE_4__ mmi_t ;
struct TYPE_12__ {int* pb_slot_mmi_expected; int* pb_slot_mmi_undisplayed; int obj; TYPE_1__* p_sessions; } ;
typedef TYPE_5__ cam_t ;
struct TYPE_8__ {int i_slot; scalar_t__ p_sys; } ;


 int* FUNC_0 (int*,int*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6( cam_t *VAR_1, int VAR_2,
                          uint8_t *VAR_3, int VAR_4 )
{
    FUNC_2( VAR_4 );

    mmi_t *VAR_5 = (mmi_t *)VAR_1->p_sessions[VAR_2 - 1].p_sys;
    int VAR_6 = VAR_1->p_sessions[VAR_2 - 1].i_slot;
    int VAR_7;
    uint8_t *VAR_8 = FUNC_0( VAR_3, &VAR_7 );

    FUNC_1( VAR_5 );
    VAR_5->i_object_type = VAR_0;
    VAR_5->u.enq.b_blind = (*VAR_8 & 0x1) ? 1 : 0;
    VAR_8 += 2;
    VAR_7 -= 2;
    VAR_5->u.enq.psz_text = FUNC_5( VAR_7 + 1 );
    FUNC_4( VAR_5->u.enq.psz_text, (char *)VAR_8, VAR_7 );
    VAR_5->u.enq.psz_text[VAR_7] = '\0';

    FUNC_3( VAR_1->obj, "MMI enq: %s%s", VAR_5->u.enq.psz_text,
             VAR_5->u.enq.b_blind ? " (blind)" : "" );
    VAR_1->pb_slot_mmi_expected[VAR_6] = 0;
    VAR_1->pb_slot_mmi_undisplayed[VAR_6] = 1;
}
