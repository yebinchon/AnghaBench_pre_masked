
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UnitFileState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;
 int FUNC_3 (int ,char const*,char*,scalar_t__*) ;
 scalar_t__ FUNC_4 (char const*,char*,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_5) {
        UnitFileState VAR_6;
        const char *VAR_7;

        FUNC_0(FUNC_3(VAR_3, VAR_5, "static-instance@.service", &VAR_6) == -VAR_0);
        FUNC_0(FUNC_3(VAR_3, VAR_5, "static-instance@foo.service", &VAR_6) == -VAR_0);

        VAR_7 = FUNC_1(VAR_5, "/usr/lib/systemd/system/static-instance@.service");
        FUNC_0(FUNC_4(VAR_7,
                                    "[Install]\n"
                                    "WantedBy=multi-user.target\n", VAR_4) >= 0);

        FUNC_0(FUNC_3(VAR_3, VAR_5, "static-instance@.service", &VAR_6) >= 0 && VAR_6 == VAR_1);
        FUNC_0(FUNC_3(VAR_3, VAR_5, "static-instance@foo.service", &VAR_6) >= 0 && VAR_6 == VAR_1);

        VAR_7 = FUNC_1(VAR_5, "/usr/lib/systemd/system/static-instance@foo.service");
        FUNC_0(FUNC_2("static-instance@.service", VAR_7) >= 0);

        FUNC_0(FUNC_3(VAR_3, VAR_5, "static-instance@.service", &VAR_6) >= 0 && VAR_6 == VAR_1);
        FUNC_0(FUNC_3(VAR_3, VAR_5, "static-instance@foo.service", &VAR_6) >= 0 && VAR_6 == VAR_2);
}
