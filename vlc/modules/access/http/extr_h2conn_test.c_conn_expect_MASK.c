
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_fast8_t ;
typedef scalar_t__ uint8_t ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,...) ;

__attribute__((used)) static void FUNC_2(uint_fast8_t VAR_2)
{
    size_t VAR_3;
    ssize_t VAR_4;
    uint8_t VAR_5[9];
    uint8_t VAR_6;

    do {
        VAR_4 = FUNC_1(VAR_1, VAR_5, 9, 1);
        FUNC_0(VAR_4 == 9);
        FUNC_0(VAR_5[0] == 0);


        VAR_6 = VAR_5[3];
        FUNC_0(VAR_2 == VAR_6 || VAR_0 == VAR_6);

        VAR_3 = (VAR_5[1] << 8) | VAR_5[2];
        if (VAR_3 > 0)
        {
            char VAR_7[VAR_3];

            VAR_4 = FUNC_1(VAR_1, VAR_7, VAR_3, 1);
            FUNC_0(VAR_4 == (ssize_t)VAR_3);
        }
    }
    while (VAR_6 != VAR_2);
}
