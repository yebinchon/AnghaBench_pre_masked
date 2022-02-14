
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_addr {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int,char*,int,char*,int ,char const*,struct ether_addr**,int *) ;
 struct ether_addr* FUNC_2 (struct ether_addr const*,struct ether_addr*) ;
 int FUNC_3 (struct ether_addr*) ;

__attribute__((used)) static void FUNC_4(const char *VAR_0, int VAR_1, const struct ether_addr* VAR_2) {
        struct ether_addr *VAR_3 = ((void*)0);
        int VAR_4;

        VAR_4 = FUNC_1("network", "filename", 1, "section", 1, "lvalue", 0, VAR_0, &VAR_3, ((void*)0));
        FUNC_0(VAR_1 == VAR_4);
        if (VAR_2) {
                FUNC_0(VAR_3);
                FUNC_0(FUNC_2(VAR_2, VAR_3));
        } else
                FUNC_0(VAR_3 == ((void*)0));

        FUNC_3(VAR_3);
}
