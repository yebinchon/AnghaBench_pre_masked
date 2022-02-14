
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_3__ {scalar_t__ i_duration; int lock; } ;
typedef TYPE_1__ input_item_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

vlc_tick_t FUNC_2( input_item_t *VAR_2 )
{
    FUNC_0( &VAR_2->lock );

    vlc_tick_t VAR_3 = VAR_2->i_duration;

    FUNC_1( &VAR_2->lock );
    if (VAR_3 == VAR_0)
        VAR_3 = 0;
    else if (VAR_3 == VAR_1)
        VAR_3 = 0;
    return VAR_3;
}
