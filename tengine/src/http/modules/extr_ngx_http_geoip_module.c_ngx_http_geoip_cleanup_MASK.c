
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ city; scalar_t__ org; scalar_t__ region; scalar_t__ country; } ;
typedef TYPE_1__ ngx_http_geoip_conf_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
    ngx_http_geoip_conf_t *VAR_1 = VAR_0;

    if (VAR_1->country) {
        FUNC_0(VAR_1->country);
    }







    if (VAR_1->org) {
        FUNC_0(VAR_1->org);
    }

    if (VAR_1->city) {
        FUNC_0(VAR_1->city);
    }
}
