
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_dictionary_t ;
struct TYPE_10__ {scalar_t__ unit; double i_value; } ;
struct TYPE_9__ {TYPE_2__ font_size; TYPE_4__* font_style; } ;
typedef TYPE_1__ ttml_style_t ;
typedef TYPE_2__ ttml_length_t ;
struct TYPE_11__ {int root_extent_v; int i_cell_resolution_v; } ;
typedef TYPE_3__ ttml_context_t ;
struct TYPE_12__ {int f_font_relsize; int i_font_size; } ;
typedef TYPE_4__ text_style_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int const*) ;
 TYPE_2__ FUNC_1 (int ,TYPE_2__,int ) ;

__attribute__((used)) static void FUNC_2( ttml_context_t *VAR_4, const vlc_dictionary_t *VAR_5,
                               ttml_style_t *VAR_6 )
{
    FUNC_0(VAR_5);


    text_style_t *VAR_7 = VAR_6->font_style;
    ttml_length_t VAR_8 = VAR_6->font_size;


    if( VAR_8.unit == VAR_2 )
    {
        VAR_8.i_value /= 100.0;
        VAR_8.unit = VAR_1;
    }



    if( VAR_8.unit == VAR_1 )
        VAR_8 = FUNC_1( VAR_4->i_cell_resolution_v, VAR_8, VAR_4->root_extent_v );


    if( VAR_8.unit == VAR_2 )
        VAR_7->f_font_relsize = VAR_8.i_value / VAR_0;
    else
    if( VAR_8.unit == VAR_3 )
        VAR_7->i_font_size = VAR_8.i_value;
}
