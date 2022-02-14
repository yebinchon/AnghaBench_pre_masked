
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int i_beginx; int i_beginy; int i_lasty; int b_2fingers; int i_type; double f_lastzoom; scalar_t__ i_ullArguments; int i_action; } ;
typedef TYPE_2__ win32_gesture_sys_t ;
typedef int vlc_object_t ;
struct TYPE_6__ {int x; int y; } ;
struct TYPE_8__ {int dwID; int dwFlags; scalar_t__ ullArguments; TYPE_1__ ptsLocation; } ;
typedef TYPE_3__ GESTUREINFO ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int VAR_11 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static BOOL FUNC_3( vlc_object_t *VAR_12, win32_gesture_sys_t *VAR_13, const GESTUREINFO* VAR_14 )
{


    BOOL VAR_15 = VAR_7;
    switch ( VAR_14->dwID )
    {
        case 133:

            VAR_13->i_beginx = VAR_14->ptsLocation.x;
            VAR_13->i_beginy = VAR_14->ptsLocation.y;
            VAR_13->i_lasty = VAR_13->i_beginy;
            VAR_13->b_2fingers = 0;
            break;
        case 132:
            if( VAR_13->i_type != 0 &&
                VAR_13->i_action == VAR_8 )
            {
                int VAR_16;
                if( VAR_13->b_2fingers )
                {
                    if( VAR_13->i_beginx > VAR_14->ptsLocation.x )
                        VAR_16 = VAR_0;
                    else
                        VAR_16 = VAR_1;
                    FUNC_1( FUNC_2(VAR_12), "key-action", VAR_16 );
                }
            }

            VAR_13->i_action = VAR_9;
            VAR_13->i_type = VAR_13->i_beginx = VAR_13->i_beginy = -1;
            VAR_13->b_2fingers = 0;
            break;
        case 131:

            VAR_13->i_type = 131;
            VAR_15 = VAR_11;
            if (VAR_14->dwFlags & 134) {
                VAR_13->i_beginx = VAR_14->ptsLocation.x;
                VAR_13->i_beginy = VAR_14->ptsLocation.y;
            }

            if( (DWORD)VAR_14->ullArguments > 0 )
                VAR_13->b_2fingers = 1;

            if( VAR_13->b_2fingers && VAR_13->i_action == VAR_9 )
            {
                if( FUNC_0( VAR_13->i_beginx - VAR_14->ptsLocation.x ) +
                    FUNC_0( VAR_13->i_beginy - VAR_14->ptsLocation.y ) > 50 )
                {
                    if( FUNC_0( VAR_13->i_beginx - VAR_14->ptsLocation.x ) >
                        FUNC_0( VAR_13->i_beginy - VAR_14->ptsLocation.y ) )
                        VAR_13->i_action = VAR_8;
                    else
                        VAR_13->i_action = VAR_10;
                }
            }

            if( VAR_13->i_action == VAR_10 )
            {
                int VAR_17 = VAR_13->i_lasty - VAR_14->ptsLocation.y;

                if( VAR_17 > 100)
                    FUNC_1( FUNC_2(VAR_12), "key-action", VAR_6 );
                else if( VAR_17 < -100)
                    FUNC_1( FUNC_2(VAR_12), "key-action", VAR_5 );
                else
                    break;

                VAR_13->i_lasty = VAR_14->ptsLocation.y;
            }
            break;
        case 130:
            VAR_13->i_type = 130;
            FUNC_1( FUNC_2(VAR_12), "key-action", VAR_2 );
            VAR_15 = VAR_11;
            break;
        case 129:
            VAR_13->i_type = 129;
            VAR_15 = VAR_11;
            switch( VAR_14->dwFlags )
            {
                case 134:
                    VAR_13->i_ullArguments = VAR_14->ullArguments;
                    VAR_13->f_lastzoom = 1.0;
                    break;
                default:
                {
                    double VAR_18 = (double)(VAR_14->ullArguments) /
                               (double)(VAR_13->i_ullArguments);

                    if (VAR_18 > VAR_13->f_lastzoom * 1.01)
                    {
                        FUNC_1( FUNC_2(VAR_12), "key-action", VAR_3 );
                        VAR_13->f_lastzoom = VAR_18;
                    }
                    else if (VAR_18 < VAR_13->f_lastzoom * 0.99)
                    {
                        FUNC_1( FUNC_2(VAR_12), "key-action", VAR_4 );
                        VAR_13->f_lastzoom = VAR_18;
                    }
                    break;
                }
            }
            break;
        case 128:
            VAR_15 = VAR_11;
            break;
        default:
            break;
    }
    return VAR_15;
}
