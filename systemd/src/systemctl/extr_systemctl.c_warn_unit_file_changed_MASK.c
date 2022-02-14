
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,int ,int ,char const*,char*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_2) {
        FUNC_2(VAR_2);

        FUNC_3("%sWarning:%s The unit file, source configuration file or drop-ins of %s changed on disk. Run 'systemctl%s daemon-reload' to reload units.",
                    FUNC_0(),
                    FUNC_1(),
                    VAR_2,
                    VAR_1 == VAR_0 ? "" : " --user");
}
