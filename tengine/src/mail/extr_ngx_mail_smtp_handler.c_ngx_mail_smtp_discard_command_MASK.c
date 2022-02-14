
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_12__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ ngx_mail_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {scalar_t__ (* recv ) (TYPE_3__*,scalar_t__,scalar_t__) ;int read; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_11__ {scalar_t__ last; scalar_t__ end; scalar_t__ pos; scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,char*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_mail_session_t *VAR_3, ngx_connection_t *VAR_4,
    char *VAR_5)
{
    ssize_t VAR_6;

    VAR_6 = VAR_4->recv(VAR_4, VAR_3->buffer->last, VAR_3->buffer->end - VAR_3->buffer->last);

    if (VAR_6 == VAR_1 || VAR_6 == 0) {
        FUNC_1(VAR_4);
        return VAR_1;
    }

    if (VAR_6 > 0) {
        VAR_3->buffer->last += VAR_6;
    }

    if (VAR_6 == VAR_0) {
        if (FUNC_0(VAR_4->read, 0) != VAR_2) {
            FUNC_2(VAR_3);
            return VAR_1;
        }

        return VAR_0;
    }

    FUNC_3(VAR_3, VAR_4, VAR_5);

    VAR_3->buffer->pos = VAR_3->buffer->start;
    VAR_3->buffer->last = VAR_3->buffer->start;

    return VAR_2;
}
