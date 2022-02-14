
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_tick_t ;
typedef int tt_time_t ;


 scalar_t__ FUNC_0 (int const*) ;

__attribute__((used)) static inline int FUNC_1( const tt_time_t *VAR_0, const tt_time_t *VAR_1 )
{
    vlc_tick_t VAR_2 = FUNC_0( VAR_0 );
    vlc_tick_t VAR_3 = FUNC_0( VAR_1 );
    if (VAR_2 < VAR_3)
        return -1;
    return VAR_2 > VAR_3;
}
