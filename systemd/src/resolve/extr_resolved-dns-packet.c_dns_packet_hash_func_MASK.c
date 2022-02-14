
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct siphash {int dummy; } ;
struct TYPE_5__ {int size; } ;
typedef TYPE_1__ DnsPacket ;


 int* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int*,int,struct siphash*) ;

__attribute__((used)) static void FUNC_3(const DnsPacket *VAR_0, struct siphash *VAR_1) {
        FUNC_1(VAR_0);

        FUNC_2(&VAR_0->size, sizeof(VAR_0->size), VAR_1);
        FUNC_2(FUNC_0((DnsPacket*) VAR_0), VAR_0->size, VAR_1);
}
