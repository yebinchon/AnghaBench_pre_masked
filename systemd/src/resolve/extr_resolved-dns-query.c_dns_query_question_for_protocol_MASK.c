
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * question_utf8; int * question_idna; } ;
typedef int DnsQuestion ;
typedef TYPE_1__ DnsQuery ;
typedef int DnsProtocol ;





 int FUNC_0 (TYPE_1__*) ;

DnsQuestion* FUNC_1(DnsQuery *VAR_0, DnsProtocol VAR_1) {
        FUNC_0(VAR_0);

        switch (VAR_1) {

        case 130:
                return VAR_0->question_idna;

        case 128:
        case 129:
                return VAR_0->question_utf8;

        default:
                return ((void*)0);
        }
}
