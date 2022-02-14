
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int uint8_t ;


 int VAR_0 ;

__attribute__((used)) static vlc_tick_t FUNC_0(uint8_t *VAR_1, double VAR_2)
{
    return VAR_0 * (VAR_1[0] * 3600 +
                         VAR_1[1] * 60 +
                         VAR_1[2] * 1 +
                         VAR_1[3] / VAR_2);
}
