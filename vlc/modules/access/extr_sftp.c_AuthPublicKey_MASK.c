
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int ssh_session; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ,char const*,char*,char*,int *) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_2, const char *VAR_3, const char *VAR_4 )
{
    access_sys_t* VAR_5 = VAR_2->p_sys;
    int VAR_6 = VAR_0;
    char *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);

    if( !VAR_4 || !VAR_4[0] )
        return VAR_6;

    if( FUNC_0( &VAR_7, "%s/.ssh/id_rsa.pub", VAR_3 ) == -1 ||
        FUNC_0( &VAR_8, "%s/.ssh/id_rsa", VAR_3 ) == -1 )
        goto bailout;

    if( FUNC_2( VAR_5->ssh_session, VAR_4, VAR_7, VAR_8, ((void*)0) ) )
    {
        FUNC_3( VAR_2, "Public key authentication failed" );
        goto bailout;
    }

    FUNC_4( VAR_2, "Public key authentication succeeded" );
    VAR_6 = VAR_1;

 bailout:
    FUNC_1( VAR_7 );
    FUNC_1( VAR_8 );
    return VAR_6;
}
