
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct in_addr const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,union in_addr_union const*) ;

__attribute__((used)) static bool FUNC_4(const struct in_addr *VAR_1) {
        FUNC_1(VAR_1);

        if (!FUNC_3(VAR_0, (const union in_addr_union *) VAR_1))
                return 0;

        return !FUNC_0(FUNC_2(VAR_1->s_addr) & 0x0000FF00U, 0x0000U, 0xFF00U);
}
