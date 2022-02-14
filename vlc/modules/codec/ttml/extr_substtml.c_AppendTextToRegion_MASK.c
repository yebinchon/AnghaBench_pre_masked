
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;


struct TYPE_18__ {scalar_t__ unit; } ;
struct TYPE_21__ {int b_preserve_space; scalar_t__ display; int i_text_align; int origin_v; TYPE_12__ origin_h; int extent_v; TYPE_12__ extent_h; scalar_t__ b_text_align_set; int i_direction; scalar_t__ b_direction_set; TYPE_1__* font_style; } ;
typedef TYPE_2__ ttml_style_t ;
struct TYPE_19__ {int inner_align; } ;
struct TYPE_22__ {TYPE_5__** pp_last_segment; TYPE_13__ updt; } ;
typedef TYPE_3__ ttml_region_t ;
typedef int ttml_context_t ;
struct TYPE_23__ {int p_parent; int psz_text; } ;
typedef TYPE_4__ tt_textnode_t ;
struct TYPE_24__ {struct TYPE_24__* p_next; TYPE_1__* style; } ;
typedef TYPE_5__ text_segment_t ;
struct TYPE_20__ {int i_features; int i_font_alpha; } ;


 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *,TYPE_12__,int ,int,TYPE_13__*) ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_5__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__ const*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_7( ttml_context_t *VAR_10, const tt_textnode_t *VAR_11,
                                const ttml_style_t *VAR_12, ttml_region_t *VAR_13 )
{
    text_segment_t *VAR_14;

    if( VAR_13 == ((void*)0) )
        return;

    VAR_14 = FUNC_4( VAR_11->psz_text );
    if( VAR_14 )
    {
        bool VAR_15 = 0;
        ttml_style_t *VAR_16 = FUNC_2( VAR_10, VAR_11->p_parent );
        if( VAR_16 )
        {
            if( VAR_12 )
                FUNC_6( VAR_12, VAR_16 );

            VAR_14->style = VAR_16->font_style;
            VAR_16->font_style = ((void*)0);

            VAR_15 = VAR_16->b_preserve_space;
            if( VAR_16->b_direction_set )
                FUNC_0( VAR_14, VAR_16->i_direction );

            if( VAR_16->display == VAR_8 )
            {

                VAR_14->style->i_features &= ~(VAR_1|VAR_3|VAR_5|VAR_4);
                VAR_14->style->i_font_alpha = VAR_0;
                VAR_14->style->i_features |= VAR_2;
            }




            if( VAR_16->b_text_align_set )
            {
                VAR_13->updt.inner_align &= ~(VAR_6|VAR_7);
                VAR_13->updt.inner_align |= VAR_16->i_text_align;
            }

            if( VAR_16->extent_h.unit != VAR_9 )
                FUNC_1( VAR_10, VAR_16->extent_h, VAR_16->extent_v, 0, &VAR_13->updt );

            if( VAR_16->origin_h.unit != VAR_9 )
                FUNC_1( VAR_10, VAR_16->origin_h, VAR_16->origin_v, 1, &VAR_13->updt );

            FUNC_5( VAR_16 );
        }

        if( !VAR_15 )
            FUNC_3( VAR_14 );
    }

    *VAR_13->pp_last_segment = VAR_14;
    VAR_13->pp_last_segment = &VAR_14->p_next;
}
