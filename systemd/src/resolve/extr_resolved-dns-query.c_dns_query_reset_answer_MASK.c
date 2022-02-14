
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int answer_authenticated; int answer_search_domain; int answer_family; int answer_protocol; scalar_t__ answer_errno; int answer_dnssec_result; scalar_t__ answer_rcode; int answer; } ;
typedef TYPE_1__ DnsQuery ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(DnsQuery *VAR_3) {
        FUNC_0(VAR_3);

        VAR_3->answer = FUNC_1(VAR_3->answer);
        VAR_3->answer_rcode = 0;
        VAR_3->answer_dnssec_result = VAR_1;
        VAR_3->answer_errno = 0;
        VAR_3->answer_authenticated = 0;
        VAR_3->answer_protocol = VAR_2;
        VAR_3->answer_family = VAR_0;
        VAR_3->answer_search_domain = FUNC_2(VAR_3->answer_search_domain);
}
