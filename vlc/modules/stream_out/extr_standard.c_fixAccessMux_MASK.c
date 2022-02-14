
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sout_stream_t ;


 char* FUNC_0 (char const*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char const*) ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char const*) ;
 int FUNC_5 (char*,char*,int) ;
 char* FUNC_6 (char const*,char) ;

__attribute__((used)) static int FUNC_7( sout_stream_t *VAR_0, char **VAR_1,
                          char **VAR_2, const char *VAR_3 )
{
    char *VAR_4 = *VAR_1;
    char *VAR_5 = *VAR_2;
    if( !VAR_4 )
    {
        const char *VAR_6 = VAR_3 ? FUNC_6( VAR_3, '.' ) : ((void*)0);
        if( VAR_6 )
            VAR_6++;
        const char *VAR_7 = FUNC_0( VAR_6 );

        if( !VAR_5 )
        {
            if( !VAR_7 )
            {
                FUNC_1( VAR_0, "no access _and_ no muxer" );
                return 1;
            }

            FUNC_2( VAR_0,
                    "no access _and_ no muxer, extension gives file/%s",
                    VAR_7 );
            *VAR_2 = FUNC_4("file");
            *VAR_1 = FUNC_4(VAR_7);
        }
        else
        {
            if( !FUNC_5( VAR_5, "mmsh", 4 ) )
                *VAR_1 = FUNC_4("asfh");
            else if (!FUNC_3 (VAR_5, "udp"))
                *VAR_1 = FUNC_4("ts");
            else if( VAR_7 )
                *VAR_1 = FUNC_4(VAR_7);
            else
            {
                FUNC_1( VAR_0, "no mux specified or found by extension" );
                return 1;
            }
        }
    }
    else if( !VAR_5 )
    {
        if( !FUNC_5( VAR_4, "asfh", 4 ) )
            *VAR_2 = FUNC_4("mmsh");
        else
            *VAR_2 = FUNC_4("file");
    }
    return 0;
}
