
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef union lladdr_union {int dummy; } lladdr_union ;
typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_5__ {int neighbors_foreign; int neighbors; } ;
typedef int Neighbor ;
typedef TYPE_1__ Link ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int,union in_addr_union const*,union lladdr_union const*,size_t,int **) ;
 int FUNC_1 (TYPE_1__*,int,union in_addr_union const*,union lladdr_union const*,size_t,int **) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(Link *VAR_2, int VAR_3, const union in_addr_union *VAR_4, const union lladdr_union *VAR_5, size_t VAR_6, Neighbor **VAR_7) {
        Neighbor *VAR_8;
        int VAR_9;

        VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8);
        if (VAR_9 == -VAR_0) {

                VAR_9 = FUNC_0(VAR_2, &VAR_2->neighbors, VAR_3, VAR_4, VAR_5, VAR_6, &VAR_8);
                if (VAR_9 < 0)
                        return VAR_9;
        } else if (VAR_9 == 0) {

                VAR_9 = FUNC_2(&VAR_2->neighbors, &VAR_1);
                if (VAR_9 < 0)
                        return VAR_9;

                VAR_9 = FUNC_3(VAR_2->neighbors, VAR_8);
                if (VAR_9 < 0)
                        return VAR_9;

                FUNC_4(VAR_2->neighbors_foreign, VAR_8);
        } else if (VAR_9 == 1) {

        } else
                return VAR_9;

        if (VAR_7)
                *VAR_7 = VAR_8;
        return 0;
}
