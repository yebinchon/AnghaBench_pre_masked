
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_2 (char const*,int,int *) ;

int FUNC_3(
                const char* VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        uint64_t *VAR_11 = VAR_9;
        int VAR_12;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        VAR_12 = FUNC_2(VAR_8, 1024, VAR_11);
        if (VAR_12 < 0)
                FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_12, "Failed to parse size value, ignoring: %s", VAR_8);

        return 0;
}
