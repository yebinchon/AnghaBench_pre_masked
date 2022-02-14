
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int family; int lladdr_size; int lladdr; int in_addr; } ;
typedef TYPE_1__ Neighbor ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(const Neighbor *VAR_0, const Neighbor *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0(VAR_0->family, VAR_1->family);
        if (VAR_2 != 0)
                return VAR_2;

        VAR_2 = FUNC_0(VAR_0->lladdr_size, VAR_1->lladdr_size);
        if (VAR_2 != 0)
                return VAR_2;

        switch (VAR_0->family) {
        case 129:
        case 128:
                VAR_2 = FUNC_2(&VAR_0->in_addr, &VAR_1->in_addr, FUNC_1(VAR_0->family));
                if (VAR_2 != 0)
                        return VAR_2;
        }

        return FUNC_2(&VAR_0->lladdr, &VAR_1->lladdr, VAR_0->lladdr_size);
}
