
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {TYPE_2__* scope; TYPE_1__* query; } ;
struct TYPE_7__ {scalar_t__ protocol; int manager; scalar_t__ link; } ;
struct TYPE_6__ {int suppress_unroutable_family; } ;
typedef TYPE_3__ DnsQueryCandidate ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static bool FUNC_4(DnsQueryCandidate *VAR_1, uint16_t VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);





        if (!VAR_1->query->suppress_unroutable_family)
                return 1;

        if (VAR_1->scope->protocol != VAR_0)
                return 1;

        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 < 0)
                return 1;

        if (VAR_1->scope->link)
                return FUNC_2(VAR_1->scope->link, VAR_3, 0);
        else
                return FUNC_3(VAR_1->scope->manager, VAR_3);
}
