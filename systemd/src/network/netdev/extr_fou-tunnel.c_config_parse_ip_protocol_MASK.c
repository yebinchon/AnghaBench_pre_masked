
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char const*,int*) ;

int FUNC_5(
                const char *VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                unsigned VAR_7,
                const char *VAR_8,
                int VAR_9,
                const char *VAR_10,
                void *VAR_11,
                void *VAR_12) {

        uint8_t *VAR_13 = VAR_11;
        int VAR_14;

        FUNC_0(VAR_4);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_10);
        FUNC_0(VAR_11);

        FUNC_1(VAR_0-1 <= VAR_2);

        VAR_14 = FUNC_3(VAR_10);
        if (VAR_14 < 0) {
                VAR_14 = FUNC_4(VAR_10, VAR_13);
                if (VAR_14 < 0)
                        FUNC_2(VAR_3, VAR_1, VAR_4, VAR_5, VAR_14,
                                   "Failed to parse IP protocol '%s' for Foo over UDP tunnel, "
                                   "ignoring assignment: %m", VAR_10);
                return 0;
        }

        *VAR_13 = VAR_14;
        return 0;
}
