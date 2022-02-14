
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ AddressFamily ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int ,char*,char const*,...) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

int FUNC_5(
                const char* VAR_6,
                const char *VAR_7,
                unsigned VAR_8,
                const char *VAR_9,
                unsigned VAR_10,
                const char *VAR_11,
                int VAR_12,
                const char *VAR_13,
                void *VAR_14,
                void *VAR_15) {

        AddressFamily *VAR_16 = VAR_14, VAR_17;

        FUNC_2(VAR_7);
        FUNC_2(VAR_11);
        FUNC_2(VAR_13);
        FUNC_2(VAR_14);





        VAR_17 = FUNC_0(VAR_13);
        if (VAR_17 < 0) {




                if (FUNC_4(VAR_13, "none"))
                        VAR_17 = VAR_2;
                else if (FUNC_4(VAR_13, "v4"))
                        VAR_17 = VAR_0;
                else if (FUNC_4(VAR_13, "v6"))
                        VAR_17 = VAR_1;
                else if (FUNC_4(VAR_13, "both"))
                        VAR_17 = VAR_3;
                else {
                        FUNC_3(VAR_6, VAR_4, VAR_7, VAR_8, 0,
                                   "Failed to parse DHCP option, ignoring: %s", VAR_13);
                        return 0;
                }

                FUNC_3(VAR_6, VAR_5, VAR_7, VAR_8, 0,
                           "DHCP=%s is deprecated, please use DHCP=%s instead.",
                           VAR_13, FUNC_1(VAR_17));
        }

        *VAR_16 = VAR_17;
        return 0;
}
