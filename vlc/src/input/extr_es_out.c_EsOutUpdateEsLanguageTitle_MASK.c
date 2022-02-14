
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int psz_title; int psz_language_code; int psz_language; } ;
typedef TYPE_1__ es_out_id_t ;
struct TYPE_7__ {int psz_language; } ;
typedef TYPE_2__ es_format_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(es_out_id_t *VAR_0,
                                     const es_format_t *VAR_1)
{
    FUNC_3( VAR_0->psz_title );
    FUNC_3( VAR_0->psz_language );
    FUNC_3( VAR_0->psz_language_code );

    VAR_0->psz_language = FUNC_2( VAR_1->psz_language );
    VAR_0->psz_language_code = FUNC_1( VAR_1->psz_language );

    VAR_0->psz_title = FUNC_0(VAR_0);
}
