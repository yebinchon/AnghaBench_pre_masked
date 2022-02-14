
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int content_length_n; } ;
struct TYPE_10__ {TYPE_1__ headers_out; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_11__ {int wbits; int memlevel; int allocated; int intel; } ;
typedef TYPE_3__ ngx_http_gzip_ctx_t ;
struct TYPE_12__ {int wbits; int memlevel; int level; } ;
typedef TYPE_4__ ngx_http_gzip_conf_t ;


 TYPE_4__* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void
FUNC_2(ngx_http_request_t *VAR_2, ngx_http_gzip_ctx_t *VAR_3)
{
    int VAR_4, VAR_5;
    ngx_http_gzip_conf_t *VAR_6;

    VAR_6 = FUNC_0(VAR_2, VAR_1);

    VAR_4 = VAR_6->wbits;
    VAR_5 = VAR_6->memlevel;

    if (VAR_2->headers_out.content_length_n > 0) {



        while (VAR_2->headers_out.content_length_n < ((1 << (VAR_4 - 1)) - 262)) {
            VAR_4--;
            VAR_5--;
        }

        if (VAR_5 < 1) {
            VAR_5 = 1;
        }
    }

    VAR_3->wbits = VAR_4;
    VAR_3->memlevel = VAR_5;
    if (!VAR_0) {
        VAR_3->allocated = 8192 + (1 << (VAR_4 + 2)) + (1 << (VAR_5 + 9));

    } else {
        if (VAR_6->level == 1) {
            VAR_4 = FUNC_1(VAR_4, 13);
        }

        VAR_3->allocated = 8192 + 16 + (1 << (VAR_4 + 2))
                         + (1 << (FUNC_1(VAR_5, 8) + 8))
                         + (1 << (VAR_5 + 8));
        VAR_3->intel = 1;
    }
}
