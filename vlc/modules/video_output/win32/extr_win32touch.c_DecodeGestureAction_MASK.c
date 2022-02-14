
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int i_beginx; int i_beginy; int i_lasty; int b_2fingers; int i_type; scalar_t__ i_ullArguments; int i_action; } ;
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
 int VAR_12 ;
 int VAR_13 ;







 int VAR_14 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static BOOL FUNC_4( vlc_object_t *VAR_15, win32_gesture_sys_t *VAR_16, const GESTUREINFO* VAR_17 )
{
    BOOL VAR_18 = VAR_9;
    switch ( VAR_17->dwID )
    {
        case 133:

            VAR_16->i_beginx = VAR_17->ptsLocation.x;
            VAR_16->i_beginy = VAR_17->ptsLocation.y;
            VAR_16->i_lasty = VAR_16->i_beginy;
            VAR_16->b_2fingers = 0;
            break;
        case 132:
            if( VAR_16->i_type != 0 &&
                VAR_16->i_action == VAR_11 )
            {
                int VAR_19;
                if( VAR_16->i_beginx > VAR_17->ptsLocation.x )
                {
                    if( VAR_16->b_2fingers )
                        VAR_19 = VAR_0;
                    else
                        VAR_19 = VAR_1;
                }
                else
                {
                    if( VAR_16->b_2fingers )
                        VAR_19 = VAR_2;
                    else
                        VAR_19 = VAR_3;
                }
                FUNC_2( FUNC_3(VAR_15), "key-action", VAR_19 );
            }

            VAR_16->i_action = VAR_12;
            VAR_16->i_type = VAR_16->i_beginx = VAR_16->i_beginy = -1;
            VAR_16->b_2fingers = 0;
            break;
        case 131:
            VAR_16->i_type = 131;
            VAR_18 = VAR_14;

            if (VAR_17->dwFlags & 135) {
                VAR_16->i_beginx = VAR_17->ptsLocation.x;
                VAR_16->i_beginy = VAR_17->ptsLocation.y;
            }

            if( (DWORD)VAR_17->ullArguments > 0 )
                VAR_16->b_2fingers = 1;

            if( VAR_16->i_action == VAR_12 )
            {
                if( FUNC_0( VAR_16->i_beginx - VAR_17->ptsLocation.x ) +
                    FUNC_0( VAR_16->i_beginy - VAR_17->ptsLocation.y ) > 50 )
                {
                    if( FUNC_0( VAR_16->i_beginx - VAR_17->ptsLocation.x ) >
                        FUNC_0( VAR_16->i_beginy - VAR_17->ptsLocation.y ) )
                       VAR_16->i_action = VAR_11;
                    else if ( VAR_16->b_2fingers )
                       VAR_16->i_action = VAR_10;
                    else
                       VAR_16->i_action = VAR_13;
                }
            }

            if( VAR_16->i_action == VAR_13 )
            {
                int VAR_20 = VAR_16->i_lasty - VAR_17->ptsLocation.y;

                if( VAR_20 > 100)
                    FUNC_2( FUNC_3(VAR_15), "key-action", VAR_8 );
                else if( VAR_20 < -100)
                    FUNC_2( FUNC_3(VAR_15), "key-action", VAR_7 );
                else
                    break;

                VAR_16->i_lasty = VAR_17->ptsLocation.y;
            }
            else if ( VAR_16->i_action == VAR_10 )
            {
            }
            break;
        case 130:
            VAR_16->i_type = 130;
            FUNC_2( FUNC_3(VAR_15), "key-action", VAR_5 );
            VAR_18 = VAR_14;
            break;
        case 129:
            VAR_16->i_type = 129;
            switch( VAR_17->dwFlags )
            {
                case 135:
                    VAR_16->i_ullArguments = VAR_17->ullArguments;
                    break;
                case 134:
                    {
                        double VAR_21 = (double)(VAR_17->ullArguments) /
                                   (double)(VAR_16->i_ullArguments);
                        if( VAR_21 > 1 )
                            FUNC_2( FUNC_3(VAR_15), "key-action",
                                    VAR_6 );
                        else
                            FUNC_2( FUNC_3(VAR_15), "key-action",
                                    VAR_4 );
                    }
                    break;
                default:
                    FUNC_1( VAR_15, "Unmanaged dwFlag: %lx", VAR_17->dwFlags );
            }
            VAR_18 = VAR_14;
            break;
        case 128:
            VAR_18 = VAR_14;
            break;
        default:
            break;
    }
    return VAR_18;
}
