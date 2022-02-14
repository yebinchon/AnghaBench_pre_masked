
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* p_rootnode; } ;
typedef TYPE_1__ ttml_context_t ;
struct TYPE_9__ {char* psz_text; } ;
typedef TYPE_2__ tt_textnode_t ;
struct TYPE_10__ {TYPE_4__* p_child; int psz_node_name; } ;
typedef TYPE_3__ tt_node_t ;
struct TYPE_11__ {scalar_t__ i_type; struct TYPE_11__* p_next; } ;
typedef TYPE_4__ tt_basenode_t ;


 TYPE_3__* FUNC_0 (TYPE_3__*,char*,int,char const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static const char * FUNC_3( ttml_context_t *VAR_1, const char *VAR_2 )
{
    if( !VAR_1->p_rootnode )
        return ((void*)0);

    tt_node_t *VAR_3 = FUNC_0( VAR_1->p_rootnode, "head", 1, ((void*)0) );
    if( !VAR_3 )
        return ((void*)0);

    for( tt_basenode_t *VAR_4 = VAR_3->p_child;
                        VAR_4; VAR_4 = VAR_4->p_next )
    {
        if( VAR_4->i_type == VAR_0 )
            continue;

        tt_node_t *VAR_5 = (tt_node_t *) VAR_4;
        if( FUNC_2( VAR_5->psz_node_name, "metadata" ) )
            continue;

        tt_node_t *VAR_6 = FUNC_0( VAR_5, "smpte:image", 1, VAR_2 );
        if( !VAR_6 )
            continue;

        if( !VAR_6->p_child || VAR_6->p_child->i_type != VAR_0 )
            return ((void*)0);

        tt_textnode_t *VAR_7 = (tt_textnode_t *) VAR_6->p_child;
        const char *VAR_8 = VAR_7->psz_text;
        while( FUNC_1( *VAR_8 ) )
            VAR_8++;
        return VAR_8;
    }

    return ((void*)0);
}
