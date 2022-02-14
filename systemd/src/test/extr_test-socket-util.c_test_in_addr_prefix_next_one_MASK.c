
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int,union in_addr_union*,union in_addr_union*) ;
 scalar_t__ FUNC_2 (unsigned int,char const*,union in_addr_union*) ;
 scalar_t__ FUNC_3 (unsigned int,union in_addr_union*,unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned VAR_0, const char *VAR_1, unsigned VAR_2, const char *VAR_3) {
        union in_addr_union VAR_4, VAR_5, VAR_6;

        FUNC_0(FUNC_2(VAR_0, VAR_1, &VAR_4) >= 0);

        VAR_6 = VAR_4;
        FUNC_0((FUNC_3(VAR_0, &VAR_6, VAR_2) > 0) == !!VAR_3);

        if (VAR_3) {
                FUNC_0(FUNC_2(VAR_0, VAR_3, &VAR_5) >= 0);
                FUNC_0(FUNC_1(VAR_0, &VAR_6, &VAR_5) > 0);
        }
}
