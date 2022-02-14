
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipv6_mreq {int ipv6mr_interface; int ipv6mr_multiaddr; } ;
struct icmp6_filter {int dummy; } ;


 int FUNC_0 (struct icmp6_filter*) ;
 int FUNC_1 (int ,struct icmp6_filter*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct icmp6_filter*,struct ipv6_mreq*) ;

int FUNC_3(int VAR_2) {
        struct icmp6_filter VAR_3 = {};
        struct ipv6_mreq VAR_4 = {
                .ipv6mr_multiaddr = VAR_0,
                .ipv6mr_interface = VAR_2,
        };

        FUNC_0(&VAR_3);
        FUNC_1(VAR_1, &VAR_3);

        return FUNC_2(&VAR_3, &VAR_4);
}
