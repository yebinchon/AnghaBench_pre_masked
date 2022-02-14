
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union in_addr_union {int dummy; } in_addr_union ;
struct in6_addr {int dummy; } ;
typedef int sd_netlink_message ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned short,int ,union in_addr_union const*) ;

int FUNC_1(sd_netlink_message *VAR_1, unsigned short VAR_2, const struct in6_addr *VAR_3) {
        return FUNC_0(VAR_1, VAR_2, VAR_0, (const union in_addr_union *) VAR_3);
}
