
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_fourcc_t ;
struct vlc_avcodec_fourcc {scalar_t__ i_fourcc; unsigned int i_codec; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 size_t FUNC_0 (struct vlc_avcodec_fourcc*) ;



 struct vlc_avcodec_fourcc* VAR_0 ;
 struct vlc_avcodec_fourcc* VAR_1 ;
 struct vlc_avcodec_fourcc* VAR_2 ;
 scalar_t__ FUNC_1 (int,scalar_t__) ;
 char* FUNC_2 (int,scalar_t__) ;

bool FUNC_3( enum es_format_category_e VAR_3, vlc_fourcc_t VAR_4,
                     unsigned *VAR_5, const char **VAR_6 )
{
    const struct vlc_avcodec_fourcc *VAR_7;
    size_t VAR_8;

    switch( VAR_3 )
    {
        case 128:
            VAR_7 = VAR_2;
            VAR_8 = FUNC_0(VAR_2);
            break;
        case 130:
            VAR_7 = VAR_0;
            VAR_8 = FUNC_0(VAR_0);
            break;
        case 129:
            VAR_7 = VAR_1;
            VAR_8 = FUNC_0(VAR_1);
            break;
        default:
            VAR_7 = ((void*)0);
            VAR_8 = 0;
    }

    VAR_4 = FUNC_1( VAR_3, VAR_4 );

    for( size_t VAR_9 = 0; VAR_9 < VAR_8; VAR_9++ )
    {
        if( VAR_7[VAR_9].i_fourcc == VAR_4 )
        {
            if( VAR_5 != ((void*)0) )
                *VAR_5 = VAR_7[VAR_9].i_codec;
            if( VAR_6 )
                *VAR_6 = FUNC_2( VAR_3, VAR_4 );
            return 1;
        }
    }
    return 0;
}
