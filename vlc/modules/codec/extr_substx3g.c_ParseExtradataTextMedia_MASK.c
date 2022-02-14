
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int i_style_flags; int i_features; int i_shadow_color; int i_background_color; int i_font_color; void* i_background_alpha; void* i_shadow_alpha; } ;
typedef TYPE_2__ text_style_t ;
struct TYPE_5__ {int* p_extra; int i_extra; } ;
struct TYPE_7__ {TYPE_1__ fmt_in; scalar_t__ p_sys; } ;
typedef TYPE_3__ decoder_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_3( decoder_t *VAR_9 )
{
    text_style_t *VAR_10 = (text_style_t *) VAR_9->p_sys;
    const uint8_t *VAR_11 = VAR_9->fmt_in.p_extra;

    if( VAR_9->fmt_in.i_extra < 44 )
        return;


    uint32_t VAR_12 = FUNC_1(VAR_11);
    if(VAR_12 & 0x1000)
    {
        VAR_10->i_style_flags |= VAR_8;
        VAR_10->i_features |= VAR_7|VAR_4|VAR_6;
        VAR_10->i_shadow_color = 0xC0C0C0;
        VAR_10->i_shadow_alpha = VAR_0;
    }
    if(VAR_12 & 0x4000)
    {


        VAR_10->i_style_flags &= ~VAR_1;
    }




    VAR_10->i_background_color = (VAR_11[8] << 16) |
                                  (VAR_11[10] << 8) |
                                   VAR_11[12];
    VAR_10->i_features |= VAR_3 | VAR_2;
    VAR_10->i_background_alpha = VAR_0;






    VAR_10->i_style_flags |= FUNC_0( FUNC_2(&VAR_11[32]) );
    if( VAR_10->i_style_flags )
        VAR_10->i_features |= VAR_4;



    VAR_10->i_font_color = (VAR_11[37] << 16) |
                            (VAR_11[39] << 8) |
                             VAR_11[41];
    VAR_10->i_features |= VAR_5;


}
