
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LLDPEmit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ,char const*,unsigned int,int ,char*,char const*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(
                const char *VAR_5,
                const char *VAR_6,
                unsigned VAR_7,
                const char *VAR_8,
                unsigned VAR_9,
                const char *VAR_10,
                int VAR_11,
                const char *VAR_12,
                void *VAR_13,
                void *VAR_14) {

        LLDPEmit *VAR_15 = VAR_13;
        int VAR_16;

        FUNC_0(VAR_6);
        FUNC_0(VAR_10);
        FUNC_0(VAR_12);

        if (FUNC_1(VAR_12))
                *VAR_15 = VAR_2;
        else if (FUNC_4(VAR_12, "nearest-bridge"))
                *VAR_15 = VAR_1;
        else if (FUNC_4(VAR_12, "non-tpmr-bridge"))
                *VAR_15 = VAR_3;
        else if (FUNC_4(VAR_12, "customer-bridge"))
                *VAR_15 = VAR_0;
        else {
                VAR_16 = FUNC_3(VAR_12);
                if (VAR_16 < 0) {
                        FUNC_2(VAR_5, VAR_4, VAR_6, VAR_7, 0, "Failed to parse LLDP emission setting, ignoring: %s", VAR_12);
                        return 0;
                }

                *VAR_15 = VAR_16 ? VAR_1 : VAR_2;
        }

        return 0;
}
