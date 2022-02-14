
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_4__ {size_t len; int* data; } ;
typedef TYPE_1__ ngx_str_t ;



__attribute__((used)) static void
FUNC_0(ngx_str_t *VAR_0, ngx_str_t *VAR_1, const u_char *VAR_2,
    ngx_uint_t VAR_3)
{
    u_char *VAR_4, *VAR_5;
    size_t VAR_6;

    VAR_6 = VAR_1->len;
    VAR_5 = VAR_1->data;
    VAR_4 = VAR_0->data;

    while (VAR_6 > 2) {
        *VAR_4++ = VAR_2[(VAR_5[0] >> 2) & 0x3f];
        *VAR_4++ = VAR_2[((VAR_5[0] & 3) << 4) | (VAR_5[1] >> 4)];
        *VAR_4++ = VAR_2[((VAR_5[1] & 0x0f) << 2) | (VAR_5[2] >> 6)];
        *VAR_4++ = VAR_2[VAR_5[2] & 0x3f];

        VAR_5 += 3;
        VAR_6 -= 3;
    }

    if (VAR_6) {
        *VAR_4++ = VAR_2[(VAR_5[0] >> 2) & 0x3f];

        if (VAR_6 == 1) {
            *VAR_4++ = VAR_2[(VAR_5[0] & 3) << 4];
            if (VAR_3) {
                *VAR_4++ = '=';
            }

        } else {
            *VAR_4++ = VAR_2[((VAR_5[0] & 3) << 4) | (VAR_5[1] >> 4)];
            *VAR_4++ = VAR_2[(VAR_5[1] & 0x0f) << 2];
        }

        if (VAR_3) {
            *VAR_4++ = '=';
        }
    }

    VAR_0->len = VAR_4 - VAR_0->data;
}
