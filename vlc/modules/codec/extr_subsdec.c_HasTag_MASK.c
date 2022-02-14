
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* psz_tagname; struct TYPE_5__* p_next; } ;
typedef TYPE_1__ tag_stack_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char const*,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2( tag_stack_t **VAR_0, const char* VAR_1 )
{
    tag_stack_t *VAR_2 = ((void*)0);
    for ( tag_stack_t* VAR_3 = *VAR_0; VAR_3; VAR_3 = VAR_3->p_next )
    {
        if ( !FUNC_1( VAR_1, VAR_3->psz_tagname ) )
        {
            if ( VAR_3 == *VAR_0 )
            {
                *VAR_0 = VAR_3->p_next;
            }
            else
            {
                VAR_2->p_next = VAR_3->p_next;
            }
            FUNC_0( VAR_3->psz_tagname );
            FUNC_0( VAR_3 );
            return 1;
        }
        VAR_2 = VAR_3;
    }
    return 0;
}
