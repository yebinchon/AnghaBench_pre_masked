
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int,unsigned int) ;

int FUNC_6(
                const char* VAR_2,
                const char *VAR_3,
                unsigned VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                int VAR_8,
                const char *VAR_9,
                void *VAR_10,
                void *VAR_11) {

        uint64_t *VAR_12 = VAR_10;
        int VAR_13;

        FUNC_1(VAR_3);
        FUNC_1(VAR_7);
        FUNC_1(VAR_9);
        FUNC_1(VAR_10);


        VAR_13 = FUNC_3(VAR_9);
        if (VAR_13 > 0 && VAR_13 < 1000)
                *VAR_12 = FUNC_5(VAR_13, 1000U);
        else {
                uint64_t VAR_14;



                VAR_13 = FUNC_4(VAR_9, 1024, &VAR_14);
                if (VAR_13 >= 0 && (VAR_14 <= 0 || (uint64_t) (size_t) VAR_14 != VAR_14))
                        VAR_13 = -VAR_0;
                if (VAR_13 < 0) {
                        FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, VAR_13, "Failed to parse size value '%s', ignoring: %m", VAR_9);
                        return 0;
                }

                *VAR_12 = FUNC_0((size_t) VAR_14);
        }

        return 0;
}
