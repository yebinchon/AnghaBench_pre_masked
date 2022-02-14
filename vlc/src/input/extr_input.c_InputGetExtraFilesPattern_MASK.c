
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; int st_mode; } ;
typedef int input_thread_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (int,char**) ;
 scalar_t__ FUNC_3 (char**,char const*,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,char*) ;
 char* FUNC_8 (char const*) ;
 size_t FUNC_9 (char const*) ;
 char* FUNC_10 (char*,int *) ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;

__attribute__((used)) static void FUNC_12( input_thread_t *VAR_0,
                                       int *VAR_1, char ***VAR_2,
                                       const char *VAR_3,
                                       const char *VAR_4,
                                       const char *VAR_5,
                                       int VAR_6, int VAR_7 )
{
    int VAR_8;
    char **VAR_9;
    FUNC_2( VAR_8, VAR_9 );

    char *VAR_10 = FUNC_8( VAR_3 );
    if( !VAR_10 )
        goto exit;


    char *VAR_11 = &VAR_10[FUNC_9(VAR_10)-FUNC_9(VAR_4)];
    FUNC_4( VAR_11 >= VAR_10);
    *VAR_11 = '\0';


    for( int VAR_12 = VAR_6; VAR_12 <= VAR_7; VAR_12++ )
    {
        char *VAR_13;
        if( FUNC_3( &VAR_13, VAR_5, VAR_10, VAR_12 ) < 0 )
            break;

        char *VAR_14 = FUNC_6( VAR_13 );

        struct stat VAR_15;
        if( VAR_14 == ((void*)0) ||
            FUNC_11( VAR_14, &VAR_15 ) || !FUNC_0( VAR_15.st_mode ) || !VAR_15.st_size )
        {
            FUNC_5( VAR_14 );
            FUNC_5( VAR_13 );
            break;
        }

        FUNC_7( VAR_0, "Detected extra file `%s'", VAR_14 );

        char* VAR_16 = FUNC_10( VAR_14, ((void*)0) );
        if( VAR_16 )
            FUNC_1( VAR_8, VAR_9, VAR_16 );

        FUNC_5( VAR_14 );
        FUNC_5( VAR_13 );
    }
    FUNC_5( VAR_10 );
exit:
    *VAR_1 = VAR_8;
    *VAR_2 = VAR_9;
}
