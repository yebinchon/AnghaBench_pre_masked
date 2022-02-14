
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int uint8_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,double) ;

__attribute__((used)) static vlc_tick_t FUNC_2(uint8_t *VAR_0, double VAR_1)
{
    uint8_t VAR_2[4];
    for (int VAR_3 = 0; VAR_3 < 4; VAR_3++)
        VAR_2[VAR_3] = FUNC_0(&VAR_0[2 * VAR_3], 2);
    return FUNC_1(VAR_2, VAR_1);
}
