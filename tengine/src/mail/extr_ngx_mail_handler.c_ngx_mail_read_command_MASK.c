
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_18__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_19__ {int quit; TYPE_2__* buffer; } ;
typedef TYPE_4__ ngx_mail_session_t ;
struct TYPE_20__ {TYPE_1__* protocol; } ;
typedef TYPE_5__ ngx_mail_core_srv_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_21__ {scalar_t__ (* recv ) (TYPE_6__*,scalar_t__,scalar_t__) ;int log; int read; } ;
typedef TYPE_6__ ngx_connection_t ;
struct TYPE_17__ {scalar_t__ last; scalar_t__ end; scalar_t__ pos; scalar_t__ start; } ;
struct TYPE_16__ {scalar_t__ (* parse_command ) (TYPE_4__*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_3__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int VAR_6 ;
 TYPE_5__* FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;

ngx_int_t
FUNC_7(ngx_mail_session_t *VAR_7, ngx_connection_t *VAR_8)
{
    ssize_t VAR_9;
    ngx_int_t VAR_10;
    ngx_str_t VAR_11;
    ngx_mail_core_srv_conf_t *VAR_12;

    VAR_9 = VAR_8->recv(VAR_8, VAR_7->buffer->last, VAR_7->buffer->end - VAR_7->buffer->last);

    if (VAR_9 == VAR_1 || VAR_9 == 0) {
        FUNC_2(VAR_8);
        return VAR_1;
    }

    if (VAR_9 > 0) {
        VAR_7->buffer->last += VAR_9;
    }

    if (VAR_9 == VAR_0) {
        if (FUNC_0(VAR_8->read, 0) != VAR_5) {
            FUNC_4(VAR_7);
            return VAR_1;
        }

        if (VAR_7->buffer->pos == VAR_7->buffer->last) {
            return VAR_0;
        }
    }

    VAR_12 = FUNC_3(VAR_7, VAR_6);

    VAR_10 = VAR_12->protocol->parse_command(VAR_7);

    if (VAR_10 == VAR_0) {

        if (VAR_7->buffer->last < VAR_7->buffer->end) {
            return VAR_10;
        }

        VAR_11.len = VAR_7->buffer->last - VAR_7->buffer->start;
        VAR_11.data = VAR_7->buffer->start;

        FUNC_1(VAR_3, VAR_8->log, 0,
                      "client sent too long command \"%V\"", &VAR_11);

        VAR_7->quit = 1;

        return VAR_4;
    }

    if (VAR_10 == VAR_2 || VAR_10 == VAR_4) {
        return VAR_10;
    }

    if (VAR_10 == VAR_1) {
        FUNC_2(VAR_8);
        return VAR_1;
    }

    return VAR_5;
}
