
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sockaddr_union {int dummy; } sockaddr_union ;
struct sockaddr_in6 {int dummy; } ;
typedef int sd_netlink_message ;


 int FUNC_0 (int *,unsigned short,union sockaddr_union const*) ;

int FUNC_1(sd_netlink_message *VAR_0, unsigned short VAR_1, const struct sockaddr_in6 *VAR_2) {
        return FUNC_0(VAR_0, VAR_1, (const union sockaddr_union *) VAR_2);
}
