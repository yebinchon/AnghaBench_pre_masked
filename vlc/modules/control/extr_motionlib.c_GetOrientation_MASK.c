
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sensor; int unimotion_hw; int i_calibrate; } ;
typedef TYPE_1__ motion_sensors_t ;
typedef int FILE ;






 int FUNC_0 (double) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int*,...) ;
 int FUNC_4 (int ,int*,int*,int*) ;
 double FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7( motion_sensors_t *VAR_0 )
{
    FILE *VAR_1;
    int VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
    int VAR_5;

    switch( VAR_0->sensor )
    {
    case 129:
        VAR_1 = FUNC_2( "/sys/devices/platform/hdaps/position", "re" );
        if( !VAR_1 )
        {
            return 0;
        }

        VAR_5 = FUNC_3( VAR_1, "(%d,%d)", &VAR_2, &VAR_3 );
        FUNC_1( VAR_1 );

        if( VAR_5 < 2 )
            return 0;
        else
            return ( VAR_2 - VAR_0->i_calibrate ) * 10;

    case 131:
        VAR_1 = FUNC_2( "/sys/devices/ams/x", "re" );
        if( !VAR_1 )
        {
            return 0;
        }

        VAR_5 = FUNC_3( VAR_1, "%d", &VAR_2);
        FUNC_1( VAR_1 );

        if( VAR_5 < 1 )
            return 0;
        else
            return - VAR_2 * 30;

    case 130:
        VAR_1 = FUNC_2( "/sys/devices/platform/applesmc.768/position", "re" );
        if( !VAR_1 )
        {
            return 0;
        }

        VAR_5 = FUNC_3( VAR_1, "(%d,%d,%d)", &VAR_2, &VAR_3, &VAR_4 );
        FUNC_1( VAR_1 );

        if( VAR_5 < 3 )
            return 0;
        else
            return ( VAR_2 - VAR_0->i_calibrate ) * 10;
    default:
        FUNC_6();
    }
}
