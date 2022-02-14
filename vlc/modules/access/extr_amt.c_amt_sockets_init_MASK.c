
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int s_addr; } ;
struct sockaddr_in {void* sin_family; void* sin_port; TYPE_5__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
typedef int rcvAddr ;
typedef int enable ;
struct TYPE_7__ {void* sin_port; void* sin_family; } ;
struct TYPE_9__ {int sAMT; int sQuery; TYPE_1__ relayDiscoAddr; } ;
typedef TYPE_3__ access_sys_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int VAR_8 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,int ,TYPE_5__*) ;
 int FUNC_3 (struct sockaddr_in*,int ,int) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int ,int ,int*,int) ;
 void* FUNC_7 (void*,int ,int ,int) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9( stream_t *VAR_9 )
{
    struct sockaddr_in VAR_10;
    access_sys_t *VAR_11 = VAR_9->p_sys;
    FUNC_3( &VAR_10, 0, sizeof(struct sockaddr_in) );
    int VAR_12 = 0, VAR_13 = 0;


    VAR_11->relayDiscoAddr.sin_family = VAR_0;
    VAR_11->relayDiscoAddr.sin_port = FUNC_1( VAR_1 );


    VAR_11->sAMT = FUNC_7( VAR_0, VAR_5, VAR_3, 1 );
    if( VAR_11->sAMT == -1 )
    {
        FUNC_4( VAR_9, "Failed to create UDP socket" );
        goto error;
    }

    VAR_13 = FUNC_6(VAR_11->sAMT, VAR_6, VAR_7, &VAR_12, sizeof(VAR_12));
    if(VAR_13 < 0)
    {
        FUNC_4( VAR_9, "Couldn't make socket reusable");
        goto error;
    }

    VAR_10.sin_family = VAR_0;
    VAR_10.sin_port = FUNC_1( 0 );
    VAR_10.sin_addr.s_addr = VAR_2;

    if( FUNC_0(VAR_11->sAMT, (struct sockaddr *)&VAR_10, sizeof(VAR_10) ) != 0 )
    {
        FUNC_4( VAR_9, "Failed to bind UDP socket error: %s", FUNC_8(VAR_8) );
        goto error;
    }

    VAR_11->sQuery = FUNC_7( VAR_0, VAR_5, VAR_3, 1 );
    if( VAR_11->sQuery == -1 )
    {
        FUNC_4( VAR_9, "Failed to create query socket" );
        goto error;
    }


    struct sockaddr_in VAR_14 =
    {
        .sin_family = VAR_0,
        .sin_port = FUNC_1( 0 ),
        .sin_addr.s_addr = VAR_2,
    };

    if( FUNC_0(VAR_11->sQuery, (struct sockaddr *)&VAR_14, sizeof(struct sockaddr) ) != 0 )
    {
        FUNC_4( VAR_9, "Failed to bind query socket" );
        goto error;
    }

    struct sockaddr_in VAR_15 =
    {
        .sin_family = VAR_0,
        .sin_port = FUNC_1( 9124 ),
    };

    VAR_13 = FUNC_2( VAR_0, VAR_4, &VAR_15.sin_addr );
    if( VAR_13 != 1 )
    {
        FUNC_4( VAR_9, "Could not convert loopback address" );
        goto error;
    }


    return 0;

error:
    if( VAR_11->sAMT != -1 )
    {
        FUNC_5( VAR_11->sAMT );
        VAR_11->sAMT = -1;
    }

    if( VAR_11->sQuery != -1 )
    {
        FUNC_5( VAR_11->sQuery );
        VAR_11->sQuery = -1;
    }
    return -1;
}
