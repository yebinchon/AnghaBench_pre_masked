
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int * uint8; } ;
struct TYPE_7__ {int * uint8; } ;
struct TYPE_9__ {scalar_t__ family; TYPE_2__ ip6; TYPE_1__ ip4; } ;
struct TYPE_10__ {int port; TYPE_3__ ip; } ;
struct TYPE_11__ {int* last_packet; int last_packet_length; scalar_t__ last_packet_sent; TYPE_4__ ip_port; } ;
typedef TYPE_5__ TCP_Client_Connection ;
typedef int IP6 ;
typedef int IP4 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int*,int *,int) ;

__attribute__((used)) static void FUNC_1(TCP_Client_Connection *VAR_1)
{
    VAR_1->last_packet[0] = 5;
    VAR_1->last_packet[1] = 1;
    VAR_1->last_packet[2] = 0;
    uint16_t VAR_2 = 3;

    if (VAR_1->ip_port.ip.family == VAR_0) {
        VAR_1->last_packet[3] = 1;
        ++VAR_2;
        FUNC_0(VAR_1->last_packet + VAR_2, VAR_1->ip_port.ip.ip4.uint8, sizeof(IP4));
        VAR_2 += sizeof(IP4);
    } else {
        VAR_1->last_packet[3] = 4;
        ++VAR_2;
        FUNC_0(VAR_1->last_packet + VAR_2, VAR_1->ip_port.ip.ip6.uint8, sizeof(IP6));
        VAR_2 += sizeof(IP6);
    }

    FUNC_0(VAR_1->last_packet + VAR_2, &VAR_1->ip_port.port, sizeof(uint16_t));
    VAR_2 += sizeof(uint16_t);

    VAR_1->last_packet_length = VAR_2;
    VAR_1->last_packet_sent = 0;
}
