
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sd_bus_message ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*,char const*) ;
 int FUNC_2 (char const*,int ,int *) ;
 int FUNC_3 (int *,char*,char const*,char*,int ) ;

__attribute__((used)) static int FUNC_4(sd_bus_message *VAR_0, const char *VAR_1, const char *VAR_2, uint64_t VAR_3) {
        uint64_t VAR_4;
        int VAR_5;

        VAR_5 = FUNC_2(VAR_2, VAR_3, &VAR_4);
        if (VAR_5 < 0)
                return FUNC_1(VAR_5, "Failed to parse %s=%s: %m", VAR_1, VAR_2);

        VAR_5 = FUNC_3(VAR_0, "(sv)", VAR_1, "t", VAR_4);
        if (VAR_5 < 0)
                return FUNC_0(VAR_5);

        return 1;
}
