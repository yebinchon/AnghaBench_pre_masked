
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_eng_name; char* psz_iso639_1; char* psz_iso639_2T; char* psz_iso639_2B; } ;
typedef TYPE_1__ iso639_lang_t ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *FUNC_2( const char *VAR_1 )
{
    const iso639_lang_t *VAR_2;

    if( VAR_1 == ((void*)0) || *VAR_1 == '\0' )
        return FUNC_1("??");

    for( VAR_2 = VAR_0; VAR_2->psz_eng_name != ((void*)0); VAR_2++ )
    {
        if( !FUNC_0( VAR_2->psz_eng_name, VAR_1 ) ||
            !FUNC_0( VAR_2->psz_iso639_1, VAR_1 ) ||
            !FUNC_0( VAR_2->psz_iso639_2T, VAR_1 ) ||
            !FUNC_0( VAR_2->psz_iso639_2B, VAR_1 ) )
            return FUNC_1( VAR_2->psz_iso639_1 );
    }

    return FUNC_1("??");
}
