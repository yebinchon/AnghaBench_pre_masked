
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int i_index; int psz_fontfile; } ;
typedef TYPE_1__ vlc_font_t ;
struct TYPE_23__ {scalar_t__ p_fonts; } ;
typedef TYPE_2__ vlc_family_t ;
typedef int uni_char_t ;
struct TYPE_24__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_25__ {TYPE_2__* (* pf_get_family ) (TYPE_3__*,char const*) ;int fallback_map; TYPE_2__* (* pf_get_fallbacks ) (TYPE_3__*,char const*,int ) ;} ;
typedef TYPE_4__ filter_sys_t ;
typedef scalar_t__ FT_Face ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 char* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_3__*,TYPE_2__ const*,int,int,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 char const* VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_4 (TYPE_3__*,TYPE_2__*,int ) ;
 char* FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (TYPE_3__*,char const*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*,char const*,int ) ;
 TYPE_2__* FUNC_8 (TYPE_3__*,char const*) ;
 TYPE_2__* FUNC_9 (TYPE_3__*,char const*) ;
 TYPE_2__* FUNC_10 (int *,int ) ;

char* FUNC_11( filter_t *VAR_4, const char* VAR_5,
                      bool VAR_6, bool VAR_7,
                      int *VAR_8, uni_char_t VAR_9 )
{

    filter_sys_t *VAR_10 = VAR_4->p_sys;
    const vlc_family_t *VAR_11 = ((void*)0);
    vlc_family_t *VAR_12 = ((void*)0);

    if( VAR_9 )
    {




        const vlc_family_t *VAR_13 = VAR_10->pf_get_family( VAR_4, VAR_5 );
        if( VAR_13 && VAR_13->p_fonts )
        {
            FT_Face VAR_14 = FUNC_3( VAR_4, VAR_13->p_fonts );
            if( VAR_14 && FUNC_0( VAR_14, VAR_9 ) )
                VAR_11 = VAR_13;
        }


        if( !VAR_11 )
        {
            VAR_12 = FUNC_10( &VAR_10->fallback_map,
                                                        VAR_0 );
            if( VAR_12 )
                VAR_11 = FUNC_4( VAR_4, VAR_12, VAR_9 );
        }


        if( !VAR_11 )
        {
            VAR_12 = VAR_10->pf_get_fallbacks( VAR_4, VAR_5, VAR_9 );
            if( VAR_12 )
                VAR_11 = FUNC_4( VAR_4, VAR_12, VAR_9 );
        }


        if( !VAR_11 )
        {
            VAR_12 = FUNC_10( &VAR_10->fallback_map,
                                                        VAR_1 );
            if( VAR_12 )
                VAR_11 = FUNC_4( VAR_4, VAR_12, VAR_9 );
        }

        if( !VAR_11 )
            return ((void*)0);
    }

    if( !VAR_11 )
        VAR_11 = VAR_10->pf_get_family( VAR_4, VAR_5 );

    if( !VAR_11 || !VAR_11->p_fonts )
        VAR_11 = VAR_10->pf_get_family( VAR_4, VAR_2 );

    vlc_font_t *VAR_15;
    if( VAR_11 && ( VAR_15 = FUNC_2( VAR_4, VAR_11, VAR_6,
                                            VAR_7, VAR_9 ) ) )
    {
        *VAR_8 = VAR_15->i_index;
        return FUNC_5( VAR_15->psz_fontfile );
    }

    return FUNC_1( VAR_3 );
}
