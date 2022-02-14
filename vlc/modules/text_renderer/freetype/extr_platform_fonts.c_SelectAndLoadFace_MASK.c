
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uni_char_t ;
struct TYPE_10__ {int i_style_flags; char* psz_monofontname; char* psz_fontname; } ;
typedef TYPE_1__ text_style_t ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_12__ {char* (* pf_select ) (TYPE_2__*,char const*,int,int,int*,int ) ;} ;
typedef TYPE_3__ filter_sys_t ;
typedef int * FT_Face ;


 int * FUNC_0 (TYPE_2__*,char*,int,TYPE_1__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,char*,char const*,int ) ;
 char* FUNC_3 (TYPE_2__*,char const*,int,int,int*,int ) ;

FT_Face FUNC_4( filter_t *VAR_3, const text_style_t *VAR_4,
                           uni_char_t VAR_5 )
{
    filter_sys_t *VAR_6 = VAR_3->p_sys;

    const char *VAR_7 = (VAR_4->i_style_flags & VAR_2)
                               ? VAR_4->psz_monofontname : VAR_4->psz_fontname;

    bool VAR_8 = VAR_4->i_style_flags & VAR_0;
    bool VAR_9 = VAR_4->i_style_flags & VAR_1;

    FT_Face VAR_10 = ((void*)0);


    int VAR_11 = 0;
    char *VAR_12 = ((void*)0);
    if( VAR_6->pf_select )
        VAR_12 = VAR_6->pf_select( VAR_3, VAR_7, VAR_8, VAR_9,
                                         &VAR_11, VAR_5 );
    else
        VAR_12 = ((void*)0);

    if( !VAR_12 || *VAR_12 == '\0' )
    {
        FUNC_2( VAR_3,
                  "SelectAndLoadFace: no font found for family: %s, codepoint: 0x%x",
                  VAR_7, VAR_5 );
        FUNC_1( VAR_12 );
        return ((void*)0);
    }

    VAR_10 = FUNC_0( VAR_3, VAR_12, VAR_11, VAR_4 );

    FUNC_1( VAR_12 );
    return VAR_10;
}
