
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int var; scalar_t__ avg; } ;
typedef TYPE_1__ vout_chrono_t ;
typedef int vlc_tick_t ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline vlc_tick_t FUNC_1(vout_chrono_t *VAR_0)
{
    return FUNC_0(VAR_0->avg - 2 * VAR_0->var, 0);
}
