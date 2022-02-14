
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {int (* update ) (TYPE_1__*,int ,int ,double,int ,int ) ;} ;
typedef TYPE_1__ vlc_clock_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,double,int ,int ) ;

vlc_tick_t FUNC_1(vlc_clock_t *VAR_0, vlc_tick_t VAR_1,
                            vlc_tick_t VAR_2, double VAR_3)
{
    return VAR_0->update(VAR_0, VAR_1, VAR_2, VAR_3, 0, 0);
}
