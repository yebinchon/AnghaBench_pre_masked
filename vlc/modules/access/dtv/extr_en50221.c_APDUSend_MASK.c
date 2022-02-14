
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__ i_ca_type; int obj; int fd; } ;
typedef TYPE_1__ cam_t ;
struct TYPE_7__ {int length; int * msg; } ;
typedef TYPE_2__ ca_msg_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int *,int) ;
 int * FUNC_1 (int *,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,TYPE_2__*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (size_t) ;

__attribute__((used)) static int FUNC_8( cam_t * VAR_4, int VAR_5, int VAR_6,
                     uint8_t *VAR_7, size_t VAR_8 )
{
    uint8_t *VAR_9 = FUNC_7( VAR_8 + 12 );
    uint8_t *VAR_10 = VAR_9;
    ca_msg_t VAR_11;
    int VAR_12;

    *VAR_10++ = (VAR_6 >> 16);
    *VAR_10++ = (VAR_6 >> 8) & 0xff;
    *VAR_10++ = VAR_6 & 0xff;
    VAR_10 = FUNC_1( VAR_10, VAR_8 );
    if ( VAR_8 )
        FUNC_4( VAR_10, VAR_7, VAR_8 );
    if ( VAR_4->i_ca_type == VAR_0 )
    {
        VAR_12 = FUNC_0( VAR_4, VAR_5, VAR_9, VAR_8 + VAR_10 - VAR_9 );
    }
    else
    {
        if ( VAR_8 + VAR_10 - VAR_9 > 256 )
        {
            FUNC_5( VAR_4->obj, "CAM: apdu overflow" );
            VAR_12 = VAR_2;
        }
        else
        {
            VAR_11.length = VAR_8 + VAR_10 - VAR_9;
            if ( VAR_8 == 0 ) VAR_11.length=3;
            FUNC_4( VAR_11.msg, VAR_9, VAR_8 + VAR_10 - VAR_9 );
            VAR_12 = FUNC_3( VAR_4->fd, VAR_1, &VAR_11 );
            if ( VAR_12 < 0 )
            {
                FUNC_5( VAR_4->obj, "Error sending to CAM: %s",
                         FUNC_6(VAR_3) );
                VAR_12 = VAR_2;
            }
        }
    }
    FUNC_2( VAR_9 );
    return VAR_12;
}
