
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_dictionary_t ;
struct TYPE_7__ {scalar_t__ p_rootnode; } ;
typedef TYPE_1__ ttml_context_t ;
struct TYPE_8__ {int attr_dict; int psz_node_name; TYPE_3__* p_child; } ;
typedef TYPE_2__ tt_node_t ;
struct TYPE_9__ {scalar_t__ i_type; struct TYPE_9__* p_next; } ;
typedef TYPE_3__ tt_basenode_t ;


 int FUNC_0 (TYPE_1__*,char const*,int *) ;
 int FUNC_1 (int *,int *,int) ;
 TYPE_2__* FUNC_2 (scalar_t__,char*,int,char const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int *,char*) ;

__attribute__((used)) static void FUNC_7( ttml_context_t *VAR_1, const char *VAR_2,
                                   vlc_dictionary_t *VAR_3 )
{
    FUNC_3(VAR_1->p_rootnode);
    if( VAR_2 && VAR_1->p_rootnode )
    {
        const tt_node_t *VAR_4 = FUNC_2( VAR_1->p_rootnode,
                                                 "region", -1, VAR_2 );
        if( !VAR_4 )
            return;

        FUNC_1( &VAR_4->attr_dict, VAR_3, 0 );

        const char *VAR_5 = (const char *)
                FUNC_6( &VAR_4->attr_dict, "style" );
        if( VAR_5 )
            FUNC_0( VAR_1, VAR_5, VAR_3 );

        for( const tt_basenode_t *VAR_6 = VAR_4->p_child;
                                  VAR_6; VAR_6 = VAR_6->p_next )
        {
            if( FUNC_5( VAR_6->i_type == VAR_0 ) )
                continue;

            const tt_node_t *VAR_7 = (const tt_node_t *) VAR_6;
            if( !FUNC_4( VAR_7->psz_node_name, "style" ) )
            {
                FUNC_1( &VAR_7->attr_dict, VAR_3, 0 );
            }
        }
    }
}
