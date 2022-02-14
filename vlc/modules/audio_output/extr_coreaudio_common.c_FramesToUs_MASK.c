
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int uint64_t ;
struct aout_sys_common {int i_rate; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline vlc_tick_t
FUNC_1(struct aout_sys_common *VAR_0, uint64_t VAR_1)
{
    return FUNC_0(VAR_1, VAR_0->i_rate);
}
