
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_3, char *VAR_4)
{
    uint32_t VAR_5, VAR_6 = 0, VAR_7, VAR_8 = 0;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
        FUNC_0(&VAR_4[2 * VAR_5 + VAR_6], "%02hhX", VAR_3[VAR_5]);

        if ((VAR_5 + 1) == VAR_2)
            VAR_7 = 2 * (VAR_5 + 1) + VAR_6;

        if (VAR_5 >= VAR_2)
            VAR_8 |= VAR_3[VAR_5];

        if (!((VAR_5 + 1) % VAR_0)) {
            VAR_4[2 * (VAR_5 + 1) + VAR_6] = ' ';
            VAR_6++;
        }
    }

    VAR_4[2 * VAR_5 + VAR_6] = 0;

    if (!VAR_8)
        VAR_4[VAR_7] = 0;
}
