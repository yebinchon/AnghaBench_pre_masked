
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_child; int attr_dict; int psz_node_name; } ;
typedef TYPE_1__ tt_node_t ;
struct TYPE_6__ {scalar_t__ i_type; struct TYPE_6__* p_next; } ;
typedef TYPE_2__ tt_basenode_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,char const*) ;
 char* FUNC_2 (int *,char*) ;

__attribute__((used)) static tt_node_t * FUNC_3( tt_node_t *VAR_1, const char *VAR_2,
                             size_t VAR_3, const char *VAR_4 )
{
    if( !FUNC_1( VAR_1->psz_node_name, VAR_2 ) )
    {
        if( VAR_4 != ((void*)0) )
        {
            char *VAR_5 = FUNC_2( &VAR_1->attr_dict, "xml:id" );
            if( !VAR_5 )
                VAR_5 = FUNC_2( &VAR_1->attr_dict, "id" );
            if( VAR_5 && !FUNC_0( VAR_5, VAR_4 ) )
                return VAR_1;
        }
        else return VAR_1;
    }

    if( VAR_3 == 0 )
        return ((void*)0);

    for( tt_basenode_t *VAR_6 = VAR_1->p_child;
                        VAR_6; VAR_6 = VAR_6->p_next )
    {
        if( VAR_6->i_type == VAR_0 )
            continue;

        VAR_1 = FUNC_3( (tt_node_t *) VAR_6, VAR_2, VAR_3 - 1, VAR_4 );
        if( VAR_1 )
            return VAR_1;
    }

    return ((void*)0);
}
