
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_start; TYPE_2__* p_child; } ;
typedef TYPE_1__ webvtt_dom_tag_t ;
struct TYPE_7__ {int type; struct TYPE_7__* p_next; } ;
typedef TYPE_2__ webvtt_dom_node_t ;
typedef int vlc_tick_t ;
typedef int vlc_array_t ;





 int FUNC_0 (int *,void*) ;
 TYPE_2__* FUNC_1 (TYPE_2__ const*) ;

__attribute__((used)) static void FUNC_2( const webvtt_dom_node_t *VAR_0,
                           vlc_tick_t VAR_1, vlc_tick_t VAR_2, vlc_array_t *VAR_3 )
{
    for( ; VAR_0; VAR_0 = VAR_0->p_next )
    {
        switch( VAR_0->type )
        {
            case 128:
            {
                const webvtt_dom_tag_t *VAR_4 = (const webvtt_dom_tag_t *) VAR_0;
                if( VAR_4->i_start > -1 && VAR_4->i_start >= VAR_1 && VAR_4->i_start < VAR_2 )
                    (void) FUNC_0( VAR_3, (void *) VAR_4 );
                FUNC_2( VAR_4->p_child, VAR_1, VAR_2, VAR_3 );
            } break;
            case 129:
            case 130:
                FUNC_2( FUNC_1( VAR_0 ),
                              VAR_1, VAR_2, VAR_3 );
                break;
            default:
                break;
        }
    }
}
