
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; int rr; } ;
typedef TYPE_1__ DnsZoneItem ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(DnsZoneItem *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        if (VAR_2->state != VAR_0)
                return 0;

        FUNC_3("Verifying RR %s", FUNC_5(FUNC_1(VAR_2->rr)));

        VAR_2->state = VAR_1;
        VAR_3 = FUNC_2(VAR_2);
        if (VAR_3 < 0) {
                FUNC_4(VAR_3, "Failed to start probing for verifying RR: %m");
                VAR_2->state = VAR_0;
                return VAR_3;
        }

        return 0;
}
