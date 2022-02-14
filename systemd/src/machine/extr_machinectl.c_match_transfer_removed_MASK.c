
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef char const* sd_bus_message ;
typedef int sd_bus_error ;


 int FUNC_0 (char const**) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const**) ;
 int FUNC_4 (char const**,char*,int *,char const**,char const**) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char const*,char const*) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        const char **VAR_3 = VAR_1, *VAR_4, *VAR_5;
        uint32_t VAR_6;
        int VAR_7;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);

        VAR_7 = FUNC_4(VAR_0, "uos", &VAR_6, &VAR_4, &VAR_5);
        if (VAR_7 < 0) {
                FUNC_1(VAR_7);
                return 0;
        }

        if (!FUNC_6(*VAR_3, VAR_4))
                return 0;

        FUNC_5(FUNC_2(FUNC_3(VAR_0)), !FUNC_6(VAR_5, "done"));
        return 0;
}
