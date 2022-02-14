
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * psz_iso639_1; int * psz_eng_name; int * psz_iso639_2B; int * psz_iso639_2T; } ;
typedef TYPE_1__ iso639_lang_t ;
typedef int demux_t ;


 int * VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (int *) ;
 char* FUNC_4 (int *,char const*) ;

__attribute__((used)) static char *FUNC_5( demux_t *VAR_2, const char *VAR_3 )
{
    const iso639_lang_t *VAR_4;
    char *VAR_5;
    char *VAR_6;

    VAR_5 = FUNC_4( VAR_2, VAR_3 );
    if( !VAR_5 )
        return FUNC_3(VAR_0);



    if( ( VAR_6 = FUNC_2( VAR_5, ',' ) ) )
        *VAR_6 = '\0';

    for( VAR_4 = VAR_1; VAR_4->psz_eng_name != ((void*)0); VAR_4++ )
    {
        if( *VAR_5 == '\0' )
            continue;
        if( !FUNC_1( VAR_4->psz_eng_name, VAR_5 ) ||
            !FUNC_1( VAR_4->psz_iso639_1, VAR_5 ) ||
            !FUNC_1( VAR_4->psz_iso639_2T, VAR_5 ) ||
            !FUNC_1( VAR_4->psz_iso639_2B, VAR_5 ) )
            break;
    }

    FUNC_0( VAR_5 );

    if( VAR_4->psz_eng_name != ((void*)0) )
        return FUNC_3( VAR_4->psz_iso639_1 );

    return FUNC_3(VAR_0);
}
