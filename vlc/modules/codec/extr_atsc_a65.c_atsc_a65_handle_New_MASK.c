
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * iconv_u16be; int * psz_lang; } ;
typedef TYPE_1__ atsc_a65_handle_t ;


 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;

atsc_a65_handle_t *FUNC_3( const char *VAR_0 )
{
    atsc_a65_handle_t *VAR_1 = FUNC_0( sizeof(*VAR_1) );
    if( VAR_1 )
    {
        if( VAR_0 && FUNC_2(VAR_0) > 2 )
            VAR_1->psz_lang = FUNC_1( VAR_0 );
        else
            VAR_1->psz_lang = ((void*)0);

        VAR_1->iconv_u16be = ((void*)0);
    }
    return VAR_1;
}
