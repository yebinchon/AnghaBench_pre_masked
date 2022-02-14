
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ state; int block_gc; int scope; } ;
typedef TYPE_1__ DnsTransaction ;
typedef TYPE_1__ DnsPacket ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(DnsTransaction *VAR_2, DnsPacket *VAR_3) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        FUNC_3(VAR_2);

        if (FUNC_1(VAR_3) <= 0) {
                FUNC_7("Invalid TCP reply packet.");
                FUNC_4(VAR_2, VAR_0);
                return 0;
        }

        FUNC_2(VAR_2->scope, VAR_3);

        VAR_2->block_gc++;
        FUNC_6(VAR_2, VAR_3);
        VAR_2->block_gc--;




        if (VAR_2->state == VAR_1)
                FUNC_4(VAR_2, VAR_0);
        else
                FUNC_5(VAR_2);

        return 0;
}
