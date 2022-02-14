
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {scalar_t__ (* to_system_locked ) (TYPE_1__*,scalar_t__,scalar_t__,double) ;TYPE_2__* owner; } ;
typedef TYPE_1__ vlc_clock_t ;
struct TYPE_7__ {int lock; } ;
typedef TYPE_2__ vlc_clock_main_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__,scalar_t__,double) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__,double,unsigned int,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static vlc_tick_t FUNC_4(vlc_clock_t *VAR_1,
                                         vlc_tick_t VAR_2,
                                         vlc_tick_t VAR_3, double VAR_4,
                                         unsigned VAR_5,
                                         unsigned VAR_6)
{
    vlc_clock_main_t *VAR_7 = VAR_1->owner;
    FUNC_2(&VAR_7->lock);



    vlc_tick_t VAR_8 = VAR_2 == VAR_0 ? VAR_0
                        : VAR_1->to_system_locked(VAR_1, VAR_2, VAR_3, VAR_4);

    FUNC_3(&VAR_7->lock);

    FUNC_1(VAR_1, VAR_8, VAR_3, VAR_4, VAR_5, VAR_6);
    return VAR_8 != VAR_0 ? VAR_8 - VAR_2 : VAR_0;
}
