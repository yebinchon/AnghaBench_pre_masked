
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wait; } ;
struct TYPE_5__ {TYPE_1__ destructor; int start_delay_cond; int aout_listeners_lock; int vout_listeners_lock; int lock; } ;
typedef TYPE_2__ vlc_player_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(vlc_player_t *VAR_0)
{
    FUNC_1(&VAR_0->lock);
    FUNC_1(&VAR_0->vout_listeners_lock);
    FUNC_1(&VAR_0->aout_listeners_lock);
    FUNC_0(&VAR_0->start_delay_cond);
    FUNC_0(&VAR_0->destructor.wait);
}
