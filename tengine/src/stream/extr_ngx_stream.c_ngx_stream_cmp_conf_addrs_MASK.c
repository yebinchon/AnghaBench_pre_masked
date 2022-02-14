
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bind; scalar_t__ wildcard; } ;
struct TYPE_4__ {TYPE_1__ opt; } ;
typedef TYPE_2__ ngx_stream_conf_addr_t ;
typedef int ngx_int_t ;



__attribute__((used)) static ngx_int_t
FUNC_0(const void *VAR_0, const void *VAR_1)
{
    ngx_stream_conf_addr_t *VAR_2, *VAR_3;

    VAR_2 = (ngx_stream_conf_addr_t *) VAR_0;
    VAR_3 = (ngx_stream_conf_addr_t *) VAR_1;

    if (VAR_2->opt.wildcard) {

        return 1;
    }

    if (VAR_3->opt.wildcard) {

        return -1;
    }

    if (VAR_2->opt.bind && !VAR_3->opt.bind) {

        return -1;
    }

    if (!VAR_2->opt.bind && VAR_3->opt.bind) {

        return 1;
    }



    return 0;
}
