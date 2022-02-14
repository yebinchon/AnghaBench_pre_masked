
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int write_queue; int transactions; } ;
struct TYPE_7__ {int dns_udp_fd; int dns_udp_event_source; TYPE_3__* stream; int sent; } ;
typedef TYPE_1__ DnsTransaction ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(DnsTransaction *VAR_1) {
        FUNC_1(VAR_1);

        if (VAR_1->stream) {

                FUNC_0(VAR_0, VAR_1->stream->transactions, VAR_1);


                FUNC_2(FUNC_4(VAR_1->stream->write_queue, VAR_1->sent));

                VAR_1->stream = FUNC_3(VAR_1->stream);
        }

        VAR_1->dns_udp_event_source = FUNC_6(VAR_1->dns_udp_event_source);
        VAR_1->dns_udp_fd = FUNC_5(VAR_1->dns_udp_fd);
}
