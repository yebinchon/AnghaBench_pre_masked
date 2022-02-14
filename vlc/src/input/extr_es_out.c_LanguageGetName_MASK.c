
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* psz_iso639_1; int psz_eng_name; } ;
typedef TYPE_1__ iso639_lang_t ;


 TYPE_1__* FUNC_0 (char const*) ;
 TYPE_1__* FUNC_1 (char const*) ;
 TYPE_1__* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 char const* FUNC_8 (int ) ;

__attribute__((used)) static char *FUNC_9( const char *VAR_0 )
{
    const iso639_lang_t *VAR_1;

    if( VAR_0 == ((void*)0) || !FUNC_5( VAR_0, "und" ) )
    {
        return FUNC_6( "" );
    }

    if( FUNC_7( VAR_0 ) == 2 )
    {
        VAR_1 = FUNC_0( VAR_0 );
    }
    else if( FUNC_7( VAR_0 ) == 3 )
    {
        VAR_1 = FUNC_1( VAR_0 );
        if( !FUNC_5( VAR_1->psz_iso639_1, "??" ) )
        {
            VAR_1 = FUNC_2( VAR_0 );
        }
    }
    else
    {
        char *VAR_2 = FUNC_3( VAR_0 );
        VAR_1 = FUNC_0( VAR_2 );
        FUNC_4( VAR_2 );
    }

    if( !FUNC_5( VAR_1->psz_iso639_1, "??" ) )
    {
       return FUNC_6( VAR_0 );
    }
    else
    {
        return FUNC_6( FUNC_8(VAR_1->psz_eng_name) );
    }
}
