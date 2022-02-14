
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int uint8_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static vlc_tick_t FUNC_1(const uint8_t *VAR_0, double VAR_1)
{
    return FUNC_0( VAR_0[0] * 3600 +
                         VAR_0[1] * 60 +
                         VAR_0[2] * 1 +
                         VAR_0[3] / VAR_1);
}
