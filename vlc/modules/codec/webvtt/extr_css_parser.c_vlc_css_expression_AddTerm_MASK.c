
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_css_term_t ;
struct TYPE_4__ {int i_count; int i_alloc; TYPE_3__* seq; } ;
typedef TYPE_1__ vlc_css_expr_t ;
struct TYPE_5__ {char op; int term; } ;


 void* FUNC_0 (TYPE_3__*,size_t) ;

bool FUNC_1( vlc_css_expr_t *VAR_0,
                                        char VAR_1, vlc_css_term_t VAR_2 )
{
    if( VAR_0->i_count >= VAR_0->i_alloc )
    {
        size_t VAR_3 = (VAR_0->i_alloc == 0) ? 1 : VAR_0->i_alloc + 4;
        void *VAR_4 = FUNC_0( VAR_0->seq, VAR_3 * sizeof(VAR_0->seq[0]) );
        if( VAR_4 )
        {
            VAR_0->seq = VAR_4;
            VAR_0->i_alloc = VAR_3;
        }
    }

    if( VAR_0->i_count >= VAR_0->i_alloc )
        return 0;

    VAR_0->seq[VAR_0->i_count].op = VAR_1;
    VAR_0->seq[VAR_0->i_count++].term = VAR_2;
    return 1;
}
