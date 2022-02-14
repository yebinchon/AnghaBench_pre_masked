
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct in6_addr {int dummy; } ;
typedef int in6 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct in6_addr*,void const*,int) ;

__attribute__((used)) static uint32_t FUNC_4(int VAR_1, const void *VAR_2, int VAR_3) {
        struct in6_addr VAR_4;

        if (VAR_1 != VAR_0)
                return 0;



        FUNC_2(sizeof(VAR_4) == FUNC_0(VAR_0));
        FUNC_3(&VAR_4, VAR_2, sizeof(struct in6_addr));

        return FUNC_1(&VAR_4) ? VAR_3 : 0;
}
