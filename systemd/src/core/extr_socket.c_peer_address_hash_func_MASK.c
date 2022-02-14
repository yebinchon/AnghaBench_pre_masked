
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct siphash {int dummy; } ;
struct TYPE_10__ {int svm_cid; } ;
struct TYPE_11__ {scalar_t__ sa_family; } ;
struct TYPE_9__ {int sin6_addr; } ;
struct TYPE_13__ {int sin_addr; } ;
struct TYPE_12__ {TYPE_2__ vm; TYPE_3__ sa; TYPE_1__ in6; TYPE_5__ in; } ;
struct TYPE_14__ {TYPE_4__ peer; } ;
typedef TYPE_6__ SocketPeer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__ const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,struct siphash*) ;

__attribute__((used)) static void FUNC_3(const SocketPeer *VAR_3, struct siphash *VAR_4) {
        FUNC_0(VAR_3);

        if (VAR_3->peer.sa.sa_family == VAR_0)
                FUNC_2(&VAR_3->peer.in.sin_addr, sizeof(VAR_3->peer.in.sin_addr), VAR_4);
        else if (VAR_3->peer.sa.sa_family == VAR_1)
                FUNC_2(&VAR_3->peer.in6.sin6_addr, sizeof(VAR_3->peer.in6.sin6_addr), VAR_4);
        else if (VAR_3->peer.sa.sa_family == VAR_2)
                FUNC_2(&VAR_3->peer.vm.svm_cid, sizeof(VAR_3->peer.vm.svm_cid), VAR_4);
        else
                FUNC_1("Unknown address family.");
}
