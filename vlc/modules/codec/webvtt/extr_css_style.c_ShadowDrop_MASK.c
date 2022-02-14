
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int val; } ;
typedef TYPE_1__ vlc_css_term_t ;
struct TYPE_6__ {int i_features; int i_style_flags; int i_shadow_width; } ;
typedef TYPE_2__ text_style_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0( vlc_css_term_t VAR_3, text_style_t *VAR_4 )
{
    if( VAR_3.type >= VAR_2 )
    {
        VAR_4->i_shadow_width = VAR_3.val;
        VAR_4->i_style_flags |= VAR_1;
        VAR_4->i_features |= VAR_0;
    }
}
