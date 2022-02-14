
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int peers_with_failed_endpoint; int peers_with_unresolved_endpoint; int peers_by_section; int private_key_file; int private_key; int resolve_retry_event_source; } ;
typedef TYPE_1__ Wireguard ;
typedef TYPE_1__ NetDev ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_7(NetDev *VAR_2) {
        Wireguard *VAR_3;

        FUNC_1(VAR_2);
        VAR_3 = FUNC_0(VAR_2);
        FUNC_1(VAR_3);

        FUNC_5(VAR_3->resolve_retry_event_source);

        FUNC_2(VAR_3->private_key, VAR_0);
        FUNC_3(VAR_3->private_key_file);

        FUNC_4(VAR_3->peers_by_section, VAR_1);
        FUNC_6(VAR_3->peers_with_unresolved_endpoint);
        FUNC_6(VAR_3->peers_with_failed_endpoint);
}
