
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_6__ {void* psz_text; TYPE_1__* style; struct TYPE_6__* p_next; } ;
typedef TYPE_2__ text_segment_t ;
struct eia608_screen {char** characters; size_t** colors; int** fonts; } ;
typedef int eia608_font_t ;
typedef size_t eia608_color_t ;
struct TYPE_5__ {int i_features; int i_font_color; int i_style_flags; } ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char const) ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int * VAR_11 ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (int *) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static text_segment_t * FUNC_8( struct eia608_screen *VAR_12, int VAR_13 )
{
    const uint8_t *VAR_14 = VAR_12->characters[VAR_13];
    const eia608_color_t *VAR_15 = VAR_12->colors[VAR_13];
    const eia608_font_t *VAR_16 = VAR_12->fonts[VAR_13];
    int VAR_17;
    int VAR_18;
    int VAR_19;
    eia608_color_t VAR_20 = VAR_0;
    eia608_font_t VAR_21 = VAR_2;

    char VAR_22[4];
    const unsigned VAR_23 = 4 * VAR_4 + 1;
    char VAR_24[VAR_23 + 1];
    VAR_24[0] = '\0';


    VAR_17 = 0;



    while( VAR_17 < VAR_4 && VAR_14[VAR_17] == ' ' ) {
        FUNC_1( VAR_22, 0x89 );
        FUNC_0( VAR_22 );
        VAR_17++;
    }


    VAR_18 = VAR_4-1;
    while( VAR_18 > VAR_17 && VAR_14[VAR_18] == ' ' )
        VAR_18--;


    if( VAR_17 > VAR_18 )
        return ((void*)0);

    text_segment_t *VAR_25, *VAR_26 = VAR_25 = FUNC_6( ((void*)0) );
    if(!VAR_25)
        return ((void*)0);

    VAR_25->style = FUNC_7( VAR_9 );
    if(!VAR_25->style)
    {
        FUNC_5(VAR_25);
        return ((void*)0);
    }

    VAR_25->style->i_style_flags |= VAR_8;

    for( VAR_19 = VAR_17; VAR_19 <= VAR_18; VAR_19++ )
    {
        eia608_color_t VAR_27 = VAR_15[VAR_19];
        eia608_font_t VAR_28 = VAR_16[VAR_19];

        if(VAR_28 != VAR_21 || VAR_27 != VAR_20)
        {
            FUNC_2(VAR_24);
            VAR_25->psz_text = FUNC_4(VAR_24);
            VAR_24[0] = '\0';
            VAR_25->p_next = FUNC_6( ((void*)0) );
            VAR_25 = VAR_25->p_next;
            if(!VAR_25)
                return VAR_26;

            VAR_25->style = FUNC_7( VAR_9 );
            if(!VAR_25->style)
            {
                FUNC_5(VAR_25);
                return VAR_26;
            }
            VAR_25->style->i_style_flags |= VAR_8;


            if(VAR_28 & VAR_1)
            {
                VAR_25->style->i_style_flags |= VAR_7;
                VAR_25->style->i_features |= VAR_5;
            }
            if(VAR_28 & VAR_3)
            {
                VAR_25->style->i_style_flags |= VAR_10;
                VAR_25->style->i_features |= VAR_5;
            }

            if(VAR_27 != VAR_0)
            {
                VAR_25->style->i_font_color = VAR_11[VAR_27];
                VAR_25->style->i_features |= VAR_6;
            }
        }

        FUNC_1( VAR_22, VAR_14[VAR_19] );
        FUNC_0( VAR_22 );


        VAR_21 = VAR_28;
        VAR_20 = VAR_27;
    }



    if( VAR_25 )
    {
        FUNC_3(!VAR_25->psz_text);
        FUNC_2(VAR_24);
        VAR_25->psz_text = FUNC_4(VAR_24);
    }

    return VAR_26;
}
