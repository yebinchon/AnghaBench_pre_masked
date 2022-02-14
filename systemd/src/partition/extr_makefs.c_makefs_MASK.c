
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int VAR_7 ;
 int FUNC_2 (char const*,char**) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char*,int,int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 char* FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*,int ,int ) ;

__attribute__((used)) static int FUNC_8(const char *VAR_8, const char *VAR_9) {
        const char *VAR_10;
        pid_t VAR_11;
        int VAR_12;

        if (FUNC_5(VAR_8, "swap"))
                VAR_10 = "/sbin/mkswap";
        else
                VAR_10 = FUNC_6("/sbin/mkfs.", VAR_8);
        if (FUNC_1(VAR_10, VAR_6) != 0)
                return FUNC_3(VAR_7, "%s is not executable: %m", VAR_10);

        VAR_12 = FUNC_4("(mkfs)", VAR_3|VAR_1|VAR_4|VAR_2, &VAR_11);
        if (VAR_12 < 0)
                return VAR_12;
        if (VAR_12 == 0) {
                const char *VAR_13[3] = { VAR_10, VAR_9, ((void*)0) };



                FUNC_2(VAR_13[0], (char**) VAR_13);
                FUNC_0(VAR_0);
        }

        return FUNC_7(VAR_10, VAR_11, VAR_5);
}
