
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {int (* set_delay ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ vlc_clock_t ;


 int FUNC_0 (TYPE_1__*,int ) ;

vlc_tick_t FUNC_1(vlc_clock_t *VAR_0, vlc_tick_t VAR_1)
{
    return VAR_0->set_delay(VAR_0, VAR_1);
}
