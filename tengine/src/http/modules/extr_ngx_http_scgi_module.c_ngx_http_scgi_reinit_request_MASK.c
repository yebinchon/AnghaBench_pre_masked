
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_8__ {int * end; int * start; scalar_t__ count; scalar_t__ code; } ;
typedef TYPE_2__ ngx_http_status_t ;
struct TYPE_9__ {scalar_t__ state; TYPE_1__* upstream; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_7__ {int process_header; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_request_t *VAR_3)
{
    ngx_http_status_t *VAR_4;

    VAR_4 = FUNC_0(VAR_3, VAR_1);

    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    VAR_4->code = 0;
    VAR_4->count = 0;
    VAR_4->start = ((void*)0);
    VAR_4->end = ((void*)0);

    VAR_3->upstream->process_header = VAR_2;
    VAR_3->state = 0;

    return VAR_0;
}
