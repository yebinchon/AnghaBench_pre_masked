
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef union lladdr_union {int dummy; } lladdr_union ;
typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_4__ {int neighbors_foreign; } ;
typedef int Neighbor ;
typedef TYPE_1__ Link ;


 int FUNC_0 (TYPE_1__*,int *,int,union in_addr_union const*,union lladdr_union const*,size_t,int **) ;

int FUNC_1(Link *VAR_0, int VAR_1, const union in_addr_union *VAR_2, const union lladdr_union *VAR_3, size_t VAR_4, Neighbor **VAR_5) {
        return FUNC_0(VAR_0, &VAR_0->neighbors_foreign, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
