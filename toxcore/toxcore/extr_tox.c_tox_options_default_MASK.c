
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Tox_Options {int ipv6_enabled; int udp_enabled; int proxy_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct Tox_Options*,int ,int) ;

void FUNC_1(struct Tox_Options *VAR_1)
{
    if (VAR_1) {
        FUNC_0(VAR_1, 0, sizeof(struct Tox_Options));
        VAR_1->ipv6_enabled = 1;
        VAR_1->udp_enabled = 1;
        VAR_1->proxy_type = VAR_0;
    }
}
