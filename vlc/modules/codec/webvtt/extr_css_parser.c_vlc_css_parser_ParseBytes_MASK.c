
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yyscan_t ;
typedef int vlc_css_parser_t ;
typedef int uint8_t ;
typedef int YY_BUFFER_STATE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

bool FUNC_5( vlc_css_parser_t *VAR_0, const uint8_t *VAR_1, size_t VAR_2 )
{
    yyscan_t VAR_3;
    FUNC_3(&VAR_3);

    YY_BUFFER_STATE VAR_4 = FUNC_1( (const char*) VAR_1, VAR_2, VAR_3 );

    bool VAR_5 = !FUNC_4( VAR_3, VAR_0 );

    FUNC_0( VAR_4, VAR_3 );
    FUNC_2( VAR_3 );

    return VAR_5;
}
