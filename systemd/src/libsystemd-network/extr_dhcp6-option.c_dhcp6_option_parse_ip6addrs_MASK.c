
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct in6_addr*,size_t,size_t) ;
 int FUNC_1 (struct in6_addr*,int *,int) ;

int FUNC_2(uint8_t *VAR_2, uint16_t VAR_3,
                                struct in6_addr **VAR_4, size_t VAR_5,
                                size_t *VAR_6) {

        if (VAR_3 == 0 || VAR_3 % sizeof(struct in6_addr) != 0)
                return -VAR_0;

        if (!FUNC_0(*VAR_4, *VAR_6,
                            VAR_5 * sizeof(struct in6_addr) + VAR_3))
                return -VAR_1;

        FUNC_1(*VAR_4 + VAR_5, VAR_2, VAR_3);

        VAR_5 += VAR_3 / sizeof(struct in6_addr);

        return VAR_5;
}
