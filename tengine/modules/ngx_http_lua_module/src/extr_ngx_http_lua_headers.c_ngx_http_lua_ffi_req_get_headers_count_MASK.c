
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_socket_t ;
struct TYPE_10__ {int nelts; struct TYPE_10__* next; } ;
typedef TYPE_4__ ngx_list_part_t ;
struct TYPE_7__ {TYPE_4__ part; } ;
struct TYPE_8__ {TYPE_1__ headers; } ;
struct TYPE_11__ {TYPE_3__* connection; TYPE_2__ headers_in; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_9__ {scalar_t__ fd; int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int,int) ;

int
FUNC_1(ngx_http_request_t *VAR_3, int VAR_4,
    int *VAR_5)
{
    int VAR_6;
    ngx_list_part_t *VAR_7;

    if (VAR_3->connection->fd == (ngx_socket_t) -1) {
        return VAR_0;
    }

    *VAR_5 = 0;

    if (VAR_4 < 0) {
        VAR_4 = VAR_1;
    }

    VAR_7 = &VAR_3->headers_in.headers.part;
    VAR_6 = VAR_7->nelts;
    while (VAR_7->next != ((void*)0)) {
        VAR_7 = VAR_7->next;
        VAR_6 += VAR_7->nelts;
    }

    if (VAR_4 > 0 && VAR_6 > VAR_4) {
        *VAR_5 = 1;

        FUNC_0(VAR_2, VAR_3->connection->log, 0,
                       "lua exceeding request header limit %d > %d", VAR_6,
                       VAR_4);
        VAR_6 = VAR_4;
    }

    return VAR_6;
}
