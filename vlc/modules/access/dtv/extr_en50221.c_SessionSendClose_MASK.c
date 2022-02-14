
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int obj; TYPE_1__* p_sessions; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_6__ {int i_slot; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int*,int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int ,int*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static void FUNC_4( cam_t *VAR_3, int VAR_4 )
{
    uint8_t VAR_5[16];
    uint8_t VAR_6;
    uint8_t VAR_7 = VAR_3->p_sessions[VAR_4 - 1].i_slot;

    VAR_5[0] = VAR_0;
    VAR_5[1] = 0x2;
    FUNC_0( &VAR_5[2], VAR_4 );

    if ( FUNC_2( VAR_3, VAR_7, VAR_1, VAR_5, 4 ) !=
            VAR_2 )
    {
        FUNC_3( VAR_3->obj,
                 "SessionSendClose: couldn't send TPDU on slot %d", VAR_7 );
        return;
    }
    if ( FUNC_1( VAR_3, VAR_7, &VAR_6, ((void*)0), ((void*)0) ) != VAR_2 )
    {
        FUNC_3( VAR_3->obj,
                 "SessionSendClose: couldn't recv TPDU on slot %d", VAR_7 );
        return;
    }
}
