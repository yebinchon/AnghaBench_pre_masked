
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pollfd {scalar_t__ revents; void* events; int fd; } ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_8__ {unsigned int i_timeout; scalar_t__ i_buffer_tcp; scalar_t__ i_proto; scalar_t__ i_buffer_udp; scalar_t__ buffer_tcp; scalar_t__ buffer_udp; int i_handle_udp; int i_handle_tcp; } ;
typedef TYPE_2__ access_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,scalar_t__,scalar_t__,...) ;
 int FUNC_1 (TYPE_1__*,char*,...) ;
 int FUNC_2 (TYPE_1__*,char*,int,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct pollfd*,unsigned int,unsigned int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_5 )
{
    access_sys_t *VAR_6 = VAR_5->p_sys;
    int VAR_7;
    struct pollfd VAR_8[2];
    unsigned VAR_9 = VAR_6->i_timeout, VAR_10 = 0;


    ssize_t VAR_11, VAR_12;
    ssize_t VAR_13, VAR_14;

    VAR_11 = VAR_1/2 - VAR_6->i_buffer_tcp;

    if( VAR_6->i_proto == VAR_2 )
    {
        VAR_12 = VAR_1/2 - VAR_6->i_buffer_udp;
    }
    else
    {
        VAR_12 = 0;
    }

    if( ( VAR_12 <= 0 ) && ( VAR_11 <= 0 ) )
    {
        FUNC_2( VAR_5, "nothing to read %d:%d", (int)VAR_11, (int)VAR_12 );
        return 0;
    }
    else
    {

    }


    if( VAR_11 > 0 )
    {
        VAR_8[VAR_10].fd = VAR_6->i_handle_tcp;
        VAR_8[VAR_10].events = VAR_3;
        VAR_10++;
    }
    if( VAR_12 > 0 )
    {
        VAR_8[VAR_10].fd = VAR_6->i_handle_udp;
        VAR_8[VAR_10].events = VAR_3;
        VAR_10++;
    }


    if( VAR_6->i_buffer_tcp > 0 || VAR_6->i_buffer_udp > 0 )
        VAR_9 = 2000;

    do
    {
        if( FUNC_4() )
            return -1;

        VAR_7 = FUNC_5(VAR_8, VAR_10, VAR_9);
    }
    while( VAR_7 < 0 && VAR_4 == VAR_0 );

    if( VAR_7 == 0 )
    {
        FUNC_1(VAR_5, "no data received");
        return -1;
    }

    if( VAR_7 < 0 )
    {
        FUNC_1( VAR_5, "network poll error: %s", FUNC_6(VAR_4) );
        return -1;
    }

    VAR_13 = VAR_14 = 0;

    if( ( VAR_11 > 0 ) && VAR_8[0].revents )
    {
        VAR_13 =
            FUNC_3( VAR_6->i_handle_tcp,
                  VAR_6->buffer_tcp + VAR_6->i_buffer_tcp,
                  VAR_11 + VAR_1/2, 0 );
    }

    if( VAR_12 > 0 && VAR_8[VAR_11 > 0].revents )
    {
        VAR_14 = FUNC_3( VAR_6->i_handle_udp,
                           VAR_6->buffer_udp + VAR_6->i_buffer_udp,
                           VAR_12 + VAR_1/2, 0 );
    }
    if( VAR_13 > 0 ) VAR_6->i_buffer_tcp += (size_t) VAR_13;
    if( VAR_14 > 0 ) VAR_6->i_buffer_udp += (size_t) VAR_14;

    return VAR_13 + VAR_14;
}
