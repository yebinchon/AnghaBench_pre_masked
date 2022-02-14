
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_3__ {int lock; } ;
typedef TYPE_1__ vlc_fifo_t ;
typedef int vlc_cond_t ;


 int FUNC_0 (int *,int *,int ) ;

int FUNC_1(vlc_fifo_t *VAR_0, vlc_cond_t *VAR_1, vlc_tick_t VAR_2)
{
    return FUNC_0(VAR_1, &VAR_0->lock, VAR_2);
}
