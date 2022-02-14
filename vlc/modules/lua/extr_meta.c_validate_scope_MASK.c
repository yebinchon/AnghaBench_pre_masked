
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ meta_fetcher_scope_t ;
struct TYPE_3__ {scalar_t__ e_scope; } ;
typedef TYPE_1__ luabatch_context_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0( const luabatch_context_t *VAR_1, meta_fetcher_scope_t VAR_2 )
{
    if ( VAR_1->e_scope == VAR_0 )
        return 1;
    else
        return ( VAR_1->e_scope == VAR_2 );
}
