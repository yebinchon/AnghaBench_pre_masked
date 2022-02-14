
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,scalar_t__,...) ;
 int FUNC_2 (char const*,scalar_t__*) ;

int FUNC_3(
                const char *VAR_2,
                const char *VAR_3,
                unsigned VAR_4,
                const char *VAR_5,
                unsigned VAR_6,
                const char *VAR_7,
                int VAR_8,
                const char *VAR_9,
                void *VAR_10,
                void *VAR_11) {

        uint16_t VAR_12;
        int VAR_13;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        VAR_13 = FUNC_2(VAR_9, &VAR_12);
        if (VAR_13 < 0) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_13,
                           "Failed to parse bridge port priority, ignoring: %s", VAR_9);
                return 0;
        }

        if (VAR_12 > VAR_0) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_13,
                           "Bridge port priority is larger than maximum %u, ignoring: %s", VAR_0, VAR_9);
                return 0;
        }

        *((uint16_t *)VAR_10) = VAR_12;

        return 0;
}
