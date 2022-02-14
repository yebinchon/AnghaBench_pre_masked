
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int state; struct TYPE_12__* request_dns_packet; int request_dns_stream; int manager; int answer_rcode; int reply_dns_packet; int opt; int answer; int question_idna; } ;
typedef TYPE_1__ DnsQuery ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ,int ,int,int,int ,int) ;
 int FUNC_9 (int *,int ,int ,int ,int*) ;
 int FUNC_10 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_11 (int ,int ,TYPE_1__*,int ,int) ;
 int FUNC_12 (int,char*) ;

__attribute__((used)) static void FUNC_13(DnsQuery *VAR_4) {
        int VAR_5;

        FUNC_3(VAR_4);
        FUNC_3(VAR_4->request_dns_packet);

        switch (VAR_4->state) {

        case 130: {
                bool VAR_6;

                VAR_5 = FUNC_9(&VAR_4->reply_dns_packet, FUNC_2(VAR_4->request_dns_packet), VAR_4->question_idna, VAR_4->answer, &VAR_6);
                if (VAR_5 < 0) {
                        FUNC_12(VAR_5, "Failed to build reply packet: %m");
                        break;
                }

                if (!VAR_6) {
                        VAR_5 = FUNC_7(VAR_4);
                        if (VAR_5 == -VAR_3) {
                                (void) FUNC_11(VAR_4->manager, VAR_4->request_dns_stream, VAR_4->request_dns_packet, VAR_2, 0);
                                break;
                        }
                        if (VAR_5 < 0) {
                                FUNC_12(VAR_5, "Failed to process CNAME: %m");
                                break;
                        }
                        if (VAR_5 == VAR_0)
                                return;
                }

                VAR_5 = FUNC_8(
                                VAR_4->reply_dns_packet,
                                FUNC_1(VAR_4->request_dns_packet),
                                VAR_4->answer_rcode,
                                VAR_6,
                                !!VAR_4->request_dns_packet->opt,
                                FUNC_0(VAR_4->request_dns_packet),
                                FUNC_6(VAR_4));
                if (VAR_5 < 0) {
                        FUNC_12(VAR_5, "Failed to finish reply packet: %m");
                        break;
                }

                (void) FUNC_10(VAR_4->manager, VAR_4->request_dns_stream, VAR_4->request_dns_packet, VAR_4->reply_dns_packet);
                break;
        }

        case 132:
                (void) FUNC_11(VAR_4->manager, VAR_4->request_dns_stream, VAR_4->request_dns_packet, VAR_4->answer_rcode, FUNC_6(VAR_4));
                break;

        case 137:
                (void) FUNC_11(VAR_4->manager, VAR_4->request_dns_stream, VAR_4->request_dns_packet, VAR_1, FUNC_6(VAR_4));
                break;

        case 129:
        case 142:

                break;

        case 136:
        case 139:
        case 140:
        case 143:
        case 141:
        case 135:
        case 131:
        case 138:
                (void) FUNC_11(VAR_4->manager, VAR_4->request_dns_stream, VAR_4->request_dns_packet, VAR_2, 0);
                break;

        case 134:
        case 133:
        case 128:
        default:
                FUNC_4("Impossible state");
        }

        FUNC_5(VAR_4);
}
