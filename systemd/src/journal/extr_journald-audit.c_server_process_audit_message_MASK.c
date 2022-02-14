
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nl_family; scalar_t__ nl_pid; } ;
union sockaddr_union {TYPE_1__ nl; } ;
struct ucred {scalar_t__ pid; } ;
struct sockaddr_nl {int dummy; } ;
struct nlmsghdr {scalar_t__ nlmsg_type; scalar_t__ nlmsg_len; } ;
typedef int socklen_t ;
typedef void const Server ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct nlmsghdr const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct nlmsghdr const*,size_t) ;
 int FUNC_4 (void const*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (void const*,scalar_t__,int ,scalar_t__) ;

void FUNC_8(
                Server *VAR_5,
                const void *VAR_6,
                size_t VAR_7,
                const struct ucred *VAR_8,
                const union sockaddr_union *VAR_9,
                socklen_t VAR_10) {

        const struct nlmsghdr *VAR_11 = VAR_6;

        FUNC_4(VAR_5);

        if (VAR_7 < FUNC_0(sizeof(struct nlmsghdr)))
                return;

        FUNC_4(VAR_6);


        if (!VAR_9 ||
            VAR_10 != sizeof(struct sockaddr_nl) ||
            VAR_9->nl.nl_family != VAR_0 ||
            VAR_9->nl.nl_pid != 0) {
                FUNC_5("Audit netlink message from invalid sender.");
                return;
        }

        if (!VAR_8 || VAR_8->pid != 0) {
                FUNC_5("Audit netlink message with invalid credentials.");
                return;
        }

        if (!FUNC_3(VAR_11, VAR_7)) {
                FUNC_6("Audit netlink message truncated.");
                return;
        }


        if (FUNC_1(VAR_11->nlmsg_type, VAR_4, VAR_3))
                return;


        if (VAR_11->nlmsg_type < VAR_1 && VAR_11->nlmsg_type != VAR_2)
                return;

        FUNC_7(VAR_5, VAR_11->nlmsg_type, FUNC_2(VAR_11), VAR_11->nlmsg_len - FUNC_0(sizeof(struct nlmsghdr)));
}
