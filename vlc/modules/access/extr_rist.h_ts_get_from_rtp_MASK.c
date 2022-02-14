
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef scalar_t__ uint32_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline vlc_tick_t FUNC_0( uint32_t VAR_1 )
{
    unsigned VAR_2 = 90000;
    return (vlc_tick_t)VAR_1 * (vlc_tick_t)(VAR_0/VAR_2);
}
