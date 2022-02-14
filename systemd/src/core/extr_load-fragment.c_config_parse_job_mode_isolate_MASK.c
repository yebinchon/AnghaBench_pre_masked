
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int JobMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*) ;
 int FUNC_3 (char const*) ;

int FUNC_4(
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

        JobMode *VAR_13 = VAR_11;
        int VAR_14;

        FUNC_0(VAR_4);
        FUNC_0(VAR_8);
        FUNC_0(VAR_10);

        VAR_14 = FUNC_3(VAR_10);
        if (VAR_14 < 0) {
                FUNC_2(VAR_3, VAR_2, VAR_4, VAR_5, VAR_14, "Failed to parse boolean, ignoring: %s", VAR_10);
                return 0;
        }

        FUNC_1("%s is deprecated. Please use OnFailureJobMode= instead", VAR_8);

        *VAR_13 = VAR_14 ? VAR_0 : VAR_1;
        return 0;
}
