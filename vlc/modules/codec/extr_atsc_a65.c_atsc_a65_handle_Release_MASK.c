
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* psz_lang; scalar_t__ iconv_u16be; } ;
typedef TYPE_1__ atsc_a65_handle_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2( atsc_a65_handle_t *VAR_0 )
{
    if( VAR_0->iconv_u16be )
        FUNC_1( VAR_0->iconv_u16be );
    FUNC_0( VAR_0->psz_lang );
    FUNC_0( VAR_0 );
}
