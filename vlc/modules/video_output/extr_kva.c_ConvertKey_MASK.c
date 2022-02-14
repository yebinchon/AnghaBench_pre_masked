
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ USHORT ;
struct TYPE_2__ {scalar_t__ i_pmkey; int i_vlckey; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0( USHORT VAR_1 )
{
    int VAR_2;
    for( VAR_2 = 0; VAR_0[ VAR_2 ].i_pmkey != 0; VAR_2++ )
    {
        if( VAR_0[ VAR_2 ].i_pmkey == VAR_1 )
            return VAR_0[ VAR_2 ].i_vlckey;
    }
    return 0;
}
