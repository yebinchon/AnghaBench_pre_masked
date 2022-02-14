
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__* pi_system_ids; } ;
typedef TYPE_1__ system_ids_t ;



__attribute__((used)) static bool FUNC_0( const system_ids_t *VAR_0, uint16_t VAR_1 )
{
    int VAR_2 = 0;
    if( !VAR_0 ) return 1;

    while ( VAR_0->pi_system_ids[VAR_2] )
    {
        if ( VAR_0->pi_system_ids[VAR_2] == VAR_1 )
            return 1;
        VAR_2++;
    }

    return 0;
}
