
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_start; } ;
typedef TYPE_1__ webvtt_dom_tag_t ;
struct TYPE_6__ {scalar_t__ type; struct TYPE_6__* p_parent; } ;
typedef TYPE_2__ webvtt_dom_node_t ;
struct TYPE_7__ {int i_stop; int i_start; } ;
typedef TYPE_3__ webvtt_dom_cue_t ;
typedef int vlc_tick_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static vlc_tick_t FUNC_0( const webvtt_dom_node_t *VAR_3, bool VAR_4 )
{
    for( ; VAR_3; VAR_3 = VAR_3->p_parent )
    {
        if( VAR_3->type == VAR_1 )
        {
            vlc_tick_t VAR_5 = ((const webvtt_dom_tag_t *) VAR_3)->i_start;
            if( VAR_5 > -1 && !VAR_4 )
                return VAR_5;
        }
        else if( VAR_3->type == VAR_0 )
        {
            break;
        }
    }
    if( VAR_3 )
        return VAR_4 ? ((const webvtt_dom_cue_t *) VAR_3)->i_stop:
                       ((const webvtt_dom_cue_t *) VAR_3)->i_start;
    return VAR_2;
}
