
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
typedef char const Manager ;
typedef int AddressPool ;


 int FUNC_0 (char const*,int **,int,union in_addr_union*,unsigned int) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int,char const*,union in_addr_union*) ;

int FUNC_3(
                Manager *VAR_0,
                AddressPool **VAR_1,
                int VAR_2,
                const char *VAR_3,
                unsigned VAR_4) {

        union in_addr_union VAR_5;
        int VAR_6;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);
        FUNC_1(VAR_3);

        VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_5, VAR_4);
}
