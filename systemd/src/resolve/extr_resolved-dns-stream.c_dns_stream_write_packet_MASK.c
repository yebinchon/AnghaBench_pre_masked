
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int write_queue; } ;
typedef TYPE_1__ DnsStream ;
typedef TYPE_1__ DnsPacket ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,TYPE_1__*) ;

int FUNC_4(DnsStream *VAR_0, DnsPacket *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        VAR_2 = FUNC_3(VAR_0->write_queue, VAR_1);
        if (VAR_2 < 0)
                return VAR_2;

        FUNC_1(VAR_1);

        return FUNC_2(VAR_0);
}
