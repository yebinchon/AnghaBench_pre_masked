
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef void* be32_t ;
struct TYPE_6__ {int ihl; int tos; void* check; scalar_t__ ttl; void* daddr; void* saddr; int protocol; void* tot_len; int version; } ;
struct TYPE_5__ {void* check; void* len; void* dest; void* source; } ;
struct TYPE_7__ {TYPE_2__ ip; TYPE_1__ udp; } ;
typedef TYPE_3__ DHCPPacket ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int *,int) ;
 void* FUNC_1 (int) ;

void FUNC_2(DHCPPacket *VAR_5, be32_t VAR_6,
                                   uint16_t VAR_7, be32_t VAR_8,
                                   uint16_t VAR_9, uint16_t VAR_10, int VAR_11) {
        VAR_5->ip.version = VAR_4;
        VAR_5->ip.ihl = VAR_0 / 4;
        VAR_5->ip.tot_len = FUNC_1(VAR_10);

        if (VAR_11 >= 0)
                VAR_5->ip.tos = VAR_11;
        else
                VAR_5->ip.tos = VAR_3;

        VAR_5->ip.protocol = VAR_2;
        VAR_5->ip.saddr = VAR_6;
        VAR_5->ip.daddr = VAR_8;

        VAR_5->udp.source = FUNC_1(VAR_7);
        VAR_5->udp.dest = FUNC_1(VAR_9);

        VAR_5->udp.len = FUNC_1(VAR_10 - VAR_0);

        VAR_5->ip.check = VAR_5->udp.len;
        VAR_5->udp.check = FUNC_0((uint8_t*)&VAR_5->ip.ttl, VAR_10 - 8);

        VAR_5->ip.ttl = VAR_1;
        VAR_5->ip.check = 0;
        VAR_5->ip.check = FUNC_0((uint8_t*)&VAR_5->ip, VAR_0);
}
