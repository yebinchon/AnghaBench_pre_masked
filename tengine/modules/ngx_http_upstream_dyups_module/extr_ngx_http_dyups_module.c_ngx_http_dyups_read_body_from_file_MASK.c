
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_11__ {TYPE_2__* request_body; int pool; TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_12__ {struct TYPE_12__* next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_13__ {scalar_t__ pos; scalar_t__ last; scalar_t__ file_pos; scalar_t__ file_last; int file; scalar_t__ in_file; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_10__ {TYPE_4__* bufs; } ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_5__* FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*,size_t) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static ngx_buf_t *
FUNC_5(ngx_http_request_t *VAR_2)
{
    size_t VAR_3;
    ssize_t VAR_4;
    ngx_buf_t *VAR_5, *VAR_6;
    ngx_chain_t *VAR_7;

    FUNC_2(VAR_1, VAR_2->connection->log, 0,
                   "[dyups] interface read post body from file");

    VAR_3 = 0;
    VAR_7 = VAR_2->request_body->bufs;

    while (VAR_7) {

        VAR_5 = VAR_7->buf;

        if (VAR_5->in_file) {
            VAR_3 += VAR_5->file_last - VAR_5->file_pos;

        } else {
            VAR_3 += VAR_5->last - VAR_5->pos;
        }

        VAR_7 = VAR_7->next;
    }

    FUNC_3(VAR_1, VAR_2->connection->log, 0,
                   "[dyups] interface read post body file size %ui", VAR_3);

    VAR_6 = FUNC_1(VAR_2->pool, VAR_3);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7 = VAR_2->request_body->bufs;

    while (VAR_7) {

        VAR_5 = VAR_7->buf;

        if (VAR_5->in_file) {

            VAR_4 = FUNC_4(VAR_5->file, VAR_6->last,
                                 VAR_5->file_last - VAR_5->file_pos, VAR_5->file_pos);

            if (VAR_4 == VAR_0) {
                return ((void*)0);
            }

            VAR_6->last += VAR_4;

        } else {

            VAR_6->last = FUNC_0(VAR_6->last, VAR_5->pos, VAR_5->last - VAR_5->pos);
        }

        VAR_7 = VAR_7->next;
    }

    return VAR_6;
}
