
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int key; } ;
struct TYPE_6__ {TYPE_4__* rr; TYPE_1__* scope; } ;
struct TYPE_5__ {scalar_t__ protocol; } ;
typedef TYPE_2__ DnsZoneItem ;
typedef int DnsAnswerFlags ;
typedef int DnsAnswer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_4__*,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(DnsAnswer *VAR_3, DnsZoneItem *VAR_4, int VAR_5) {
        DnsAnswerFlags VAR_6;







        if (VAR_4->scope->protocol == VAR_2 &&
            !FUNC_1(VAR_4->rr->key))
                VAR_6 = VAR_0|VAR_1;
        else
                VAR_6 = VAR_0;

        return FUNC_0(VAR_3, VAR_4->rr, VAR_5, VAR_6);
}
