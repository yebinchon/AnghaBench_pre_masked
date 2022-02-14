
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int var ;


 int FUNC_0 (char**,char*,char const*,...) ;
 char* FUNC_1 () ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,int,char*,char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static char *FUNC_6 (const char *VAR_0, const char *VAR_1)
{
    char *VAR_2;
    char VAR_3[sizeof ("XDG__HOME") + FUNC_5 (VAR_0)];


    FUNC_4 (VAR_3, sizeof (VAR_3), "XDG_%s_HOME", VAR_0);

    const char *VAR_4 = FUNC_3 (VAR_3);
    if (VAR_4 != ((void*)0))
    {
        if (FUNC_0 (&VAR_2, "%s/vlc", VAR_4) == -1)
            VAR_2 = ((void*)0);
        return VAR_2;
    }

    char *VAR_5 = FUNC_1 ();
    if( VAR_5 == ((void*)0)
     || FUNC_0( &VAR_2, "%s/%s/vlc", VAR_5, VAR_1 ) == -1 )
        VAR_2 = ((void*)0);
    FUNC_2 (VAR_5);
    return VAR_2;
}
