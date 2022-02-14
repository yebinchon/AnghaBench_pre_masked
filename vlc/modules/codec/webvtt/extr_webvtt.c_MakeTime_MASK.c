
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_tick_t ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static vlc_tick_t FUNC_2( unsigned VAR_0[4] )
{
    return FUNC_1( VAR_0[0] * 3600 + VAR_0[1] * 60 + VAR_0[2] ) +
           FUNC_0(VAR_0[3]);
}
