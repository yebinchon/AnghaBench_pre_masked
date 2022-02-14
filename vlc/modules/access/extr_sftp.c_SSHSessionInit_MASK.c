
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_8__ {int i_socket; int * ssh_session; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*,char*,char const*,int) ;
 int FUNC_6 (TYPE_1__*,char const*,int,int ,int ) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_4, const char *VAR_5, int VAR_6 )
{
    access_sys_t* VAR_7 = VAR_4->p_sys;


    FUNC_1( VAR_7->i_socket == -1 );
    VAR_7->i_socket = FUNC_6( VAR_4, VAR_5, VAR_6, VAR_1,
                                   0 );
    if( VAR_7->i_socket < 0 )
        goto error;


    VAR_7->ssh_session = FUNC_2();
    if( VAR_7->ssh_session == ((void*)0) )
        goto error;

    int VAR_8;
    while( ( VAR_8 = FUNC_4( VAR_7->ssh_session, VAR_7->i_socket ) )
           == VAR_0 );

    if( VAR_8 != 0 )
        goto error;


    FUNC_3( VAR_7->ssh_session, 1 );
    return VAR_3;

error:
    FUNC_5( VAR_4, "Impossible to open the connection to %s:%i",
             VAR_5, VAR_6 );
    FUNC_0( VAR_4 );
    return VAR_2;
}
