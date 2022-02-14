
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ p_fonts; int psz_name; struct TYPE_10__* p_next; } ;
typedef TYPE_1__ vlc_family_t ;
typedef int uni_char_t ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_12__ {TYPE_1__* (* pf_get_family ) (TYPE_2__*,int ) ;} ;
typedef TYPE_3__ filter_sys_t ;
typedef int FT_Face ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ) ;

vlc_family_t *FUNC_3( filter_t *VAR_0, vlc_family_t *VAR_1,
                                      uni_char_t VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_0->p_sys;
    vlc_family_t *VAR_4 = ((void*)0);

    for( vlc_family_t *VAR_5 = VAR_1; VAR_5;
         VAR_5 = VAR_5->p_next )
    {
        if( !VAR_5->p_fonts )
        {
            const vlc_family_t *VAR_6 =
                    VAR_3->pf_get_family( VAR_0, VAR_5->psz_name );
            if( !VAR_6 || !VAR_6->p_fonts )
                continue;
            VAR_5->p_fonts = VAR_6->p_fonts;
        }

        FT_Face VAR_7 = FUNC_1( VAR_0, VAR_5->p_fonts );
        if( !VAR_7 || !FUNC_0( VAR_7, VAR_2 ) )
            continue;
        VAR_4 = VAR_5;
        break;
    }

    return VAR_4;
}
