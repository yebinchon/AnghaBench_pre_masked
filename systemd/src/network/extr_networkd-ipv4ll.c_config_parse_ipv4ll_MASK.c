
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AddressFamily ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 char const* FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char const*,int ,char const*,unsigned int,int,char*,char const*,char const*,char const*) ;
 int FUNC_4 (char const*) ;

int FUNC_5(
                const char* VAR_3,
                const char *VAR_4,
                unsigned VAR_5,
                const char *VAR_6,
                unsigned VAR_7,
                const char *VAR_8,
                int VAR_9,
                const char *VAR_10,
                void *VAR_11,
                void *VAR_12) {

        AddressFamily *VAR_13 = VAR_11;
        int VAR_14;

        FUNC_2(VAR_4);
        FUNC_2(VAR_8);
        FUNC_2(VAR_10);
        FUNC_2(VAR_11);





        VAR_14 = FUNC_4(VAR_10);
        if (VAR_14 < 0) {
                FUNC_3(VAR_3, VAR_1, VAR_4, VAR_5, VAR_14,
                           "Failed to parse %s=%s, ignoring assignment. "
                           "Note that the setting %s= is deprecated, please use LinkLocalAddressing= instead.",
                           VAR_8, VAR_10, VAR_8);
                return 0;
        }

        FUNC_0(*VAR_13, VAR_0, VAR_14);

        FUNC_3(VAR_3, VAR_2, VAR_4, VAR_5, 0,
                   "%s=%s is deprecated, please use LinkLocalAddressing=%s instead.",
                   VAR_8, VAR_10, FUNC_1(*VAR_13));

        return 0;
}
