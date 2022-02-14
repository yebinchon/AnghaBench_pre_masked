
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int,char const*,union in_addr_union*) ;
 int FUNC_2 (unsigned int,union in_addr_union*,unsigned int,union in_addr_union*,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_0, const char *VAR_1, unsigned VAR_2, const char *VAR_3, unsigned VAR_4, int VAR_5) {
        union in_addr_union VAR_6, VAR_7;

        FUNC_0(FUNC_1(VAR_0, VAR_1, &VAR_6) >= 0);
        FUNC_0(FUNC_1(VAR_0, VAR_3, &VAR_7) >= 0);

        FUNC_0(FUNC_2(VAR_0, &VAR_6, VAR_2, &VAR_7, VAR_4) == VAR_5);
}
