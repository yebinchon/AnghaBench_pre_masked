
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int usec_t ;
typedef int sd_event_source ;
struct TYPE_9__ {int peers_with_failed_endpoint; int peers_with_unresolved_endpoint; } ;
typedef TYPE_1__ Wireguard ;
typedef TYPE_1__ NetDev ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(sd_event_source *VAR_0, usec_t VAR_1, void *VAR_2) {
        NetDev *VAR_3 = VAR_2;
        Wireguard *VAR_4;

        FUNC_2(VAR_3);
        VAR_4 = FUNC_1(VAR_3);
        FUNC_2(VAR_4);

        if (!FUNC_3(VAR_3))
                return 0;

        FUNC_2(FUNC_5(VAR_4->peers_with_unresolved_endpoint));

        FUNC_0(VAR_4->peers_with_unresolved_endpoint, VAR_4->peers_with_failed_endpoint);

        FUNC_4(VAR_3);

        return 0;
}
