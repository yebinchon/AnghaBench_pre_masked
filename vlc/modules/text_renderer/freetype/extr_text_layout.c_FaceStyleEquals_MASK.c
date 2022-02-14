
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_style_flags; char* psz_monofontname; char* psz_fontname; } ;
typedef TYPE_1__ text_style_t ;
typedef int filter_t ;


 int FUNC_0 (int *,TYPE_1__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_2( filter_t *VAR_5, const text_style_t *VAR_6,
                             const text_style_t *VAR_7 )
{
    if( !VAR_6 || !VAR_7 )
        return 0;
    if( VAR_6 == VAR_7 )
        return 1;

    const int VAR_8 = VAR_0 | VAR_3 | VAR_2 | VAR_1;

    const char *VAR_9 = VAR_6->i_style_flags & VAR_4
                              ? VAR_6->psz_monofontname : VAR_6->psz_fontname;

    const char *VAR_10 = VAR_7->i_style_flags & VAR_4
                              ? VAR_7->psz_monofontname : VAR_7->psz_fontname;

    const int VAR_11 = FUNC_0( VAR_5, VAR_6 );
    const int VAR_12 = FUNC_0( VAR_5, VAR_7 );

    return (VAR_6->i_style_flags & VAR_8) == (VAR_7->i_style_flags & VAR_8)
         && VAR_11 == VAR_12
         && !FUNC_1( VAR_9, VAR_10 );
}
