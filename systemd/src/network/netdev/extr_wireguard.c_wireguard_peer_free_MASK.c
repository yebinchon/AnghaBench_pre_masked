
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int preshared_key; struct TYPE_10__* preshared_key_file; struct TYPE_10__* endpoint_port; struct TYPE_10__* endpoint_host; struct TYPE_10__* ipmasks; scalar_t__ section; TYPE_1__* wireguard; } ;
typedef TYPE_2__ WireguardPeer ;
typedef TYPE_2__ WireguardIPmask ;
struct TYPE_9__ {int peers_by_section; int peers_with_failed_endpoint; int peers_with_unresolved_endpoint; TYPE_2__* peers; } ;


 int FUNC_0 (int ,TYPE_2__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(WireguardPeer *VAR_3) {
        WireguardIPmask *VAR_4;

        if (!VAR_3)
                return;

        if (VAR_3->wireguard) {
                FUNC_0(VAR_2, VAR_3->wireguard->peers, VAR_3);

                FUNC_5(VAR_3->wireguard->peers_with_unresolved_endpoint, VAR_3);
                FUNC_5(VAR_3->wireguard->peers_with_failed_endpoint, VAR_3);

                if (VAR_3->section)
                        FUNC_3(VAR_3->wireguard->peers_by_section, VAR_3->section);
        }

        FUNC_4(VAR_3->section);

        while ((VAR_4 = VAR_3->ipmasks)) {
                FUNC_0(VAR_1, VAR_3->ipmasks, VAR_4);
                FUNC_2(VAR_4);
        }

        FUNC_2(VAR_3->endpoint_host);
        FUNC_2(VAR_3->endpoint_port);
        FUNC_2(VAR_3->preshared_key_file);
        FUNC_1(VAR_3->preshared_key, VAR_0);

        FUNC_2(VAR_3);
}
