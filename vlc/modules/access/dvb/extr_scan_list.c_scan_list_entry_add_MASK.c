
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* p_next; } ;
typedef TYPE_1__ scan_list_entry_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static bool FUNC_2( scan_list_entry_t ***VAR_0, scan_list_entry_t *VAR_1 )
{
    if( FUNC_1( VAR_1 ) )
    {
         **VAR_0 = VAR_1;
         *VAR_0 = &VAR_1->p_next;
        return 1;
    }

    FUNC_0( VAR_1 );
    return 0;
}
