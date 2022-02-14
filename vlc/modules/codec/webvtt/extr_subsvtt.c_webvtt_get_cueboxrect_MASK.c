
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {float y; float w; float x; float h; } ;
typedef TYPE_3__ webvtt_rect_t ;
struct TYPE_8__ {float value; int b_auto; } ;
struct TYPE_7__ {float value; int b_auto; } ;
struct TYPE_10__ {float position; scalar_t__ align; scalar_t__ positionalign; scalar_t__ vertical; TYPE_2__ size; TYPE_1__ line; scalar_t__ b_snap_to_lines; } ;
typedef TYPE_4__ webvtt_cue_settings_t ;
typedef enum webvtt_align_e { ____Placeholder_webvtt_align_e } webvtt_align_e ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;

__attribute__((used)) static void FUNC_0( const webvtt_cue_settings_t *VAR_7,
                                   webvtt_rect_t *VAR_8 )
{
    float VAR_9;
    float VAR_10;
    enum webvtt_align_e VAR_11;


    float VAR_12;
    if( !VAR_7->line.b_auto )
    {
        if( VAR_7->b_snap_to_lines )
            VAR_12 = VAR_7->line.value /
                          (VAR_6 * VAR_5);
        else
            VAR_12 = VAR_7->line.value;
    }
    else VAR_12 = 1.0;

    if( VAR_7->position < 0 )
    {
        if( VAR_7->align == VAR_2 )
            VAR_10 = 0;
        else if( VAR_7->align == VAR_3 )
            VAR_10 = 1.0;
        else
            VAR_10 = 0.5;
    }
    else VAR_10 = VAR_7->position;

    if( VAR_7->positionalign == VAR_0 )
    {

        if( VAR_7->align == VAR_2 ||
            VAR_7->align == VAR_3 )
            VAR_11 = VAR_7->align;
        else
            VAR_11 = VAR_1;
    }
    else VAR_11 = VAR_7->positionalign;

    if( !VAR_7->size.b_auto )
        VAR_9 = VAR_7->size.value;
    else
        VAR_9 = 0.0;




    if( VAR_7->vertical == VAR_0 )
    {
        VAR_8->y = VAR_12 > 0 ? VAR_12 : 1.0 + VAR_12;
        VAR_8->w = (VAR_9) ? VAR_9 : 1.0;
        if( VAR_10 > 0 &&
            (VAR_11 == VAR_2 ||
             VAR_11 == VAR_4) )
        {
            VAR_8->x = VAR_10;
            VAR_8->w -= VAR_8->x;
        }
    }
    else
    {
        if( VAR_7->vertical == VAR_2 )
            VAR_8->x = VAR_12 > 0 ? 1.0 - VAR_12 : -VAR_12;
        else
            VAR_8->x = VAR_12 > 0 ? VAR_12 : 1.0 + VAR_12;
        VAR_8->y = (VAR_9) ? VAR_9 : 1.0;

        if( VAR_10 > 0 &&
            VAR_11 == VAR_4 )
        {
            VAR_8->y = VAR_10;
            VAR_8->h -= VAR_8->y;
        }
    }
}
