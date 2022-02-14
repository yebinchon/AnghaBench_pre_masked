
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {TYPE_1__* p_sessions; int obj; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_11__ {int i_resource_id; int i_slot; int * pf_manage; int * pf_close; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,int) ;






 int FUNC_4 (int*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,int*,int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,int ,int*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static void FUNC_10( cam_t * VAR_6, uint8_t VAR_7,
                         uint8_t *VAR_8, int VAR_9 )
{
    FUNC_8( VAR_9 );

    int VAR_10;
    int VAR_11 = FUNC_4( &VAR_8[2] );
    uint8_t VAR_12[16];
    int VAR_13 = VAR_1;
    uint8_t VAR_14;

    for ( VAR_10 = 1; VAR_10 <= VAR_0; VAR_10++ )
    {
        if ( !VAR_6->p_sessions[VAR_10 - 1].i_resource_id )
            break;
    }
    if ( VAR_10 > VAR_0 )
    {
        FUNC_9( VAR_6->obj, "too many sessions !" );
        return;
    }
    VAR_6->p_sessions[VAR_10 - 1].i_slot = VAR_7;
    VAR_6->p_sessions[VAR_10 - 1].i_resource_id = VAR_11;
    VAR_6->p_sessions[VAR_10 - 1].pf_close = ((void*)0);
    VAR_6->p_sessions[VAR_10 - 1].pf_manage = ((void*)0);

    if ( VAR_11 == 128
          || VAR_11 == 133
          || VAR_11 == 132
          || VAR_11 == 131
          || VAR_11 == 129 )
    {
        VAR_13 = VAR_2;
    }

    VAR_12[0] = VAR_3;
    VAR_12[1] = 0x7;
    VAR_12[2] = VAR_13;
    VAR_12[3] = VAR_8[2];
    VAR_12[4] = VAR_8[3];
    VAR_12[5] = VAR_8[4];
    VAR_12[6] = VAR_8[5];
    VAR_12[7] = VAR_10 >> 8;
    VAR_12[8] = VAR_10 & 0xff;

    if ( FUNC_7( VAR_6, VAR_7, VAR_4, VAR_12, 9 ) !=
            VAR_5 )
    {
        FUNC_9( VAR_6->obj,
                 "SessionOpen: couldn't send TPDU on slot %d", VAR_7 );
        return;
    }
    if ( FUNC_6( VAR_6, VAR_7, &VAR_14, ((void*)0), ((void*)0) ) != VAR_5 )
    {
        FUNC_9( VAR_6->obj,
                 "SessionOpen: couldn't recv TPDU on slot %d", VAR_7 );
        return;
    }

    switch ( VAR_11 )
    {
    case 128:
        FUNC_5( VAR_6, VAR_10 ); break;
    case 133:
        FUNC_0( VAR_6, VAR_10 ); break;
    case 132:
        FUNC_1( VAR_6, VAR_10 ); break;
    case 131:
        FUNC_2( VAR_6, VAR_10 ); break;
    case 129:
        FUNC_3( VAR_6, VAR_10 ); break;

    case 130:
    default:
        FUNC_9( VAR_6->obj, "unknown resource id (0x%x)", VAR_11 );
        VAR_6->p_sessions[VAR_10 - 1].i_resource_id = 0;
    }
}
