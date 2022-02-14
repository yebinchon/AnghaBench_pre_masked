
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Context ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *,char const*,char const*) ;
 int FUNC_2 (int *,char const*,char const*) ;
 int FUNC_3 (int *,char const*,char const*) ;
 int FUNC_4 (int *,char const*,char const*) ;
 int FUNC_5 (int *,char const*,char const*) ;
 int FUNC_6 (int *,char const*,char const*) ;
 int FUNC_7 (int *,char const*,char const*) ;
 int FUNC_8 (int *,char const*,char const*) ;
 scalar_t__ FUNC_9 (char const*,char*) ;

int FUNC_10(const char *VAR_0, const char *VAR_1, void *VAR_2) {
        Context *VAR_3 = VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        if (FUNC_9(VAR_0, "ip"))
                return FUNC_4(VAR_3, VAR_0, VAR_1);
        if (FUNC_9(VAR_0, "rd.route"))
                return FUNC_7(VAR_3, VAR_0, VAR_1);
        if (FUNC_9(VAR_0, "nameserver"))
                return FUNC_5(VAR_3, VAR_0, VAR_1);
        if (FUNC_9(VAR_0, "rd.peerdns"))
                return FUNC_6(VAR_3, VAR_0, VAR_1);
        if (FUNC_9(VAR_0, "vlan"))
                return FUNC_8(VAR_3, VAR_0, VAR_1);
        if (FUNC_9(VAR_0, "bridge"))
                return FUNC_2(VAR_3, VAR_0, VAR_1);
        if (FUNC_9(VAR_0, "bond"))
                return FUNC_1(VAR_3, VAR_0, VAR_1);
        if (FUNC_9(VAR_0, "ifname"))
                return FUNC_3(VAR_3, VAR_0, VAR_1);

        return 0;
}
