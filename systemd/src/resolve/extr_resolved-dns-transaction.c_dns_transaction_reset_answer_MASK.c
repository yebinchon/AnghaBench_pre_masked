
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int answer_authenticated; scalar_t__ answer_errno; scalar_t__ answer_nsec_ttl; int answer_source; int answer_dnssec_result; scalar_t__ answer_rcode; int answer; int received; } ;
typedef TYPE_1__ DnsTransaction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(DnsTransaction *VAR_2) {
        FUNC_0(VAR_2);

        VAR_2->received = FUNC_2(VAR_2->received);
        VAR_2->answer = FUNC_1(VAR_2->answer);
        VAR_2->answer_rcode = 0;
        VAR_2->answer_dnssec_result = VAR_0;
        VAR_2->answer_source = VAR_1;
        VAR_2->answer_authenticated = 0;
        VAR_2->answer_nsec_ttl = (uint32_t) -1;
        VAR_2->answer_errno = 0;
}
