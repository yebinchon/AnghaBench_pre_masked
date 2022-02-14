
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char const*,unsigned int*,unsigned int*) ;

int FUNC_1(const char *VAR_2, uint16_t *VAR_3, uint16_t *VAR_4) {
        unsigned VAR_5, VAR_6;
        int VAR_7;

        VAR_7 = FUNC_0(VAR_2, &VAR_5, &VAR_6);
        if (VAR_7 < 0)
                return VAR_7;

        if (VAR_5 > VAR_1 || VAR_6 > VAR_1 || VAR_5 > VAR_6)
                return -VAR_0;

        *VAR_3 = VAR_5;
        *VAR_4 = VAR_6;
        return 0;
}
