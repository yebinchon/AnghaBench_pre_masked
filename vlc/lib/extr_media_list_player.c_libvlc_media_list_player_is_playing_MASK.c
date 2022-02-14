
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ libvlc_state_t ;
struct TYPE_3__ {int p_mi; } ;
typedef TYPE_1__ libvlc_media_list_player_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

bool FUNC_1(libvlc_media_list_player_t * VAR_2)
{
    libvlc_state_t VAR_3 = FUNC_0(VAR_2->p_mi);
    return (VAR_3 == VAR_0) || (VAR_3 == VAR_1);
}
