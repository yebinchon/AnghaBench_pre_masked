
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;

int FUNC_5( vlc_object_t *VAR_1 )
{
    char *VAR_2 = FUNC_4( VAR_1, "telnet-password" );
    if( VAR_2 == ((void*)0) )
    {
        FUNC_2( VAR_1, "password not configured" );
        FUNC_3( VAR_1, "Please specify the password in the preferences." );
        return VAR_0;
    }
    FUNC_1( VAR_2 );
    return FUNC_0( VAR_1, "telnet" );
}
