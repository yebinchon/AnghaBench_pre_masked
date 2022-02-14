
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* psz_text; } ;
typedef TYPE_1__ webvtt_dom_text_t ;
struct TYPE_6__ {scalar_t__ type; struct TYPE_6__* p_next; } ;
typedef TYPE_2__ webvtt_dom_node_t ;
struct TYPE_7__ {int i_lines; TYPE_2__* p_child; } ;
typedef TYPE_3__ webvtt_dom_cue_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char) ;
 size_t FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,size_t) ;

__attribute__((used)) static unsigned FUNC_4( webvtt_dom_cue_t *VAR_1 )
{
    if( VAR_1->i_lines < 1 )
        return 0;

    for( webvtt_dom_node_t *VAR_2 = VAR_1->p_child;
                           VAR_2; VAR_2 = VAR_2->p_next )
    {
        if( VAR_2->type != VAR_0 )
            continue;
        webvtt_dom_text_t *VAR_3 = (webvtt_dom_text_t *) VAR_2;
        const char *VAR_4 = FUNC_1( VAR_3->psz_text, '\n' );
        if( VAR_4 )
        {
            size_t VAR_5 = FUNC_2( VAR_3->psz_text );
            size_t VAR_6 = VAR_5 - (VAR_4 - VAR_3->psz_text);
            char *VAR_7 = FUNC_3( VAR_4 + 1, VAR_6 );
            FUNC_0( VAR_3->psz_text );
            VAR_3->psz_text = VAR_7;
            return --VAR_1->i_lines;
        }
        else
        {
            FUNC_0( VAR_3->psz_text );
            VAR_3->psz_text = ((void*)0);

        }
    }

    return VAR_1->i_lines;
}
