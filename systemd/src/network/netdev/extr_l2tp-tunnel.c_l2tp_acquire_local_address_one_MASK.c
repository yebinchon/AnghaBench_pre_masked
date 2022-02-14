
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union in_addr_union {int dummy; } in_addr_union ;
struct TYPE_6__ {scalar_t__ family; union in_addr_union in_addr; int flags; int in_addr_peer; } ;
struct TYPE_5__ {scalar_t__ family; scalar_t__ local_address_type; } ;
typedef TYPE_1__ L2tpTunnel ;
typedef TYPE_2__ Address ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(L2tpTunnel *VAR_4, Address *VAR_5, union in_addr_union *VAR_6) {
        if (VAR_5->family != VAR_4->family)
                return -VAR_0;

        if (FUNC_1(VAR_5->family, &VAR_5->in_addr_peer) <= 0)
                return -VAR_0;

        if (VAR_4->local_address_type == VAR_3 &&
            !FUNC_0(VAR_5->flags, VAR_1))
                return -VAR_0;

        if (VAR_4->local_address_type == VAR_2 &&
            FUNC_0(VAR_5->flags, VAR_1))
                return -VAR_0;

        *VAR_6 = VAR_5->in_addr;
        return 0;
}
