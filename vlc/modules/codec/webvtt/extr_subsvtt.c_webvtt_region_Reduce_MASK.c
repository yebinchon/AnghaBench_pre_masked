
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* p_child; } ;
typedef TYPE_2__ webvtt_region_t ;
struct TYPE_9__ {int i_lines; TYPE_1__* p_next; } ;
typedef TYPE_3__ webvtt_dom_cue_t ;
struct TYPE_7__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_3( webvtt_region_t *VAR_1 )
{
    if( VAR_1->p_child )
    {
        FUNC_0( VAR_1->p_child->type == VAR_0 );
        if( VAR_1->p_child->type != VAR_0 )
            return;
        webvtt_dom_cue_t *VAR_2 = (webvtt_dom_cue_t *)VAR_1->p_child;
        if( VAR_2->i_lines == 1 ||
            FUNC_2( VAR_2 ) < 1 )
        {
            VAR_1->p_child = VAR_2->p_next;
            VAR_2->p_next = ((void*)0);
            FUNC_1( VAR_2 );
        }
    }
}
