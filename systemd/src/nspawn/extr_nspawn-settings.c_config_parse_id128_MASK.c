
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_2 (char const*,int *) ;

int FUNC_3(
                const char *VAR_1,
                const char *VAR_2,
                unsigned VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                int VAR_7,
                const char *VAR_8,
                void *VAR_9,
                void *VAR_10) {

        sd_id128_t VAR_11, *VAR_12 = VAR_9;
        int VAR_13;

        FUNC_0(VAR_2);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);

        VAR_13 = FUNC_2(VAR_8, &VAR_11);
        if (VAR_13 < 0) {
                FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_13, "Failed to parse 128bit ID/UUID, ignoring: %s", VAR_8);
                return 0;
        }

        *VAR_12 = VAR_11;
        return 0;
}
