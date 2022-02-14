
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_1__* p_sessions; int obj; } ;
typedef TYPE_2__ cam_t ;
struct TYPE_9__ {scalar_t__ i_resource_id; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,int) ;






 int FUNC_4 (int*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int VAR_0 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int,...) ;

__attribute__((used)) static void FUNC_8( cam_t * VAR_1, uint8_t VAR_2,
                                   uint8_t *VAR_3, int VAR_4 )
{
    FUNC_6( VAR_4 );
    FUNC_6( VAR_2 );

    int VAR_5 = VAR_3[2];
    int VAR_6 = FUNC_4( &VAR_3[3] );
    int VAR_7 = ((int)VAR_3[7] << 8) | VAR_3[8];

    if ( VAR_5 != VAR_0 )
    {
        FUNC_7( VAR_1->obj, "SessionCreateResponse: failed to open session %d"
                 " resource=0x%x status=0x%x", VAR_7, VAR_6,
                 VAR_5 );
        VAR_1->p_sessions[VAR_7 - 1].i_resource_id = 0;
        return;
    }

    switch ( VAR_6 )
    {
    case 128:
        FUNC_5( VAR_1, VAR_7 ); break;
    case 133:
        FUNC_0( VAR_1, VAR_7 ); break;
    case 132:
        FUNC_1( VAR_1, VAR_7 ); break;
    case 131:
        FUNC_2( VAR_1, VAR_7 ); break;
    case 129:
        FUNC_3( VAR_1, VAR_7 ); break;

    case 130:
    default:
        FUNC_7( VAR_1->obj, "unknown resource id (0x%x)", VAR_6 );
        VAR_1->p_sessions[VAR_7 - 1].i_resource_id = 0;
    }
}
