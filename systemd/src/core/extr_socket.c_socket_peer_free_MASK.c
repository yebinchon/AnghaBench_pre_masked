
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* socket; } ;
struct TYPE_9__ {int peers_by_address; } ;
typedef TYPE_2__ SocketPeer ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static SocketPeer *FUNC_3(SocketPeer *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->socket)
                FUNC_2(VAR_0->socket->peers_by_address, VAR_0);

        return FUNC_1(VAR_0);
}
