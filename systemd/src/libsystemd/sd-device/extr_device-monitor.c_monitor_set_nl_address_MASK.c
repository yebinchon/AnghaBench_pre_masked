
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int nl_pid; } ;
union sockaddr_union {TYPE_3__ nl; int sa; } ;
struct sockaddr_nl {int dummy; } ;
typedef int socklen_t ;
struct TYPE_7__ {int nl_pid; } ;
struct TYPE_8__ {TYPE_1__ nl; } ;
struct TYPE_10__ {TYPE_2__ snl; int sock; } ;
typedef TYPE_4__ sd_device_monitor ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *,int*) ;

__attribute__((used)) static int FUNC_2(sd_device_monitor *VAR_1) {
        union sockaddr_union VAR_2;
        socklen_t VAR_3;

        FUNC_0(VAR_1);



        VAR_3 = sizeof(struct sockaddr_nl);
        if (FUNC_1(VAR_1->sock, &VAR_2.sa, &VAR_3) < 0)
                return -VAR_0;

        VAR_1->snl.nl.nl_pid = VAR_2.nl.nl_pid;
        return 0;
}
