
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 char* FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 size_t FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 char* FUNC_9 (int *,size_t) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static inline int
FUNC_11( vlc_array_t* VAR_2,
                   char const** VAR_3,
                   char const* VAR_4 )
{
    char const* VAR_5 = ((void*)0);

    FUNC_8( VAR_2 );

    while( FUNC_2( VAR_4, "!/", 2 ) == 0 )
    {
        VAR_4 += 2;

        int VAR_6 = FUNC_1( VAR_4, "!?" );
        char* VAR_7 = FUNC_3( VAR_4, VAR_6 );

        if( FUNC_4( !VAR_7 ) || !FUNC_10( VAR_7 ) )
            goto error;

        if( FUNC_5( VAR_2, VAR_7 ) )
        {
            FUNC_0( VAR_7 );
            goto error;
        }
        VAR_4 += VAR_6;
    }

    if( *VAR_4 )
    {
        if( *VAR_4 == '!' )
            goto error;

        if( *VAR_4 == '?' && FUNC_7( VAR_2 ) )
            ++VAR_4;

        VAR_5 = VAR_4;
    }

    *VAR_3 = VAR_5;
    return VAR_1;

error:
    for( size_t VAR_8 = 0; VAR_8 < FUNC_7( VAR_2 ); ++VAR_8 )
        FUNC_0( FUNC_9( VAR_2, VAR_8 ) );
    FUNC_6( VAR_2 );
    return VAR_0;;
}
