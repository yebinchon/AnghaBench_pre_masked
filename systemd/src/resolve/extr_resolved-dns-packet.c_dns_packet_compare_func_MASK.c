
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; } ;
typedef TYPE_1__ DnsPacket ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(const DnsPacket *VAR_0, const DnsPacket *VAR_1) {
        int VAR_2;

        VAR_2 = FUNC_0(VAR_0->size, VAR_1->size);
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_2(FUNC_1((DnsPacket*) VAR_0), FUNC_1((DnsPacket*) VAR_1), VAR_0->size);
}
