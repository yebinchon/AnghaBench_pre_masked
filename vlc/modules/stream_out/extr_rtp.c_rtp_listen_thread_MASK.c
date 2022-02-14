
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * fd; } ;
struct TYPE_5__ {TYPE_1__ listen; int p_stream; } ;
typedef TYPE_2__ sout_stream_id_sys_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*,int,int,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static void *FUNC_6( void *VAR_0 )
{
    sout_stream_id_sys_t *VAR_1 = VAR_0;

    FUNC_0( VAR_1->listen.fd != ((void*)0) );

    for( ;; )
    {
        int VAR_2 = FUNC_1( VAR_1->p_stream, VAR_1->listen.fd );
        if( VAR_2 == -1 )
            continue;
        int VAR_3 = FUNC_5( );
        FUNC_2( VAR_1, VAR_2, 1, ((void*)0) );
        FUNC_4( VAR_3 );
    }

    FUNC_3();
}
