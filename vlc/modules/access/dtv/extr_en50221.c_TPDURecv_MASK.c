
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct pollfd {int events; int revents; int fd; } ;
struct TYPE_3__ {int* pb_tc_has_data; int obj; int fd; } ;
typedef TYPE_1__ cam_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct pollfd*,int,int ) ;
 int FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (scalar_t__) ;
 int* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7( cam_t *VAR_9, uint8_t VAR_10, uint8_t *VAR_11,
                     uint8_t *VAR_12, int *VAR_13 )
{
    uint8_t VAR_14 = VAR_10 + 1;
    int VAR_15;
    struct pollfd VAR_16[1];

    VAR_16[0].fd = VAR_9->fd;
    VAR_16[0].events = VAR_4;

    while( FUNC_3(VAR_16, 1, VAR_0 ) == -1 )
        if( VAR_8 != VAR_2 )
        {
            FUNC_2( VAR_9->obj, "poll error: %s", FUNC_5(VAR_8) );
            return VAR_6;
        }

    if ( !(VAR_16[0].revents & VAR_4) )
    {
        FUNC_2( VAR_9->obj, "CAM device poll time-out" );
        return VAR_6;
    }

    if ( VAR_13 == ((void*)0) )
    {
        VAR_12 = FUNC_6( VAR_3 );
    }

    for ( ; ; )
    {
        VAR_15 = FUNC_4( VAR_9->fd, VAR_12, VAR_3 );

        if ( VAR_15 >= 0 || VAR_8 != VAR_2 )
            break;
    }

    if ( VAR_15 < 5 )
    {
        FUNC_2( VAR_9->obj, "cannot read from CAM device (%d): %s", VAR_15,
                 FUNC_5(VAR_8) );
        if( VAR_13 == ((void*)0) )
            FUNC_1( VAR_12 );
        return VAR_6;
    }

    if ( VAR_12[1] != VAR_14 )
    {
        FUNC_2( VAR_9->obj, "invalid read from CAM device (%d instead of %d)",
                 VAR_12[1], VAR_14 );
        if( VAR_13 == ((void*)0) )
            FUNC_1( VAR_12 );
        return VAR_6;
    }

    *VAR_11 = VAR_12[2];
    VAR_9->pb_tc_has_data[VAR_10] = (VAR_15 >= 4
                                      && VAR_12[VAR_15 - 4] == VAR_5
                                      && VAR_12[VAR_15 - 3] == 2
                                      && (VAR_12[VAR_15 - 1] & VAR_1))
                                        ? 1 : 0;

    FUNC_0( 0, VAR_12, VAR_15 );

    if ( VAR_13 == ((void*)0) )
        FUNC_1( VAR_12 );
    else
        *VAR_13 = VAR_15;

    return VAR_7;
}
