
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int i_calibrate; scalar_t__ i_sum; scalar_t__ i; int p_oldx; int sensor; int unimotion_hw; } ;
typedef TYPE_1__ motion_sensors_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,char*,int*,int*) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int ) ;

motion_sensors_t *FUNC_11( vlc_object_t *VAR_5 )
{
    FILE *VAR_6;
    int VAR_7 = 0, VAR_8 = 0;

    motion_sensors_t *VAR_9 = FUNC_6( sizeof( motion_sensors_t ) );
    if( FUNC_10( VAR_9 == ((void*)0) ) )
    {
        return ((void*)0);
    }

    if( FUNC_0( "/sys/devices/platform/hdaps/position", VAR_3 ) == 0
        && ( VAR_6 = FUNC_3( "/sys/devices/platform/hdaps/calibrate", "re" ) ) )
    {

        VAR_9->i_calibrate = FUNC_5( VAR_6, "(%d,%d)", &VAR_7, &VAR_8 ) == 2 ? VAR_7: 0;
        FUNC_2( VAR_6 );
        VAR_9->sensor = VAR_2;
        FUNC_8( VAR_5, "HDAPS motion detection correctly loaded" );
    }
    else if( FUNC_0( "/sys/devices/ams/x", VAR_3 ) == 0 )
    {

        VAR_9->sensor = VAR_0;
        FUNC_8( VAR_5, "AMS motion detection correctly loaded" );
    }
    else if( FUNC_0( "/sys/devices/platform/applesmc.768/position", VAR_3 ) == 0
             && ( VAR_6 = FUNC_3( "/sys/devices/platform/applesmc.768/calibrate", "re" ) ) )
    {


        VAR_9->i_calibrate = FUNC_5( VAR_6, "(%d,%d)", &VAR_7, &VAR_8 ) == 2 ? VAR_7: 0;
        FUNC_2( VAR_6 );
        VAR_9->sensor = VAR_1;
        FUNC_8( VAR_5, "Apple SMC motion detection correctly loaded" );
    }







    else
    {

        FUNC_9( VAR_5, "No motion sensor available" );
        FUNC_4( VAR_9 );
        return ((void*)0);
    }

    FUNC_7( VAR_9->p_oldx, 0, sizeof( VAR_9->p_oldx ) );
    VAR_9->i = 0;
    VAR_9->i_sum = 0;
    return VAR_9;
}
