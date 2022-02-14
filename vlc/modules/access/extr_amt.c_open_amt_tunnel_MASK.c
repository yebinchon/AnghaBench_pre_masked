
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct sockaddr_in {int sin_addr; } ;
struct addrinfo {scalar_t__ ai_addr; struct addrinfo* ai_next; int ai_socktype; int ai_family; } ;
struct TYPE_21__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ stream_t ;
typedef int hints ;
typedef int block_t ;
struct TYPE_19__ {scalar_t__ s_addr; } ;
struct TYPE_20__ {TYPE_2__ sin_addr; } ;
struct TYPE_18__ {int sin_addr; } ;
struct TYPE_22__ {char* relay; int tryAMT; char* relayDisco; int updateTimer; TYPE_3__ mcastSrcAddr; TYPE_1__ relayDiscoAddr; } ;
typedef TYPE_5__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_4__*,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,char*,int) ;
 int FUNC_6 (TYPE_4__*,char*) ;
 int FUNC_7 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 int FUNC_10 (struct addrinfo*) ;
 int FUNC_11 (int) ;
 int * FUNC_12 (int ,int *,char*,int) ;
 int FUNC_13 (char*,char*,int) ;
 int FUNC_14 (struct addrinfo*,int ,int) ;
 int FUNC_15 (TYPE_4__*,char*,...) ;
 int FUNC_16 (TYPE_4__*,char*,...) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (char*,int ,struct addrinfo*,struct addrinfo**) ;
 int FUNC_19 () ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ) ;

__attribute__((used)) static bool FUNC_22( stream_t *VAR_5 )
{
    struct addrinfo VAR_6, *VAR_7, *VAR_8;
    access_sys_t *VAR_9 = VAR_5->p_sys;

    FUNC_14( &VAR_6, 0, sizeof( VAR_6 ));
    VAR_6.ai_family = VAR_0;
    VAR_6.ai_socktype = VAR_3;

    FUNC_15( VAR_5, "Attempting AMT to %s...", VAR_9->relay);
    VAR_9->tryAMT = 1;


    int VAR_10 = FUNC_18( VAR_9->relay, VAR_1, &VAR_6, &VAR_7 );


    if( VAR_10 != 0 )
    {
        FUNC_16( VAR_5, "Could not find relay %s, reason: %s", VAR_9->relay, FUNC_11(VAR_10) );
        goto error;
    }


    for (VAR_8 = VAR_7; VAR_8 != ((void*)0) && !FUNC_19(); VAR_8 = VAR_8->ai_next)
    {
        struct sockaddr_in *VAR_11 = (struct sockaddr_in *) VAR_8->ai_addr;
        char VAR_12[VAR_2];


        if( FUNC_17( FUNC_12(VAR_0, &(VAR_11->sin_addr), VAR_12, VAR_2) == ((void*)0) ) )
        {
            int VAR_13 = VAR_4;
            FUNC_16(VAR_5, "Could not convert relay ip to binary representation: %s", FUNC_11(VAR_13));
            goto error;
        }


        FUNC_13(VAR_9->relayDisco, VAR_12, VAR_2);
        if( FUNC_17( VAR_9->relayDisco == ((void*)0) ) )
        {
            goto error;
        }

        FUNC_15( VAR_5, "Trying AMT Server: %s", VAR_9->relayDisco);


        VAR_9->relayDiscoAddr.sin_addr = VAR_11->sin_addr;

        if( FUNC_8( VAR_5 ) != 0 )
            continue;


        FUNC_6( VAR_5, VAR_12 );
        FUNC_15( VAR_5, "Sent relay AMT discovery message to %s", VAR_12 );

        if( !FUNC_3( VAR_5 ) )
        {
            FUNC_16( VAR_5, "Error receiving AMT relay advertisement msg from %s, skipping", VAR_12 );
            goto error;
        }
        FUNC_15( VAR_5, "Received AMT relay advertisement from %s", VAR_12 );

        FUNC_7( VAR_5, VAR_12 );
        FUNC_15( VAR_5, "Sent AMT relay request message to %s", VAR_12 );

        if( !FUNC_4( VAR_5 ) )
        {
            FUNC_16( VAR_5, "Could not receive AMT relay membership query from %s, reason: %s", VAR_12, FUNC_20(VAR_4));
            goto error;
        }
        FUNC_15( VAR_5, "Received AMT relay membership query from %s", VAR_12 );


        if( VAR_9->mcastSrcAddr.sin_addr.s_addr )
        {
            if( FUNC_2( VAR_5 ) != 0 )
            {
                FUNC_16( VAR_5, "Error joining SSM %s", FUNC_20(VAR_4) );
                goto error;
            }
            FUNC_15( VAR_5, "Joined SSM" );
        }


        else {
            if( FUNC_1( VAR_5 ) != 0 )
            {
                FUNC_16( VAR_5, "Error joining ASM %s", FUNC_20(VAR_4) );
                goto error;
            }
            FUNC_15( VAR_5, "Joined ASM group" );
        }



        FUNC_21( VAR_9->updateTimer );

        FUNC_5( VAR_5, VAR_9->relayDisco, 0 );
        bool VAR_14=0;
        block_t *VAR_15;


        if ( !(VAR_15 = FUNC_0( VAR_5, &VAR_14 )) )
        {
            FUNC_16( VAR_5, "Unable to receive UDP packet from AMT relay %s for multicast group", VAR_12 );
            continue;
        }
        else
        {
            FUNC_9( VAR_15 );
            FUNC_15( VAR_5, "Got UDP packet from multicast group via AMT relay %s, continuing...", VAR_12 );
            break;
        }
    }


    if (VAR_8 == ((void*)0))
    {
        FUNC_16( VAR_5, "No AMT servers responding" );
        goto error;
    }


    FUNC_10( VAR_7 );
    return 1;

error:
    FUNC_21( VAR_9->updateTimer );
    if( VAR_7 )
        FUNC_10( VAR_7 );
    return 0;
}
