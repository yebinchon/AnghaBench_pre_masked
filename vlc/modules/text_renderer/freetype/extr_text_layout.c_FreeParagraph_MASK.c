
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_levels; struct TYPE_4__* p_btypes; struct TYPE_4__* p_types; struct TYPE_4__* pi_reordered_indices; struct TYPE_4__* p_scripts; struct TYPE_4__* p_code_points; struct TYPE_4__* pp_styles; struct TYPE_4__* pp_ruby; struct TYPE_4__* pp_faces; struct TYPE_4__* pi_run_ids; struct TYPE_4__* p_glyph_bitmaps; struct TYPE_4__* pi_glyph_indices; struct TYPE_4__* p_runs; } ;
typedef TYPE_1__ paragraph_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( paragraph_t *VAR_0 )
{
    FUNC_0( VAR_0->p_runs );
    FUNC_0( VAR_0->pi_glyph_indices );
    FUNC_0( VAR_0->p_glyph_bitmaps );
    FUNC_0( VAR_0->pi_run_ids );
    FUNC_0( VAR_0->pp_faces );
    FUNC_0( VAR_0->pp_ruby );
    FUNC_0( VAR_0->pp_styles );
    FUNC_0( VAR_0->p_code_points );
    FUNC_0( VAR_0 );
}
