
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int i_value; void* unit; } ;
struct TYPE_9__ {int i_value; void* unit; } ;
struct TYPE_7__ {unsigned int i_cell_resolution_v; unsigned int i_cell_resolution_h; TYPE_4__ root_extent_v; TYPE_3__ root_extent_h; TYPE_2__* p_rootnode; } ;
typedef TYPE_1__ ttml_context_t ;
struct TYPE_8__ {int attr_dict; } ;
typedef TYPE_2__ tt_node_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* VAR_2 ;
 char const* VAR_3 ;
 int FUNC_0 (char const*,char*,unsigned int*,unsigned int*) ;
 int FUNC_1 (char const*,TYPE_3__*,TYPE_4__*) ;
 char* FUNC_2 (int *,char*) ;

__attribute__((used)) static void FUNC_3( tt_node_t *VAR_4, ttml_context_t *VAR_5 )
{
    VAR_5->p_rootnode = VAR_4;

    VAR_5->root_extent_h.i_value = 100;
    VAR_5->root_extent_h.unit = VAR_2;
    VAR_5->root_extent_v.i_value = 100;
    VAR_5->root_extent_v.unit = VAR_2;
    VAR_5->i_cell_resolution_v = VAR_1;
    VAR_5->i_cell_resolution_h = VAR_0;

    const char *VAR_6 = FUNC_2( &VAR_4->attr_dict,
                                                      "tts:extent" );
    if( VAR_6 != VAR_3 )
    {
        FUNC_1( VAR_6, &VAR_5->root_extent_h,
                               &VAR_5->root_extent_v );
    }
    VAR_6 = FUNC_2( &VAR_4->attr_dict,
                                          "ttp:cellResolution" );
    if( VAR_6 != VAR_3 )
    {
        unsigned VAR_7, VAR_8;
        if( FUNC_0( VAR_6, "%u %u", &VAR_7, &VAR_8) == 2 && VAR_7 && VAR_8 )
        {
            VAR_5->i_cell_resolution_h = VAR_7;
            VAR_5->i_cell_resolution_v = VAR_8;
        }
    }
}
