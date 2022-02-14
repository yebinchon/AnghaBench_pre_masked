
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char const*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7 (vlc_object_t *VAR_1, char const *VAR_2)
{
    FUNC_1();

    if( VAR_2 && !FUNC_6( VAR_2, "help" ) )
    {
        FUNC_5(FUNC_3(VAR_0), "vlc");
        FUNC_2( VAR_1, "=core" );
        FUNC_4();
    }
    else if( VAR_2 && !FUNC_6( VAR_2, "longhelp" ) )
    {
        FUNC_5(FUNC_3(VAR_0), "vlc");
        FUNC_2( VAR_1, ((void*)0) );
        FUNC_4();
    }
    else if( VAR_2 && !FUNC_6( VAR_2, "full-help" ) )
    {
        FUNC_5(FUNC_3(VAR_0), "vlc");
        FUNC_2( VAR_1, ((void*)0) );
    }
    else if( VAR_2 )
    {
        FUNC_2( VAR_1, VAR_2 );
    }

    FUNC_0();
}
