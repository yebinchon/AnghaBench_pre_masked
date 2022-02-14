
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {int cbs_data; TYPE_1__* cbs; } ;
typedef TYPE_2__ vlc_clock_t ;
struct TYPE_4__ {int (* on_update ) (int ,int ,double,unsigned int,unsigned int,int ) ;} ;


 int FUNC_0 (int ,int ,double,unsigned int,unsigned int,int ) ;

__attribute__((used)) static inline void FUNC_1(vlc_clock_t *VAR_0,
                                       vlc_tick_t VAR_1,
                                       vlc_tick_t VAR_2, double VAR_3,
                                       unsigned VAR_4,
                                       unsigned VAR_5)
{
    if (VAR_0->cbs)
        VAR_0->cbs->on_update(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                              VAR_0->cbs_data);
}
