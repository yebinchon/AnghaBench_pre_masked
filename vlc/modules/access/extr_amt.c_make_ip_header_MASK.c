
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ver_ihl; int tos; int id; int frag_off; int ttl; int protocol; int options; int srcAddr; scalar_t__ check; int tot_len; } ;
typedef TYPE_1__ amt_ip_alert_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1( amt_ip_alert_t *VAR_3 )
{
    VAR_3->ver_ihl = 0x46;
    VAR_3->tos = 0xc0;
    VAR_3->tot_len = FUNC_0( VAR_2 + VAR_0 );
    VAR_3->id = 0x00;
    VAR_3->frag_off = 0x0000;
    VAR_3->ttl = 0x01;
    VAR_3->protocol = 0x02;
    VAR_3->check = 0;
    VAR_3->srcAddr = VAR_1;
    VAR_3->options = 0x0000;
}
