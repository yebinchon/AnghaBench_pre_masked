
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int i_interval; } ;
typedef TYPE_2__ date_time_t ;
struct TYPE_8__ {int obj; TYPE_1__* p_sessions; } ;
typedef TYPE_3__ cam_t ;
struct TYPE_6__ {scalar_t__ p_sys; } ;



 int * FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5( cam_t *VAR_0, int VAR_1,
                            uint8_t *VAR_2, int VAR_3 )
{
    date_time_t *VAR_4 =
        (date_time_t *)VAR_0->p_sessions[VAR_1 - 1].p_sys;

    int VAR_5 = FUNC_1( VAR_2, VAR_3 );

    switch ( VAR_5 )
    {
    case 128:
    {
        int VAR_6;
        const uint8_t *VAR_7 = FUNC_0( VAR_2, &VAR_6 );

        if ( VAR_6 > 0 )
        {
            VAR_4->i_interval = *VAR_7;
            FUNC_3( VAR_0->obj, "DateTimeHandle : interval set to %d",
                     VAR_4->i_interval );
        }
        else
            VAR_4->i_interval = 0;

        FUNC_2( VAR_0, VAR_1 );
        break;
    }
    default:
        FUNC_4( VAR_0->obj, "unexpected tag in DateTimeHandle (0x%x)",
                 VAR_5 );
    }
}
