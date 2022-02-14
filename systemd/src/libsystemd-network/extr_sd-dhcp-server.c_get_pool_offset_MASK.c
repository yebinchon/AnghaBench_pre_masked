
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool_size; int subnet; int pool_offset; int netmask; } ;
typedef TYPE_1__ sd_dhcp_server ;
typedef int be32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(sd_dhcp_server *VAR_2, be32_t VAR_3) {
        FUNC_0(VAR_2);

        if (!VAR_2->pool_size)
                return -VAR_0;

        if (FUNC_1(VAR_3) < (FUNC_1(VAR_2->subnet) | VAR_2->pool_offset) ||
            FUNC_1(VAR_3) >= (FUNC_1(VAR_2->subnet) | (VAR_2->pool_offset + VAR_2->pool_size)))
                return -VAR_1;

        return FUNC_1(VAR_3 & ~VAR_2->netmask) - VAR_2->pool_offset;
}
