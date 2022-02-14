
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {struct TYPE_13__* p_next; } ;
typedef TYPE_3__ text_segment_t ;
struct TYPE_12__ {double x; double y; } ;
struct TYPE_14__ {int flags; int align; int inner_align; TYPE_2__ origin; TYPE_3__* p_segments; } ;
typedef TYPE_4__ substext_updater_region_t ;
struct TYPE_11__ {scalar_t__ scroll_direction; } ;
struct TYPE_15__ {int i_lastrow; int i_row_count; int i_firstrow; double i_anchor_offset_h; int anchor_point; double i_anchor_offset_v; scalar_t__ b_relative; int * rows; TYPE_1__ style; int b_visible; } ;
typedef TYPE_5__ cea708_window_t ;


 TYPE_3__* FUNC_0 (int ,int) ;
 float VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_5__ const*) ;




 TYPE_4__* FUNC_2 () ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3( const cea708_window_t *VAR_7,
                              substext_updater_region_t *VAR_8 )
{
    if( !VAR_7->b_visible || FUNC_1( VAR_7 ) == 0 )
        return;

    if( VAR_8 == ((void*)0) && !(VAR_8 = FUNC_2()) )
        return;

    int VAR_9, VAR_10;

    if (VAR_7->style.scroll_direction == VAR_4) {


        VAR_10 = VAR_7->i_lastrow;
        if (VAR_7->i_lastrow - VAR_7->i_row_count < VAR_7->i_firstrow)
            VAR_9 = VAR_7->i_firstrow;
        else
            VAR_9 = VAR_7->i_lastrow - VAR_7->i_row_count + 1;

    } else {
        VAR_9 = VAR_7->i_firstrow;
        if (VAR_7->i_firstrow + VAR_7->i_row_count > VAR_7->i_lastrow)
            VAR_10 = VAR_7->i_lastrow;
        else
            VAR_10 = VAR_7->i_firstrow + VAR_7->i_row_count - 1;
    }

    text_segment_t **VAR_11 = &VAR_8->p_segments;
    for( uint8_t VAR_12=VAR_9; VAR_12<=VAR_10; VAR_12++ )
    {
        if( !VAR_7->rows[VAR_12] )
            continue;

        *VAR_11 = FUNC_0( VAR_7->rows[VAR_12], VAR_12 < VAR_7->i_lastrow );
        if( *VAR_11 )
            VAR_11 = &((*VAR_11)->p_next);
    }

    if( VAR_7->b_relative )
    {

        VAR_8->origin.x = VAR_7->i_anchor_offset_h / 100.0;

        switch (VAR_7->anchor_point) {
        case 133:
        case 134:
        case 132:
            VAR_8->origin.y = VAR_7->i_anchor_offset_v / 100.0;
            break;
        case 139:
        case 140:
        case 138:
            VAR_8->origin.y = 1.0 - (VAR_7->i_anchor_offset_v / 100.0);
            break;
        default:

            VAR_8->origin.y = VAR_7->i_anchor_offset_v / 100.0;
            break;
        }
    }
    else
    {
        VAR_8->origin.x = (float)VAR_7->i_anchor_offset_h / VAR_2;
        VAR_8->origin.y = (float)VAR_7->i_anchor_offset_v /
                             (VAR_3 * VAR_0);
    }
    VAR_8->flags |= VAR_5|VAR_6;

    if( VAR_7->i_firstrow <= VAR_7->i_lastrow )
    {
        VAR_8->origin.y += VAR_7->i_firstrow * VAR_1;



    }

    if( VAR_7->anchor_point <= 138 )
    {
        static const int VAR_13[] =
        {
            [133] = 128|130,
            [134] = 128,
            [132] = 128|129,
            [136] = 130,
            [137] = 0,
            [135] = 129,
            [139] = 131|130,
            [140] = 131,
            [138] = 131|129,
        };
        VAR_8->align = VAR_13[VAR_7->anchor_point];
    }
    VAR_8->inner_align = 131|130;
}
