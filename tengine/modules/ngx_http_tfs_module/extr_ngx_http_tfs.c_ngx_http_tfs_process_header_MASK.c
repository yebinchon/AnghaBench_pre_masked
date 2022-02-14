
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {int last; scalar_t__ pos; } ;
struct TYPE_9__ {scalar_t__ header_size; scalar_t__ (* input_filter ) (TYPE_3__*) ;TYPE_1__ header_buffer; void* header; TYPE_4__* tfs_peer; } ;
typedef TYPE_3__ ngx_http_tfs_t ;
struct TYPE_8__ {int last; } ;
struct TYPE_10__ {TYPE_2__ body_buffer; } ;
typedef TYPE_4__ ngx_http_tfs_peer_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_tfs_t *VAR_2, ngx_int_t VAR_3)
{
    ngx_int_t VAR_4, VAR_5;
    ngx_http_tfs_peer_connection_t *VAR_6;

    VAR_6 = VAR_2->tfs_peer;

    if (VAR_3 < VAR_2->header_size) {
        VAR_2->header_buffer.last += VAR_3;
        VAR_2->header_size -= VAR_3;
        return VAR_0;
    }

    VAR_2->header = (void *) VAR_2->header_buffer.pos;
    VAR_2->header_buffer.last += VAR_2->header_size;
    VAR_4 = VAR_3 - VAR_2->header_size;
    if (VAR_4 > 0) {
        VAR_6->body_buffer.last += VAR_4;
    }
    if (VAR_2->input_filter != ((void*)0)) {
        VAR_5 = VAR_2->input_filter(VAR_2);
        if (VAR_5 != VAR_1) {

            return VAR_5;
        }
    }

    return VAR_1;
}
