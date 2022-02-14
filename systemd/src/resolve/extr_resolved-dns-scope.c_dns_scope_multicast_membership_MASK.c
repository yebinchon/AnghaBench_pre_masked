
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct in_addr {int dummy; } ;
struct ipv6_mreq {int ipv6mr_interface; struct in6_addr ipv6mr_multiaddr; int imr_ifindex; struct in_addr imr_multiaddr; } ;
struct ip_mreqn {int ipv6mr_interface; struct in6_addr ipv6mr_multiaddr; int imr_ifindex; struct in_addr imr_multiaddr; } ;
typedef int mreqn ;
typedef int mreq ;
struct TYPE_4__ {scalar_t__ family; scalar_t__ protocol; int manager; int ifindex; struct TYPE_4__* link; } ;
typedef TYPE_1__ DnsScope ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int ,struct ipv6_mreq*,int) ;

__attribute__((used)) static int FUNC_6(DnsScope *VAR_11, bool VAR_12, struct in_addr VAR_13, struct in6_addr VAR_14) {
        int VAR_15;

        FUNC_0(VAR_11);
        FUNC_0(VAR_11->link);

        if (VAR_11->family == VAR_0) {
                struct ip_mreqn VAR_16 = {
                        .imr_multiaddr = VAR_13,
                        .imr_ifindex = VAR_11->link->ifindex,
                };

                if (VAR_11->protocol == VAR_2)
                        VAR_15 = FUNC_1(VAR_11->manager);
                else
                        VAR_15 = FUNC_3(VAR_11->manager);

                if (VAR_15 < 0)
                        return VAR_15;




                if (VAR_12)
                        (void) FUNC_5(VAR_15, VAR_4, VAR_9, &VAR_16, sizeof(VAR_16));

                if (FUNC_5(VAR_15, VAR_4, VAR_12 ? VAR_8 : VAR_9, &VAR_16, sizeof(VAR_16)) < 0)
                        return -VAR_10;

        } else if (VAR_11->family == VAR_1) {
                struct ipv6_mreq VAR_17 = {
                        .ipv6mr_multiaddr = VAR_14,
                        .ipv6mr_interface = VAR_11->link->ifindex,
                };

                if (VAR_11->protocol == VAR_2)
                        VAR_15 = FUNC_2(VAR_11->manager);
                else
                        VAR_15 = FUNC_4(VAR_11->manager);

                if (VAR_15 < 0)
                        return VAR_15;

                if (VAR_12)
                        (void) FUNC_5(VAR_15, VAR_5, VAR_7, &VAR_17, sizeof(VAR_17));

                if (FUNC_5(VAR_15, VAR_5, VAR_12 ? VAR_6 : VAR_7, &VAR_17, sizeof(VAR_17)) < 0)
                        return -VAR_10;
        } else
                return -VAR_3;

        return 0;
}
