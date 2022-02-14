
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct pollfd {int events; int fd; } ;
struct TYPE_7__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;
typedef int relayAddr ;
struct TYPE_8__ {scalar_t__ glob_ulNonce; int sAMT; int timeout; } ;
typedef TYPE_3__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct sockaddr*,int) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ,char*,int,int ,struct sockaddr*,int*) ;
 int FUNC_7 (struct pollfd*,int,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static bool FUNC_9( stream_t *VAR_8 )
{
    char VAR_9[VAR_6];
    access_sys_t *VAR_10 = VAR_8->p_sys;

    FUNC_3( VAR_9, 0, VAR_6 );

    struct pollfd VAR_11[1];

    VAR_11[0].fd = VAR_10->sAMT;
    VAR_11[0].events = VAR_5;

    switch( FUNC_7(VAR_11, 1, VAR_10->timeout) )
    {
        case 0:
            FUNC_4(VAR_8, "AMT relay advertisement receive time-out");

        case -1:
            return 0;
    }

    struct sockaddr VAR_12;
    socklen_t VAR_13 = sizeof( struct sockaddr );
    ssize_t VAR_14 = FUNC_6( VAR_10->sAMT, VAR_9, VAR_6, 0, &VAR_12, &VAR_13 );

    if (VAR_14 < 0)
    {
        FUNC_4(VAR_8, "Received message length less than zero");
        return 0;
    }


    struct {
        uint32_t ulRcvNonce;
        uint32_t ipAddr;
        uint8_t type;
    } VAR_15;

    FUNC_2( &VAR_15.type, &VAR_9[0], VAR_3 );
    if( VAR_15.type != VAR_2 )
    {
        FUNC_4( VAR_8, "Received message not an AMT relay advertisement, ignoring. ");
        return 0;
    }

    FUNC_2( &VAR_15.ulRcvNonce, &VAR_9[VAR_4], VAR_4 );
    if( VAR_10->glob_ulNonce != VAR_15.ulRcvNonce )
    {
        FUNC_4( VAR_8, "Discovery nonces differ! currNonce:%x rcvd%x", VAR_10->glob_ulNonce, (uint32_t) FUNC_5(VAR_15.ulRcvNonce) );
        return 0;
    }

    FUNC_2( &VAR_15.ipAddr, &VAR_9[8], 4 );

    struct sockaddr_in VAR_16 =
    {
        .sin_family = VAR_0,
        .sin_addr.s_addr = VAR_15.ipAddr,
        .sin_port = FUNC_1( VAR_1 ),
    };

    int VAR_17 = FUNC_0( VAR_10->sAMT, (struct sockaddr *)&VAR_16, sizeof(VAR_16) );
    if( VAR_17 < 0 )
    {
        FUNC_4( VAR_8, "Error connecting AMT UDP socket: %s", FUNC_8(VAR_7) );
        return 0;
    }

    return 1;
}
