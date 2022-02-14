
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_uint_t ;
struct TYPE_7__ {int* data; int len; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_8__ {int log; int log_level; } ;
typedef TYPE_2__ ngx_resolver_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int* FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int*,int*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_resolver_t *VAR_2, ngx_str_t *VAR_3, u_char *VAR_4, u_char *VAR_5,
    u_char *VAR_6)
{
    char *VAR_7;
    u_char *VAR_8, *VAR_9;
    ssize_t VAR_10;
    ngx_uint_t VAR_11, VAR_12;

    VAR_8 = VAR_5;
    VAR_10 = -1;






    for (VAR_11 = 0; VAR_11 < 128; VAR_11++) {
        VAR_12 = *VAR_8++;

        if (VAR_12 == 0) {
            goto done;
        }

        if (VAR_12 & 0xc0) {
            VAR_12 = ((VAR_12 & 0x3f) << 8) + *VAR_8;
            VAR_8 = &VAR_4[VAR_12];

        } else {
            VAR_10 += 1 + VAR_12;
            VAR_8 = &VAR_8[VAR_12];
        }

        if (VAR_8 >= VAR_6) {
            VAR_7 = "name is out of response";
            goto invalid;
        }
    }

    VAR_7 = "compression pointers loop";

invalid:

    FUNC_0(VAR_2->log_level, VAR_2->log, 0, VAR_7);

    return VAR_0;

done:

    if (VAR_3 == ((void*)0)) {
        return VAR_1;
    }

    if (VAR_10 == -1) {
        FUNC_2(VAR_3);
        return VAR_1;
    }

    VAR_9 = FUNC_1(VAR_2, VAR_10);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_3->data = VAR_9;

    VAR_12 = *VAR_5++;

    for ( ;; ) {
        if (VAR_12 & 0xc0) {
            VAR_12 = ((VAR_12 & 0x3f) << 8) + *VAR_5;
            VAR_5 = &VAR_4[VAR_12];

            VAR_12 = *VAR_5++;

        } else {
            FUNC_3(VAR_9, VAR_5, VAR_12);
            VAR_9 += VAR_12;
            VAR_5 += VAR_12;

            VAR_12 = *VAR_5++;

            if (VAR_12 != 0) {
                *VAR_9++ = '.';
            }
        }

        if (VAR_12 == 0) {
            VAR_3->len = VAR_9 - VAR_3->data;
            return VAR_1;
        }
    }
}
