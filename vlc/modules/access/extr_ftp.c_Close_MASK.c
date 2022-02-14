
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int p_creds; int url; } ;
typedef TYPE_1__ access_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,char*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8( vlc_object_t *VAR_0, access_sys_t *VAR_1 )
{
    FUNC_4( VAR_0, "stopping stream" );
    FUNC_3( VAR_0, VAR_1 );

    if( FUNC_2( VAR_0, VAR_1, "QUIT" ) < 0 )
    {
        FUNC_5( VAR_0, "cannot quit" );
    }
    else
    {
        FUNC_1( VAR_0, VAR_1, ((void*)0), ((void*)0) );
    }

    FUNC_0( VAR_1 );


    FUNC_6( &VAR_1->url );
    FUNC_7( VAR_1->p_creds );
}
