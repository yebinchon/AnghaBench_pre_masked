
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_conf_t ;


 char* VAR_0 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    size_t *VAR_4 = VAR_3;

    size_t VAR_5, VAR_6;

    VAR_5 = 15;

    for (VAR_6 = 32 * 1024; VAR_6 > 256; VAR_6 >>= 1) {

        if (VAR_6 == *VAR_4) {
            *VAR_4 = VAR_5;

            return VAR_0;
        }

        VAR_5--;
    }

    return "must be 512, 1k, 2k, 4k, 8k, 16k, or 32k";
}
