
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int family; int prefixlen; int in_addr; } ;
typedef TYPE_1__ Address ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_4(const Address *VAR_1, const Address *VAR_2) {
        int VAR_3;

        VAR_3 = FUNC_0(VAR_1->family, VAR_2->family);
        if (VAR_3 != 0)
                return VAR_3;

        switch (VAR_1->family) {

        case 129:
                VAR_3 = FUNC_0(VAR_1->prefixlen, VAR_2->prefixlen);
                if (VAR_3 != 0)
                        return VAR_3;

                uint32_t VAR_4 = FUNC_2(VAR_1);
                uint32_t VAR_5 = FUNC_2(VAR_2);
                VAR_3 = FUNC_0(VAR_4, VAR_5);
                if (VAR_3 != 0)
                        return VAR_3;

                VAR_0;
        case 128:
                return FUNC_3(&VAR_1->in_addr, &VAR_2->in_addr, FUNC_1(VAR_1->family));
        default:

                return 0;
        }
}
