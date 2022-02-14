
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct siphash {int dummy; } ;
typedef int prefix ;
struct TYPE_5__ {int family; int prefixlen; int in_addr; } ;
typedef TYPE_1__ Address ;




 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int*,int,struct siphash*) ;

__attribute__((used)) static void FUNC_4(const Address *VAR_1, struct siphash *VAR_2) {
        FUNC_2(VAR_1);

        FUNC_3(&VAR_1->family, sizeof(VAR_1->family), VAR_2);

        switch (VAR_1->family) {
        case 129:
                FUNC_3(&VAR_1->prefixlen, sizeof(VAR_1->prefixlen), VAR_2);


                uint32_t VAR_3 = FUNC_1(VAR_1);
                FUNC_3(&VAR_3, sizeof(VAR_3), VAR_2);

                VAR_0;
        case 128:

                FUNC_3(&VAR_1->in_addr, FUNC_0(VAR_1->family), VAR_2);

                break;
        default:

                break;
        }
}
