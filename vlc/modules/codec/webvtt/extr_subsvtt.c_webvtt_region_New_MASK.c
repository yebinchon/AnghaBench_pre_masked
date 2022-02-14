
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double f_width; double anchor_y; int i_lines_max_scroll; double viewport_anchor_y; int b_scroll_up; int * p_child; int * p_cssstyle; scalar_t__ viewport_anchor_x; scalar_t__ anchor_x; int * p_next; int * psz_id; int type; } ;
typedef TYPE_1__ webvtt_region_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static webvtt_region_t * FUNC_1( void )
{
    webvtt_region_t *VAR_1 = FUNC_0(sizeof(*VAR_1));
    if( VAR_1 )
    {
        VAR_1->type = VAR_0;
        VAR_1->psz_id = ((void*)0);
        VAR_1->p_next = ((void*)0);
        VAR_1->f_width = 1.0;
        VAR_1->anchor_x = 0;
        VAR_1->anchor_y = 1.0;
        VAR_1->i_lines_max_scroll = 3;
        VAR_1->viewport_anchor_x = 0;
        VAR_1->viewport_anchor_y = 1.0;
        VAR_1->b_scroll_up = 0;
        VAR_1->p_cssstyle = ((void*)0);
        VAR_1->p_child = ((void*)0);
    }
    return VAR_1;
}
