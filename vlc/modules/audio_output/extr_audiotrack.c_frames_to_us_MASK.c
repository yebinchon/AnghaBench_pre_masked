
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint64_t ;
struct TYPE_4__ {int i_rate; } ;
struct TYPE_5__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ aout_sys_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline vlc_tick_t
FUNC_1( aout_sys_t *VAR_0, uint64_t VAR_1 )
{
    return FUNC_0(VAR_1, VAR_0->fmt.i_rate);
}
