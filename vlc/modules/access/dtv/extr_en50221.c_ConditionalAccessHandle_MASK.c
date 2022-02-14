
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {int* pi_system_ids; } ;
typedef TYPE_2__ system_ids_t ;
struct TYPE_8__ {int obj; int ** pp_selected_programs; TYPE_1__* p_sessions; } ;
typedef TYPE_3__ cam_t ;
struct TYPE_6__ {scalar_t__ p_sys; } ;



 int* FUNC_0 (int*,int*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_3__*,int,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5( cam_t * VAR_1, int VAR_2,
                                     uint8_t *VAR_3, int VAR_4 )
{
    system_ids_t *VAR_5 =
        (system_ids_t *)VAR_1->p_sessions[VAR_2 - 1].p_sys;
    int VAR_6 = FUNC_1( VAR_3, VAR_4 );

    switch ( VAR_6 )
    {
    case 128:
    {
        int VAR_7;
        int VAR_8 = 0;
        uint8_t *VAR_9 = FUNC_0( VAR_3, &VAR_8 );
        FUNC_3( VAR_1->obj, "CA system IDs supported by the application :" );

        for ( VAR_7 = 0; VAR_7 < VAR_8 / 2; VAR_7++ )
        {
            VAR_5->pi_system_ids[VAR_7] = ((uint16_t)VAR_9[0] << 8) | VAR_9[1];
            VAR_9 += 2;
            FUNC_3( VAR_1->obj, "- 0x%x", VAR_5->pi_system_ids[VAR_7] );
        }
        VAR_5->pi_system_ids[VAR_7] = 0;

        for ( VAR_7 = 0; VAR_7 < VAR_0; VAR_7++ )
        {
            if ( VAR_1->pp_selected_programs[VAR_7] != ((void*)0) )
            {
                FUNC_2( VAR_1, VAR_2,
                          VAR_1->pp_selected_programs[VAR_7] );
            }
        }
        break;
    }

    default:
        FUNC_4( VAR_1->obj,
                 "unexpected tag in ConditionalAccessHandle (0x%x)",
                 VAR_6 );
    }
}
