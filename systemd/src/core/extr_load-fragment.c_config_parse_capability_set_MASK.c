
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,scalar_t__*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int,char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int FUNC_4(
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

        uint64_t *VAR_12 = VAR_10;
        uint64_t VAR_13 = 0, VAR_14 = 0;
        bool VAR_15 = 0;
        int VAR_16;

        FUNC_0(VAR_3);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        if (VAR_9[0] == '~') {
                VAR_15 = 1;
                VAR_9++;
        }

        if (FUNC_3(VAR_7, "CapabilityBoundingSet"))
                VAR_14 = VAR_0;


        VAR_16 = FUNC_1(VAR_9, &VAR_13);
        if (VAR_16 < 0) {
                FUNC_2(VAR_2, VAR_1, VAR_3, VAR_4, VAR_16, "Failed to parse %s= specifier '%s', ignoring: %m", VAR_7, VAR_9);
                return 0;
        }

        if (VAR_13 == 0 || *VAR_12 == VAR_14)

                *VAR_12 = VAR_15 ? ~VAR_13 : VAR_13;
        else {

                if (VAR_15)
                        *VAR_12 &= ~VAR_13;
                else
                        *VAR_12 |= VAR_13;
        }

        return 0;
}
