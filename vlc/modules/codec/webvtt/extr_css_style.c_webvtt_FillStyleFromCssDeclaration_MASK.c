
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ type; char const* psz; double val; } ;
typedef TYPE_3__ vlc_css_term_t ;
struct TYPE_20__ {char const* psz_property; TYPE_2__* expr; } ;
typedef TYPE_4__ vlc_css_declaration_t ;
struct TYPE_21__ {int i_style_flags; char* psz_fontname; double i_font_size; double f_font_relsize; int e_wrapinfo; int i_features; int i_background_alpha; int i_background_color; int i_font_alpha; int i_font_color; } ;
typedef TYPE_5__ text_style_t ;
struct TYPE_18__ {int i_count; TYPE_1__* seq; } ;
struct TYPE_17__ {TYPE_3__ term; } ;


 int FUNC_0 (TYPE_3__,int *,int *,int *,int ,int ) ;
 int FUNC_1 (TYPE_3__,TYPE_5__*) ;
 int FUNC_2 (TYPE_3__,TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (TYPE_3__,TYPE_5__*) ;
 int FUNC_4 (TYPE_3__,TYPE_5__*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const*,char*) ;
 char* FUNC_7 (char const*,char) ;
 char* FUNC_8 (char const*) ;
 char* FUNC_9 (char const*,int) ;
 char* FUNC_10 (char*) ;

void FUNC_11( const vlc_css_declaration_t *VAR_17, text_style_t *VAR_18 )
{
    if( !VAR_17->psz_property || !VAR_18 )
        return;


    if( VAR_17->expr->i_count < 1 )
        return;

    vlc_css_term_t VAR_19 = VAR_17->expr->seq[0].term;

    if( !FUNC_6( VAR_17->psz_property, "color" ) )
    {
        FUNC_0( VAR_19, &VAR_18->i_font_color, &VAR_18->i_font_alpha,
               &VAR_18->i_features, VAR_6, VAR_5 );
    }
    else if( !FUNC_6( VAR_17->psz_property, "text-decoration" ) )
    {
        if( VAR_19 == VAR_16 )
        {
            if( !FUNC_6( VAR_19, "none" ) )
            {
                VAR_18->i_style_flags &= ~(VAR_8|VAR_9);
                VAR_18->i_features |= VAR_4;
            }
            else if( !FUNC_6( VAR_19, "line-through" ) )
            {
                VAR_18->i_style_flags |= VAR_8;
                VAR_18->i_features |= VAR_4;
            }
            else if( !FUNC_6( VAR_19, "underline" ) )
            {
                VAR_18->i_style_flags |= VAR_9;
                VAR_18->i_features |= VAR_4;
            }
        }
    }
    else if( !FUNC_6( VAR_17->psz_property, "text-shadow" ) )
    {
        FUNC_4( VAR_19, VAR_18 );
        if( VAR_17->expr->i_count == 3 )
            FUNC_3( VAR_17->expr->seq[2].term, VAR_18 );
    }
    else if( !FUNC_6( VAR_17->psz_property, "background-color" ) )
    {
        FUNC_0( VAR_19, &VAR_18->i_background_color, &VAR_18->i_background_alpha,
               &VAR_18->i_features, VAR_3, VAR_2 );
        VAR_18->i_style_flags |= VAR_0;
        VAR_18->i_features |= VAR_4;
    }
    else if( !FUNC_6( VAR_17->psz_property, "outline-color" ) )
    {
        FUNC_1( VAR_19, VAR_18 );
    }
    else if( !FUNC_6( VAR_17->psz_property, "outline-width" ) )
    {
        FUNC_2( VAR_19, VAR_18 );
    }
    else if( !FUNC_6( VAR_17->psz_property, "outline" ) )
    {
        FUNC_2( VAR_19, VAR_18 );
        if( VAR_17->expr->i_count == 3 )
            FUNC_1( VAR_17->expr->seq[2].term, VAR_18 );
    }
    else if( !FUNC_6( VAR_17->psz_property, "font-family" ) )
    {
        if( VAR_19 >= VAR_16 )
        {
            char *VAR_20 = ((void*)0);
            const char *VAR_21 = FUNC_7( VAR_19, ',' );
            if( VAR_21 )
                VAR_20 = FUNC_9( VAR_19, VAR_21 - VAR_19 + 1 );
            else
                VAR_20 = FUNC_8( VAR_19 );
            FUNC_5( VAR_18->psz_fontname );
            VAR_18->psz_fontname = FUNC_10( VAR_20 );
            FUNC_5( VAR_20 );
        }
    }
    else if( !FUNC_6( VAR_17->psz_property, "font-style" ) )
    {
        if( VAR_19 >= VAR_16 )
        {
            if( !FUNC_6(VAR_19, "normal") )
            {
                VAR_18->i_style_flags &= ~VAR_7;
                VAR_18->i_features |= VAR_4;
            }
            else if( !FUNC_6(VAR_19, "italic") )
            {
                VAR_18->i_style_flags |= VAR_7;
                VAR_18->i_features |= VAR_4;
            }
        }
    }
    else if( !FUNC_6( VAR_17->psz_property, "font-weight" ) )
    {
        if( VAR_19 >= VAR_16 )
        {
            if( !FUNC_6(VAR_19, "normal") )
            {
                VAR_18->i_style_flags &= ~VAR_1;
                VAR_18->i_features |= VAR_4;
            }
            if( !FUNC_6(VAR_19, "bold") )
            {
                VAR_18->i_style_flags |= VAR_1;
                VAR_18->i_features |= VAR_4;
            }
        }
        else if( VAR_19 == VAR_13 )
        {
            if( VAR_19 >= 700.0 )
                VAR_18->i_style_flags |= VAR_1;
            else
                VAR_18->i_style_flags &= ~VAR_1;
            VAR_18->i_features |= VAR_4;
        }
    }
    else if( !FUNC_6( VAR_17->psz_property, "font-size" ) )
    {
        if( VAR_19 == VAR_15 )
            VAR_18->i_font_size = VAR_19;
        else if( VAR_19 == VAR_12 )
            VAR_18->f_font_relsize = VAR_19 * 5.33 / 1.06;
        else if( VAR_19 == VAR_14 )
            VAR_18->f_font_relsize = VAR_19 * 5.33 / 100;
    }
    else if( !FUNC_6( VAR_17->psz_property, "font" ) )
    {

    }
    else if( !FUNC_6( VAR_17->psz_property, "white-space" ) )
    {
        if( VAR_19 >= VAR_16 )
        {
            if( !FUNC_6(VAR_19, "normal" ) )
                VAR_18->e_wrapinfo = VAR_10;
            if( !FUNC_6(VAR_19, "nowrap" ) )
                VAR_18->e_wrapinfo = VAR_11;
        }
    }
}
