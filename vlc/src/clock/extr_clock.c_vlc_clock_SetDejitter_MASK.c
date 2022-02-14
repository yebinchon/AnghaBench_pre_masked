
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {int (* set_dejitter ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ vlc_clock_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(vlc_clock_t *VAR_0, vlc_tick_t VAR_1)
{
    VAR_0->set_dejitter(VAR_0, VAR_1);
}
