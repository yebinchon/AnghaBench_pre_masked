
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


struct TYPE_12__ {int svm_cid; } ;
struct TYPE_11__ {int sin6_addr; } ;
struct TYPE_10__ {int sin_addr; } ;
struct TYPE_9__ {int sa_family; } ;
struct TYPE_13__ {TYPE_4__ vm; TYPE_3__ in6; TYPE_2__ in; TYPE_1__ sa; } ;
struct TYPE_14__ {TYPE_5__ peer; } ;
typedef TYPE_6__ SocketPeer ;





 int FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3(const SocketPeer *VAR_0, const SocketPeer *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0(VAR_0->peer.sa.sa_family, VAR_1->peer.sa.sa_family);
        if (VAR_2 != 0)
                return VAR_2;

        switch(VAR_0->peer.sa.sa_family) {
        case 130:
                return FUNC_2(&VAR_0->peer.in.sin_addr, &VAR_1->peer.in.sin_addr, sizeof(VAR_0->peer.in.sin_addr));
        case 129:
                return FUNC_2(&VAR_0->peer.in6.sin6_addr, &VAR_1->peer.in6.sin6_addr, sizeof(VAR_0->peer.in6.sin6_addr));
        case 128:
                return FUNC_0(VAR_0->peer.vm.svm_cid, VAR_1->peer.vm.svm_cid);
        }
        FUNC_1("Black sheep in the family!");
}
