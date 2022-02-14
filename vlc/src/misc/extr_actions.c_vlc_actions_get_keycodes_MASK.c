
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int uint_fast32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char*,char const*) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*,char**) ;
 scalar_t__ FUNC_5 (int) ;
 char* FUNC_6 (int *,char*) ;
 int * FUNC_7 (size_t,int) ;
 int FUNC_8 (char*) ;

size_t
FUNC_9(vlc_object_t *VAR_0, const char *VAR_1,
                        bool VAR_2, uint_fast32_t **VAR_3)
{
    char VAR_4[12 + FUNC_3( VAR_1 )];
    FUNC_2( VAR_4, "%skey-%s", VAR_2 ? "global-" : "", VAR_1 );

    *VAR_3 = ((void*)0);

    char *VAR_5 = FUNC_6( VAR_0, VAR_4 );
    if( VAR_5 == ((void*)0) )
        return 0;

    size_t VAR_6 = 0;
    for( const char* VAR_7 = VAR_5; *VAR_7; ++VAR_7 )
    {
        if( *VAR_7 == '\t' )
            ++VAR_6;
    }
    ++VAR_6;
    *VAR_3 = FUNC_7( VAR_6, sizeof( **VAR_3 ) );
    if( FUNC_5( !*VAR_3 ) )
    {
        FUNC_1( VAR_5 );
        return 0;
    }
    size_t VAR_8 = 0;
    for( char *VAR_9, *VAR_10 = FUNC_4( VAR_5, "\t", &VAR_9 );
         VAR_10 != ((void*)0);
         VAR_10 = FUNC_4( ((void*)0), "\t", &VAR_9 ), ++VAR_8 )
    {
        (*VAR_3)[VAR_8] = FUNC_8( VAR_10 );
    }
    FUNC_0( VAR_8 == VAR_6 );
    FUNC_1( VAR_5 );
    return VAR_6;
}
