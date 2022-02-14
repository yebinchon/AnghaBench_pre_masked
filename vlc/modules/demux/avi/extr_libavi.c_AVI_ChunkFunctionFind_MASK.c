
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_2__ {scalar_t__ i_fourcc; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0( vlc_fourcc_t VAR_1 )
{
    unsigned int VAR_2;
    for( VAR_2 = 0; ; VAR_2++ )
    {
        if( ( VAR_0[VAR_2].i_fourcc == VAR_1 )||
            ( VAR_0[VAR_2].i_fourcc == 0 ) )
        {
            return VAR_2;
        }
    }
}
