
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {unsigned int i_lines_max_scroll; scalar_t__ b_scroll_up; TYPE_2__* p_child; } ;
typedef TYPE_1__ webvtt_region_t ;
struct TYPE_9__ {struct TYPE_9__* p_next; } ;
typedef TYPE_2__ webvtt_dom_node_t ;
struct TYPE_10__ {TYPE_2__* p_parent; } ;
typedef TYPE_3__ webvtt_dom_cue_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3( webvtt_region_t *VAR_1,
                                  webvtt_dom_cue_t *VAR_2 )
{
    webvtt_dom_node_t **VAR_3 = &VAR_1->p_child;
    while( *VAR_3 )
        VAR_3 = &((*VAR_3)->p_next);
    *VAR_3 = (webvtt_dom_node_t *)VAR_2;
    VAR_2->p_parent = (webvtt_dom_node_t *)VAR_1;

    for( ;; )
    {
        unsigned VAR_4 = FUNC_1( VAR_1 );
        if( VAR_4 > 0 &&
            ( VAR_4 > VAR_0 ||
             (VAR_1->b_scroll_up && VAR_4 > VAR_1->i_lines_max_scroll)) )
        {
            FUNC_2( VAR_1 );
            FUNC_0( FUNC_1( VAR_1 ) < VAR_4 );
        }
        else break;
    }
}
