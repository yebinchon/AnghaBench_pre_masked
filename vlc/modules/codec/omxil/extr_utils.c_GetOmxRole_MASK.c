
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 char const* FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;
 char const* FUNC_2 (int ) ;
 char const* FUNC_3 (int ) ;
 int VAR_0 ;

const char *FUNC_4( vlc_fourcc_t VAR_1, enum es_format_category_e VAR_2,
                        bool VAR_3 )
{
    if(VAR_3)
        return VAR_2 == VAR_0 ?
            FUNC_2( VAR_1 ) : FUNC_0( VAR_1 );
    else
        return VAR_2 == VAR_0 ?
            FUNC_3( VAR_1 ) : FUNC_1( VAR_1 );
}
