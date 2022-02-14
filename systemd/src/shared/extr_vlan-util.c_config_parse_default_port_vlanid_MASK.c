
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,char const*,unsigned int,char const*,unsigned int,char const*,int,char const*,void*,void*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

int FUNC_3(
                const char *VAR_0,
                const char *VAR_1,
                unsigned VAR_2,
                const char *VAR_3,
                unsigned VAR_4,
                const char *VAR_5,
                int VAR_6,
                const char *VAR_7,
                void *VAR_8,
                void *VAR_9) {
        uint16_t *VAR_10 = VAR_8;

        FUNC_0(VAR_5);
        FUNC_0(VAR_7);
        FUNC_0(VAR_8);

        if (FUNC_2(VAR_7, "none")) {
                *VAR_10 = 0;
                return 0;
        }

        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
                                   VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
