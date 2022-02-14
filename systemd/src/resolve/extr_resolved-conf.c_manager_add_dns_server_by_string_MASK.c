
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
typedef char const Manager ;
typedef int DnsServerType ;
typedef int DnsServer ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int,union in_addr_union*) ;
 int * FUNC_2 (int ,int,union in_addr_union*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int *,int ,int *,int,union in_addr_union*,int) ;
 int FUNC_5 (char const*,int*,union in_addr_union*,int*) ;
 int FUNC_6 (char const*,int ) ;

__attribute__((used)) static int FUNC_7(Manager *VAR_0, DnsServerType VAR_1, const char *VAR_2) {
        union in_addr_union VAR_3;
        int VAR_4, VAR_5, VAR_6 = 0;
        DnsServer *VAR_7;

        FUNC_0(VAR_0);
        FUNC_0(VAR_2);

        VAR_5 = FUNC_5(VAR_2, &VAR_4, &VAR_3, &VAR_6);
        if (VAR_5 < 0)
                return VAR_5;


        if (!FUNC_1(VAR_4, &VAR_3))
                return 0;


        VAR_7 = FUNC_2(FUNC_6(VAR_0, VAR_1), VAR_4, &VAR_3, VAR_6);
        if (VAR_7) {






                FUNC_3(VAR_7);
                return 0;
        }

        return FUNC_4(VAR_0, ((void*)0), VAR_1, ((void*)0), VAR_4, &VAR_3, VAR_6);
}
