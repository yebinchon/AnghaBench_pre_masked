
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_2 (char const*,int,scalar_t__*) ;

int FUNC_3(const char* VAR_2,
                            const char *VAR_3,
                            unsigned VAR_4,
                            const char *VAR_5,
                            unsigned VAR_6,
                            const char *VAR_7,
                            int VAR_8,
                            const char *VAR_9,
                            void *VAR_10,
                            void *VAR_11) {

        size_t *VAR_12 = VAR_10;
        uint64_t VAR_13;
        int VAR_14;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        VAR_14 = FUNC_2(VAR_9, 1024, &VAR_13);
        if (VAR_14 >= 0 && (uint64_t) (size_t) VAR_13 != VAR_13)
                VAR_14 = -VAR_0;
        if (VAR_14 < 0) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_14, "Failed to parse size value '%s', ignoring: %m", VAR_9);
                return 0;
        }

        *VAR_12 = (size_t) VAR_13;
        return 0;
}
