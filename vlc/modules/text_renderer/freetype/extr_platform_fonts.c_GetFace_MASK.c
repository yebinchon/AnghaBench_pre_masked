
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int p_face; int i_index; int psz_fontfile; } ;
typedef TYPE_1__ vlc_font_t ;
struct TYPE_8__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_9__ {int p_default_style; } ;
typedef TYPE_3__ filter_sys_t ;
typedef int FT_Face ;


 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;

FT_Face FUNC_1( filter_t *VAR_0, vlc_font_t *VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;

    if( VAR_1->p_face )
        return VAR_1->p_face;

    VAR_1->p_face = FUNC_0( VAR_0, VAR_1->psz_fontfile, VAR_1->i_index,
                               VAR_2->p_default_style );

    return VAR_1->p_face;
}
