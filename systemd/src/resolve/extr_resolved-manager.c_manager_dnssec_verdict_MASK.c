
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * n_dnssec_verdict; } ;
typedef TYPE_1__ Manager ;
typedef size_t DnssecVerdict ;
typedef int DnsResourceKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,char*,int) ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (char*,int ,int ) ;

void FUNC_4(Manager *VAR_3, DnssecVerdict VAR_4, const DnsResourceKey *VAR_5) {

        FUNC_0(VAR_4 >= 0);
        FUNC_0(VAR_4 < VAR_2);

        if (VAR_0) {
                char VAR_6[VAR_1];

                FUNC_3("Found verdict for lookup %s: %s",
                          FUNC_1(VAR_5, VAR_6, sizeof VAR_6),
                          FUNC_2(VAR_4));
        }

        VAR_3->n_dnssec_verdict[VAR_4]++;
}
