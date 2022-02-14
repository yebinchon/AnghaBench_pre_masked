
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_next; int psz_value; int psz_name; } ;
typedef TYPE_1__ config_chain_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2( config_chain_t *VAR_0, config_chain_t *VAR_1 )
{
    while(VAR_0 && VAR_1)
    {
        FUNC_0( !FUNC_1( VAR_0->psz_name, VAR_1->psz_name ) &&
                !FUNC_1( VAR_0->psz_value, VAR_1->psz_value ) );

        VAR_0 = VAR_0->p_next;
        VAR_1 = VAR_1->p_next;
    }
    FUNC_0(!VAR_0 && !VAR_1);
}
