
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 char const* VAR_1 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2, const char *VAR_3, const char *VAR_4) {
        int VAR_5 = 0, VAR_6 = 0;

        FUNC_1(VAR_1 = VAR_2);

        if (FUNC_2(VAR_0) >= 0) {
                FUNC_3("Automatically adding rc-local.service.");

                VAR_5 = FUNC_0("rc-local.service", "multi-user.target");
        }

        return VAR_5 < 0 ? VAR_5 : VAR_6;
}
