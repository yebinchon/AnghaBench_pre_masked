
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int uint64_t ;
typedef size_t uint32_t ;
typedef int sd_bus_message ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char* FUNC_3 (int *,int,int,int) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5(
                sd_bus_message *VAR_3,
                uint64_t VAR_4,
                char VAR_5,
                const char *VAR_6,
                const char **VAR_7) {

        size_t VAR_8;
        uint8_t *VAR_9;

        FUNC_1(VAR_3);


        if (VAR_4 > 0xFF)
                return -VAR_0;



        VAR_8 = FUNC_4(VAR_6);
        if (VAR_8 > VAR_2)
                return -VAR_0;



        if (FUNC_0(VAR_3)) {


                VAR_9 = FUNC_3(VAR_3, 8, 8 + VAR_8 + 1 + 1 + 1, 1);
                if (!VAR_9)
                        return -VAR_1;

                *((uint64_t*) VAR_9) = VAR_4;
                FUNC_2(VAR_9+8, VAR_6, VAR_8);
                VAR_9[8+VAR_8] = 0;
                VAR_9[8+VAR_8+1] = 0;
                VAR_9[8+VAR_8+2] = VAR_5;

                if (VAR_7)
                        *VAR_7 = (char*) VAR_9 + 8;

        } else {

                VAR_9 = FUNC_3(VAR_3, 8, 4 + 4 + VAR_8 + 1, 0);
                if (!VAR_9)
                        return -VAR_1;

                VAR_9[0] = (uint8_t) VAR_4;
                VAR_9[1] = 1;
                VAR_9[2] = VAR_5;
                VAR_9[3] = 0;

                ((uint32_t*) VAR_9)[1] = VAR_8;
                FUNC_2(VAR_9 + 8, VAR_6, VAR_8 + 1);

                if (VAR_7)
                        *VAR_7 = (char*) VAR_9 + 8;
        }

        return 0;
}
