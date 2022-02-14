
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int queries; } ;
struct TYPE_16__ {TYPE_2__* manager; int request_address_string; TYPE_7__* request_dns_stream; int reply_dns_packet; int request_dns_packet; int bus_track; int request; int question_utf8; int question_idna; TYPE_1__* auxiliary_for; struct TYPE_16__* auxiliary_queries; } ;
struct TYPE_15__ {int n_dns_queries; int dns_queries; } ;
struct TYPE_14__ {scalar_t__ n_auxiliary_queries; int auxiliary_queries; } ;
typedef TYPE_3__ DnsQuery ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 TYPE_7__* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,TYPE_3__*) ;

DnsQuery *FUNC_12(DnsQuery *VAR_2) {
        if (!VAR_2)
                return ((void*)0);

        while (VAR_2->auxiliary_queries)
                FUNC_12(VAR_2->auxiliary_queries);

        if (VAR_2->auxiliary_for) {
                FUNC_1(VAR_2->auxiliary_for->n_auxiliary_queries > 0);
                VAR_2->auxiliary_for->n_auxiliary_queries--;
                FUNC_0(VAR_0, VAR_2->auxiliary_for->auxiliary_queries, VAR_2);
        }

        FUNC_3(VAR_2);

        FUNC_5(VAR_2->question_idna);
        FUNC_5(VAR_2->question_utf8);

        FUNC_4(VAR_2);

        FUNC_9(VAR_2->request);
        FUNC_10(VAR_2->bus_track);

        FUNC_2(VAR_2->request_dns_packet);
        FUNC_2(VAR_2->reply_dns_packet);

        if (VAR_2->request_dns_stream) {

                (void) FUNC_11(VAR_2->request_dns_stream->queries, VAR_2);
                VAR_2->request_dns_stream = FUNC_6(VAR_2->request_dns_stream);
        }

        FUNC_7(VAR_2->request_address_string);

        if (VAR_2->manager) {
                FUNC_0(VAR_1, VAR_2->manager->dns_queries, VAR_2);
                VAR_2->manager->n_dns_queries--;
        }

        return FUNC_8(VAR_2);
}
