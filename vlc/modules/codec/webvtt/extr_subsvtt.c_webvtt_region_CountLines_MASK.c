
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_child; } ;
typedef TYPE_1__ webvtt_region_t ;
struct TYPE_6__ {scalar_t__ type; struct TYPE_6__* p_next; } ;
typedef TYPE_2__ webvtt_dom_node_t ;
struct TYPE_7__ {scalar_t__ i_lines; } ;
typedef TYPE_3__ webvtt_dom_cue_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned FUNC_1( const webvtt_region_t *VAR_1 )
{
    unsigned VAR_2 = 0;
    for( const webvtt_dom_node_t *VAR_3 = VAR_1->p_child;
                                  VAR_3; VAR_3 = VAR_3->p_next )
    {
        FUNC_0( VAR_3->type == VAR_0 );
        if( VAR_3->type != VAR_0 )
            continue;
        VAR_2 += ((const webvtt_dom_cue_t *)VAR_3)->i_lines;
    }
    return VAR_2;
}
