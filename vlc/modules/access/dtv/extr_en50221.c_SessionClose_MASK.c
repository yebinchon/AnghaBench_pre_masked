
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int obj; TYPE_1__* p_sessions; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_7__ {int i_slot; scalar_t__ i_resource_id; int (* pf_close ) (TYPE_2__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int*,int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int ,int*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_4( cam_t * VAR_4, int VAR_5 )
{
    uint8_t VAR_6[16];
    uint8_t VAR_7;
    uint8_t VAR_8 = VAR_4->p_sessions[VAR_5 - 1].i_slot;

    if ( VAR_4->p_sessions[VAR_5 - 1].pf_close != ((void*)0) )
        VAR_4->p_sessions[VAR_5 - 1].pf_close( VAR_4, VAR_5 );
    VAR_4->p_sessions[VAR_5 - 1].i_resource_id = 0;

    VAR_6[0] = VAR_1;
    VAR_6[1] = 0x3;
    VAR_6[2] = VAR_0;
    VAR_6[3] = VAR_5 >> 8;
    VAR_6[4] = VAR_5 & 0xff;

    if ( FUNC_1( VAR_4, VAR_8, VAR_2, VAR_6, 5 ) !=
            VAR_3 )
    {
        FUNC_2( VAR_4->obj,
                 "SessionClose: couldn't send TPDU on slot %d", VAR_8 );
        return;
    }
    if ( FUNC_0( VAR_4, VAR_8, &VAR_7, ((void*)0), ((void*)0) ) != VAR_3 )
    {
        FUNC_2( VAR_4->obj,
                 "SessionClose: couldn't recv TPDU on slot %d", VAR_8 );
        return;
    }
}
