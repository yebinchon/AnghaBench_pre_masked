
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* psz_eng_name; char const* psz_iso639_1; char const* psz_iso639_2T; char const* psz_iso639_2B; } ;
typedef TYPE_1__ iso639_lang_t ;
typedef int demux_t ;


 char const* VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const*,char*) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (int *,char const*) ;

__attribute__((used)) static const char *FUNC_4( demux_t *VAR_2, const char *VAR_3 )
{
    const iso639_lang_t *VAR_4;
    char *VAR_5;
    char *VAR_6;

    VAR_5 = FUNC_3( VAR_2, VAR_3 );
    if( !VAR_5 )
        return VAR_0;



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
        return VAR_4->psz_iso639_2T;

    return VAR_0;
}
