
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* psz_tagname; struct TYPE_4__* p_next; } ;
typedef TYPE_1__ tag_stack_t ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2( tag_stack_t **VAR_0, char* VAR_1 )
{
    tag_stack_t* VAR_2 = FUNC_0( sizeof( *VAR_2 ) );
    if ( FUNC_1( !VAR_2 ) )
        return;
    VAR_2->p_next = *VAR_0;
    VAR_2->psz_tagname = VAR_1;
    *VAR_0 = VAR_2;
}
