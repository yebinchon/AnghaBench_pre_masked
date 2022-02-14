
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int hash; } ;
typedef TYPE_1__ ngx_http_upstream_chash_server_t ;



__attribute__((used)) static uint32_t
FUNC_0(
    ngx_http_upstream_chash_server_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
    uint32_t VAR_3, VAR_4, VAR_5;

    VAR_3 = 1;
    VAR_4 = VAR_1;

    while (VAR_3 < VAR_4) {
        VAR_5 = (VAR_3 + VAR_4) >> 1;
        if (VAR_0[VAR_5].hash == VAR_2) {
            return VAR_5;

        } else if (VAR_0[VAR_5].hash < VAR_2) {
            VAR_3 = VAR_5 + 1;

        } else {
            VAR_4 = VAR_5;
        }
    }

    if (VAR_3 == VAR_1 && VAR_0[VAR_3].hash < VAR_2) {
      return 1;
    }

    return VAR_3;
}
