
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {TYPE_3__* style; } ;
typedef TYPE_1__ text_segment_t ;
struct TYPE_7__ {int i_features; void* i_shadow_alpha; void* i_outline_alpha; int i_font_alpha; int i_font_color; int i_font_size; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char const*) ;
 TYPE_3__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static text_segment_t * FUNC_5(const char *VAR_7, int VAR_8, uint32_t VAR_9)
{
    text_segment_t *VAR_10 = FUNC_2(VAR_7);
    if(FUNC_4(!VAR_10))
        return ((void*)0);


    VAR_10->style = FUNC_3(VAR_6);
    if (FUNC_4(!VAR_10->style))
    {
        FUNC_1(VAR_10);
        return ((void*)0);
    }

    VAR_10->style->i_font_size = FUNC_0(VAR_8 ,1 );
    VAR_10->style->i_font_color = VAR_9;
    VAR_10->style->i_font_alpha = VAR_0;
    VAR_10->style->i_outline_alpha = VAR_1;
    VAR_10->style->i_shadow_alpha = VAR_1;
    VAR_10->style->i_features |= VAR_2 | VAR_3 |
                                    VAR_4 | VAR_5;

    return VAR_10;
}
