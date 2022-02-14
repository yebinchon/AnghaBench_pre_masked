
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int sd_bus_message ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*,char const*,size_t) ;
 int FUNC_3 (int *,int,char,char const*,char const**) ;
 int* FUNC_4 (int *,int,int,int) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(
                sd_bus_message *VAR_4,
                uint64_t VAR_5,
                const char *VAR_6,
                const char **VAR_7) {

        size_t VAR_8;
        uint8_t *VAR_9;

        FUNC_1(VAR_4);


        if (VAR_5 > 0xFF)
                return -VAR_0;



        VAR_8 = FUNC_5(VAR_6);
        if (VAR_8 > VAR_2)
                return -VAR_0;



        if (FUNC_0(VAR_4))

                return FUNC_3(VAR_4, VAR_5, 'g', VAR_6, VAR_7);
        else {

                VAR_9 = FUNC_4(VAR_4, 8, 4 + 1 + VAR_8 + 1, 0);
                if (!VAR_9)
                        return -VAR_1;

                VAR_9[0] = (uint8_t) VAR_5;
                VAR_9[1] = 1;
                VAR_9[2] = VAR_3;
                VAR_9[3] = 0;
                VAR_9[4] = VAR_8;
                FUNC_2(VAR_9 + 5, VAR_6, VAR_8 + 1);

                if (VAR_7)
                        *VAR_7 = (const char*) VAR_9 + 5;
        }

        return 0;
}
