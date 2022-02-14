
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ protocol; TYPE_2__* manager; } ;
struct TYPE_14__ {scalar_t__ current_feature_level; scalar_t__ dns_udp_fd; int sent; TYPE_9__* scope; int server; int dns_udp_event_source; TYPE_1__* key; } ;
struct TYPE_13__ {int event; } ;
struct TYPE_12__ {int type; } ;
typedef TYPE_3__ DnsTransaction ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_9__*,int,int ) ;
 int FUNC_3 (TYPE_9__*,int ,int) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int *,int,int ,int ,TYPE_3__*) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static int FUNC_13(DnsTransaction *VAR_6) {
        int VAR_7;

        FUNC_1(VAR_6);

        if (VAR_6->scope->protocol == VAR_0) {

                VAR_7 = FUNC_7(VAR_6);
                if (VAR_7 < 0)
                        return VAR_7;

                if (VAR_6->current_feature_level < VAR_1 || FUNC_0(VAR_6->current_feature_level))
                        return -VAR_2;

                if (!FUNC_5(VAR_6->server) && FUNC_9(VAR_6->key->type))
                        return -VAR_3;

                if (VAR_7 > 0 || VAR_6->dns_udp_fd < 0) {
                        int VAR_8;

                        FUNC_6(VAR_6);

                        VAR_8 = FUNC_3(VAR_6->scope, VAR_6->server, 53);
                        if (VAR_8 < 0)
                                return VAR_8;

                        VAR_7 = FUNC_11(VAR_6->scope->manager->event, &VAR_6->dns_udp_event_source, VAR_8, VAR_4, VAR_5, VAR_6);
                        if (VAR_7 < 0) {
                                FUNC_10(VAR_8);
                                return VAR_7;
                        }

                        (void) FUNC_12(VAR_6->dns_udp_event_source, "dns-transaction-udp");
                        VAR_6->dns_udp_fd = VAR_8;
                }

                VAR_7 = FUNC_4(VAR_6->server, VAR_6->sent, VAR_6->current_feature_level);
                if (VAR_7 < 0)
                        return VAR_7;
        } else
                FUNC_6(VAR_6);

        VAR_7 = FUNC_2(VAR_6->scope, VAR_6->dns_udp_fd, VAR_6->sent);
        if (VAR_7 < 0)
                return VAR_7;

        FUNC_8(VAR_6);

        return 0;
}
