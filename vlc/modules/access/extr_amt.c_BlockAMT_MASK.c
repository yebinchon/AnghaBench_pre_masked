
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct pollfd {int events; int fd; } ;
struct TYPE_10__ {TYPE_3__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ ssize_t ;
typedef int socklen_t ;
struct TYPE_11__ {scalar_t__* p_buffer; int i_buffer; int i_flags; } ;
typedef TYPE_2__ block_t ;
struct TYPE_12__ {scalar_t__ mtu; int sAMT; scalar_t__ tryAMT; int timeout; int fd; } ;
typedef TYPE_3__ access_sys_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,char*,scalar_t__,int ,struct sockaddr*,int*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct pollfd*,int,int ) ;

__attribute__((used)) static block_t *FUNC_8(stream_t *VAR_6, bool *restrict VAR_7)
{
    access_sys_t *VAR_8 = VAR_6->p_sys;
    ssize_t VAR_9 = 0, VAR_10 = 0, VAR_11 = VAR_3 + VAR_5 + VAR_0;


    block_t *VAR_12 = FUNC_0( VAR_8->mtu + VAR_11 );
    if ( FUNC_6( VAR_12 == ((void*)0) ) )
        return ((void*)0);

    struct pollfd VAR_13[1];

    if( VAR_8->tryAMT )
        VAR_13[0].fd = VAR_8->sAMT;
    else
        VAR_13[0].fd = VAR_8->fd;
    VAR_13[0].events = VAR_4;

    switch (FUNC_7(VAR_13, 1, VAR_8->timeout))
    {
        case 0:
            if( !VAR_8->tryAMT )
            {
                FUNC_2(VAR_6, "Native multicast receive time-out");
                if( !FUNC_3( VAR_6 ) )
                    goto error;
                break;
            }
            else
            {
                *VAR_7 = 1;
            }

        case -1:
            goto error;
    }


    if( VAR_8->tryAMT )
    {

        VAR_9 = FUNC_4( VAR_8->sAMT, VAR_12->p_buffer, VAR_8->mtu + VAR_11, 0 );


        if( VAR_9 < 0 || *(VAR_12->p_buffer) != VAR_1 )
            goto error;


        VAR_10 += VAR_11;


        if( VAR_9 < VAR_11 )
        {
            FUNC_2(VAR_6, "%zd bytes packet truncated (MTU was %zd)", VAR_9, VAR_8->mtu);
            VAR_12->i_flags |= VAR_2;
        }


        else
        {
            VAR_9 -= VAR_11;
        }
    }

    else
    {
        struct sockaddr VAR_14;
        socklen_t VAR_15 = sizeof( struct sockaddr );
        VAR_9 = FUNC_5( VAR_8->sAMT, (char *)VAR_12->p_buffer, VAR_8->mtu + VAR_11, 0, (struct sockaddr*)&VAR_14, &VAR_15 );
    }


    VAR_12->p_buffer += VAR_10;
    VAR_12->i_buffer -= VAR_10;

    return VAR_12;

error:
    FUNC_1( VAR_12 );
    return ((void*)0);
}
