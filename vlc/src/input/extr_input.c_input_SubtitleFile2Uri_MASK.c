
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int input_thread_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char*,char const*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 char* FUNC_5 (char const*) ;
 char* FUNC_6 (char const*,char) ;
 char* FUNC_7 (char const*,int *) ;
 int FUNC_8 (char*,struct stat*) ;

__attribute__((used)) static char *FUNC_9( input_thread_t *VAR_0,
                                     const char *VAR_1 )
{


    char *VAR_2 = ((void*)0);
    char *VAR_3 = FUNC_6( VAR_1, '.');
    if( VAR_3 && FUNC_3( VAR_3, ".sub" ) == 0 )
    {
        VAR_2 = FUNC_5( VAR_1 );
        if( VAR_2 )
        {
            struct stat VAR_4;

            VAR_3 = VAR_3 - VAR_1 + VAR_2;
            FUNC_4( VAR_3, ".idx" );

            if( !FUNC_8( VAR_2, &VAR_4 ) && FUNC_0( VAR_4.st_mode ) )
            {
                FUNC_2( VAR_0, "using %s as subtitle file instead of %s",
                         VAR_2, VAR_1 );
                VAR_1 = VAR_2;
            }
        }
    }

    char *VAR_5 = FUNC_7( VAR_1, ((void*)0) );
    FUNC_1( VAR_2 );
    return VAR_5;
}
