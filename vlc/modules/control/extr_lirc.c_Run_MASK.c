
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pollfd {int events; int fd; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_5__ {int i_fd; } ;
typedef TYPE_2__ intf_sys_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static void *FUNC_4( void *VAR_3 )
{
    intf_thread_t *VAR_4 = VAR_3;
    intf_sys_t *VAR_5 = VAR_4->p_sys;

    struct pollfd VAR_6;
    VAR_6.fd = VAR_5->i_fd;
    VAR_6.events = VAR_1;

    for( ;; )
    {

        if( FUNC_1( &VAR_6, 1, -1 ) == -1 )
        {
            if( VAR_2 == VAR_0 )
                continue;
            break;
        }


        int VAR_7 = FUNC_3();
        FUNC_0( VAR_4 );
        FUNC_2(VAR_7);
    }
    return ((void*)0);
}
