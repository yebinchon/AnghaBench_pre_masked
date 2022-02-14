
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callback_ctx {int regions; int styles; } ;
typedef enum webvtt_header_line_e { ____Placeholder_webvtt_header_line_e } webvtt_header_line_e ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static void FUNC_2( void *VAR_2, enum webvtt_header_line_e VAR_3,
                                 bool VAR_4, const char *VAR_5 )
{
    FUNC_0(VAR_4);
    struct callback_ctx *VAR_6 = (struct callback_ctx *) VAR_2;
    if( VAR_3 == VAR_1 )
        FUNC_1( &VAR_6->styles, VAR_5 );
    else if( VAR_3 == VAR_0 )
        FUNC_1( &VAR_6->regions, VAR_5 );
}
