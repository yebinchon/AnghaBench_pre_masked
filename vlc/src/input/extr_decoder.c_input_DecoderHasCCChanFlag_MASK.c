
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
typedef int uint64_t ;
struct TYPE_3__ {int i_608_channels; int i_708_channels; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;
struct decoder_owner {TYPE_2__ cc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_0( struct decoder_owner *VAR_2,
                                        vlc_fourcc_t VAR_3, int VAR_4 )
{
    int VAR_5;
    uint64_t VAR_6;
    if( VAR_3 == VAR_0 )
    {
        VAR_5 = 4;
        VAR_6 = VAR_2->cc.desc.i_608_channels;
    }
    else if( VAR_3 == VAR_1 )
    {
        VAR_5 = 64;
        VAR_6 = VAR_2->cc.desc.i_708_channels;
    }
    else return 0;

    return ( VAR_4 >= 0 && VAR_4 < VAR_5 &&
             ( VAR_6 & ((uint64_t)1 << VAR_4) ) );
}
