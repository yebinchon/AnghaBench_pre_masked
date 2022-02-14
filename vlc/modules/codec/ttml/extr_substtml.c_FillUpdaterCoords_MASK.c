
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {double member_0; int member_1; } ;
typedef TYPE_3__ ttml_length_t ;
struct TYPE_17__ {int i_cell_resolution_v; int i_cell_resolution_h; } ;
typedef TYPE_4__ ttml_context_t ;
struct TYPE_15__ {int y; int x; } ;
struct TYPE_14__ {int y; int x; } ;
struct TYPE_18__ {int align; int flags; TYPE_2__ extent; TYPE_1__ origin; } ;
typedef TYPE_5__ substext_updater_region_t ;


 int FUNC_0 (TYPE_3__,int ,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ FUNC_1 (int ,TYPE_3__,TYPE_3__) ;

__attribute__((used)) static void FUNC_2( ttml_context_t *VAR_7, ttml_length_t VAR_8, ttml_length_t VAR_9,
                               bool VAR_10, substext_updater_region_t *VAR_11 )
{
    ttml_length_t VAR_12 = { 100.0, VAR_2 };
    ttml_length_t VAR_13 = FUNC_1( VAR_7->i_cell_resolution_h, VAR_8, VAR_12 );
    ttml_length_t VAR_14 = FUNC_1( VAR_7->i_cell_resolution_v, VAR_9, VAR_12 );
    if( VAR_10 )
    {
        FUNC_0( VAR_13, VAR_5, &VAR_11->origin.x, &VAR_11->flags );
        FUNC_0( VAR_14, VAR_6, &VAR_11->origin.y, &VAR_11->flags );
        VAR_11->align = VAR_1|VAR_0;
    }
    else
    {
        FUNC_0( VAR_13, VAR_3, &VAR_11->extent.x, &VAR_11->flags );
        FUNC_0( VAR_14, VAR_4, &VAR_11->extent.y, &VAR_11->flags );
    }
}
