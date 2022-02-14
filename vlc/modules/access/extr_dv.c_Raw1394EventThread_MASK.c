
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_9__ {scalar_t__ p_access; } ;
typedef TYPE_2__ event_thread_t ;
struct TYPE_11__ {int revents; } ;
struct TYPE_10__ {int p_raw1394; TYPE_5__ raw1394_poll; int i_node; } ;
typedef TYPE_3__ access_sys_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_5__*,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,TYPE_2__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__) ;

__attribute__((used)) static void* FUNC_10( void *VAR_5 )
{
    event_thread_t *VAR_6 = (event_thread_t *)VAR_5;
    stream_t *VAR_7 = (stream_t *) VAR_6->p_access;
    access_sys_t *VAR_8 = (access_sys_t *) VAR_7->p_sys;
    int VAR_9 = 0;
    int VAR_10 = FUNC_8();

    FUNC_0( VAR_7, VAR_8->i_node );
    FUNC_6( VAR_3, VAR_6 );
    FUNC_7( VAR_10 );

    for( ;; )
    {
        while( ( VAR_9 = FUNC_2( &VAR_8->raw1394_poll, 1, -1 ) ) < 0 )
        {
            if( VAR_4 != VAR_0 )
                FUNC_1( VAR_7, "poll error: %s", FUNC_9(VAR_4) );
        }

        if( VAR_9 > 0 && ( ( VAR_8->raw1394_poll.revents & VAR_1 )
                         || ( VAR_8->raw1394_poll.revents & VAR_2 ) ) )
        {
            VAR_10 = FUNC_8();
            VAR_9 = FUNC_3( VAR_8->p_raw1394 );
            FUNC_7( VAR_10 );
        }
    }

    FUNC_5();
    FUNC_4();
}
