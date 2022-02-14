
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char**,int *) ;

__attribute__((used)) static int FUNC_4(char **VAR_10, char **VAR_11, char **VAR_12) {
        int VAR_13;

        VAR_13 = FUNC_3(VAR_5 ?: VAR_2, VAR_10, ((void*)0));
        if (VAR_13 < 0)
                return FUNC_1(VAR_13, "Failed to read key from file '%s': %m",
                                       VAR_5 ?: VAR_2);

        VAR_13 = FUNC_3(VAR_4 ?: VAR_0, VAR_11, ((void*)0));
        if (VAR_13 < 0)
                return FUNC_1(VAR_13, "Failed to read certificate from file '%s': %m",
                                       VAR_4 ?: VAR_0);

        if (VAR_9)
                FUNC_2("Certificate checking disabled.");
        else {
                VAR_13 = FUNC_3(VAR_8 ?: VAR_3, VAR_12, ((void*)0));
                if (VAR_13 < 0)
                        return FUNC_1(VAR_13, "Failed to read CA certificate file '%s': %m",
                                               VAR_8 ?: VAR_3);
        }

        if ((VAR_7 || VAR_6) && *VAR_12)
                return FUNC_1(FUNC_0(VAR_1),
                                       "Option --trust makes all non-HTTPS connections untrusted.");

        return 0;
}
