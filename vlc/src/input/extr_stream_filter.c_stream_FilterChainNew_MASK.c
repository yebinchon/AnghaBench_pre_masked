
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stream_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char const*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*,char**) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,char const*) ;

stream_t *FUNC_6( stream_t *VAR_0, const char *VAR_1 )
{

    char *VAR_2 = FUNC_2( VAR_1 );
    if( FUNC_4(VAR_2 == ((void*)0)) )
        return VAR_0;

    char *VAR_3;
    for( const char *VAR_4 = FUNC_3( VAR_2, ":", &VAR_3 );
         VAR_4 != ((void*)0);
         VAR_4 = FUNC_3( ((void*)0), ":", &VAR_3 ) )
    {
        stream_t *VAR_5 = FUNC_5( VAR_0, VAR_4 );
        if( VAR_5 != ((void*)0) )
            VAR_0 = VAR_5;
        else
            FUNC_1( VAR_0, "cannot insert stream filter %s", VAR_4 );
    }
    FUNC_0( VAR_2 );

    return VAR_0;
}
