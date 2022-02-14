
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
typedef union in_addr_union sd_netlink_message ;
typedef union in_addr_union sd_netlink ;


 int VAR_0 ;
 int FUNC_0 (union in_addr_union*) ;
 int FUNC_1 (union in_addr_union*,int ,union in_addr_union*) ;

__attribute__((used)) static int FUNC_2(sd_netlink *VAR_1, sd_netlink_message *VAR_2, void *VAR_3) {
        union in_addr_union *VAR_4 = VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);
        FUNC_0(VAR_4);

        FUNC_1(VAR_1, VAR_0, VAR_4);
        return 0;
}
