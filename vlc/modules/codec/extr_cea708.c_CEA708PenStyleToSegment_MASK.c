
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int i_features; int f_font_relsize; int i_style_flags; void* i_font_alpha; void* i_font_color; void* i_background_color; void* i_background_alpha; } ;
typedef TYPE_3__ text_style_t ;
struct TYPE_8__ {scalar_t__ opacity; int color; } ;
struct TYPE_7__ {scalar_t__ opacity; int color; } ;
struct TYPE_10__ {int font; int size; scalar_t__ b_underline; scalar_t__ b_italics; TYPE_2__ foreground; TYPE_1__ background; } ;
typedef TYPE_4__ cea708_pen_style_t ;


 void* FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_2( const cea708_pen_style_t *VAR_15, text_style_t *VAR_16 )
{
    if( VAR_15->background.opacity != VAR_4 )
    {
        VAR_16->i_background_alpha = FUNC_0( VAR_15->background.opacity );
        VAR_16->i_style_flags |= VAR_5;
        VAR_16->i_background_color = FUNC_1( VAR_15->background.color );
        VAR_16->i_features |= VAR_9|VAR_8;
        if( VAR_15->background.opacity == VAR_3 )
            VAR_16->i_style_flags |= VAR_6;
    }
    VAR_16->i_font_color = FUNC_1( VAR_15->foreground.color );
    VAR_16->i_font_alpha = FUNC_0( VAR_15->foreground.opacity );
    VAR_16->i_features |= VAR_10|VAR_11;
    if( VAR_15->foreground.opacity == VAR_3 )
        VAR_16->i_style_flags |= VAR_7;

    if( VAR_15->b_italics )
        VAR_16->i_style_flags |= VAR_12;
    if( VAR_15->b_underline )
        VAR_16->i_style_flags |= VAR_14;

    switch( VAR_15->font )
    {
        default:
        case 130:
        case 135:
        case 134:
            VAR_16->i_style_flags |= VAR_13;
            break;
        case 133:
        case 132:
        case 137:
        case 136:
        case 131:
            break;
    }

    switch( VAR_15->size )
    {
        case 128:
            VAR_16->f_font_relsize = VAR_1;
            break;
        case 129:
            VAR_16->f_font_relsize = VAR_0;
            break;
        default:
            VAR_16->f_font_relsize = VAR_2;
            break;
    }
}
