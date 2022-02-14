
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;


 scalar_t__ FUNC_0 (char**,char*,int,int,int,char,int,int,int,char,double,double,double,double) ;
 int FUNC_1 (double) ;

__attribute__((used)) static char* FUNC_2(uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2,
                             uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5) {
        char *VAR_6;
        char VAR_7 = VAR_0 >= 1U<<31 ? 'N' : 'S';
        char VAR_8 = VAR_1 >= 1U<<31 ? 'E' : 'W';

        int VAR_9 = VAR_0 >= 1U<<31 ? (int) (VAR_0 - (1U<<31)) : (int) ((1U<<31) - VAR_0);
        int VAR_10 = VAR_1 >= 1U<<31 ? (int) (VAR_1 - (1U<<31)) : (int) ((1U<<31) - VAR_1);
        double VAR_11 = VAR_2 >= 10000000u ? VAR_2 - 10000000u : -(double)(10000000u - VAR_2);
        double VAR_12 = (VAR_3 >> 4) * FUNC_1((double) (VAR_3 & 0xF));
        double VAR_13 = (VAR_4 >> 4) * FUNC_1((double) (VAR_4 & 0xF));
        double VAR_14 = (VAR_5 >> 4) * FUNC_1((double) (VAR_5 & 0xF));

        if (FUNC_0(&VAR_6, "%d %d %.3d %c %d %d %.3d %c %.2fm %.2fm %.2fm %.2fm",
                     (VAR_9 / 60000 / 60),
                     (VAR_9 / 60000) % 60,
                     (VAR_9 % 60000) / 1000.,
                     VAR_7,
                     (VAR_10 / 60000 / 60),
                     (VAR_10 / 60000) % 60,
                     (VAR_10 % 60000) / 1000.,
                     VAR_8,
                     VAR_11 / 100.,
                     VAR_12 / 100.,
                     VAR_13 / 100.,
                     VAR_14 / 100.) < 0)
                return ((void*)0);

        return VAR_6;
}
