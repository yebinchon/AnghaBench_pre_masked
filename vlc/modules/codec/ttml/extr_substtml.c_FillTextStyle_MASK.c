
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_fontname; unsigned int i_background_alpha; unsigned int i_font_alpha; int i_features; unsigned int i_font_color; unsigned int i_background_color; unsigned int i_outline_color; unsigned int i_outline_alpha; int i_outline_width; int i_style_flags; } ;
typedef TYPE_1__ text_style_t ;


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
 void* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 void* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*,char**) ;
 int FUNC_5 (char*,char**,int) ;
 unsigned int FUNC_6 (char const*,int*) ;

__attribute__((used)) static void FUNC_7( const char *VAR_10, const char *VAR_11,
                           text_style_t *VAR_12 )
{
    if( !FUNC_2 ( "tts:fontFamily", VAR_10 ) )
    {
        FUNC_1( VAR_12->psz_fontname );
        VAR_12->psz_fontname = FUNC_3( VAR_11 );
    }
    else if( !FUNC_2( "tts:opacity", VAR_10 ) )
    {
        VAR_12->i_background_alpha = FUNC_0( VAR_11 );
        VAR_12->i_font_alpha = FUNC_0( VAR_11 );
        VAR_12->i_features |= VAR_2 | VAR_5;
    }
    else if( !FUNC_2( "tts:color", VAR_10 ) )
    {
        unsigned int VAR_13 = FUNC_6( VAR_11, ((void*)0) );
        VAR_12->i_font_color = (VAR_13 & 0xffffff);
        VAR_12->i_font_alpha = (VAR_13 & 0xFF000000) >> 24;
        VAR_12->i_features |= VAR_6 | VAR_5;
    }
    else if( !FUNC_2( "tts:backgroundColor", VAR_10 ) )
    {
        unsigned int VAR_14 = FUNC_6( VAR_11, ((void*)0) );
        VAR_12->i_background_color = VAR_14 & 0xFFFFFF;
        VAR_12->i_background_alpha = (VAR_14 & 0xFF000000) >> 24;
        VAR_12->i_features |= VAR_3
                                                  | VAR_2;
        VAR_12->i_style_flags |= VAR_0;
    }
    else if( !FUNC_2( "tts:fontStyle", VAR_10 ) )
    {
        if( !FUNC_2 ( "italic", VAR_11 ) || !FUNC_2 ( "oblique", VAR_11 ) )
            VAR_12->i_style_flags |= VAR_7;
        else
            VAR_12->i_style_flags &= ~VAR_7;
        VAR_12->i_features |= VAR_4;
    }
    else if( !FUNC_2 ( "tts:fontWeight", VAR_10 ) )
    {
        if( !FUNC_2 ( "bold", VAR_11 ) )
            VAR_12->i_style_flags |= VAR_1;
        else
            VAR_12->i_style_flags &= ~VAR_1;
        VAR_12->i_features |= VAR_4;
    }
    else if( !FUNC_2 ( "tts:textDecoration", VAR_10 ) )
    {
        if( !FUNC_2 ( "underline", VAR_11 ) )
            VAR_12->i_style_flags |= VAR_9;
        else if( !FUNC_2 ( "noUnderline", VAR_11 ) )
            VAR_12->i_style_flags &= ~VAR_9;
        if( !FUNC_2 ( "lineThrough", VAR_11 ) )
            VAR_12->i_style_flags |= VAR_8;
        else if( !FUNC_2 ( "noLineThrough", VAR_11 ) )
            VAR_12->i_style_flags &= ~VAR_8;
        VAR_12->i_features |= VAR_4;
    }
    else if( !FUNC_2( "tts:textOutline", VAR_10 ) )
    {
        char *VAR_15 = FUNC_3( VAR_11 );
        char* VAR_16 = ((void*)0);
        char* VAR_17 = (VAR_15) ? FUNC_4( VAR_15, " ", &VAR_16 ) : ((void*)0);

        if( VAR_17 != ((void*)0) )
        {
            bool VAR_18 = 0;
            unsigned int VAR_19 = FUNC_6( VAR_17, &VAR_18 );
            if( VAR_18 )
            {
                VAR_12->i_outline_color = VAR_19 & 0xFFFFFF;
                VAR_12->i_outline_alpha = (VAR_19 & 0xFF000000) >> 24;
                VAR_17 = FUNC_4( ((void*)0), " ", &VAR_16 );
                if( VAR_17 != ((void*)0) )
                {
                    char* VAR_20 = ((void*)0);
                    int VAR_21 = FUNC_5( VAR_17, &VAR_20, 10 );
                    if( VAR_20 != VAR_17 )
                    {

                        VAR_12->i_outline_width = VAR_21;
                    }
                }
            }
        }
        FUNC_1( VAR_15 );
    }
}
