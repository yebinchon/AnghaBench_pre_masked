
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_10__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_9__ {int * data; scalar_t__ len; } ;
struct TYPE_13__ {int len; } ;
struct TYPE_11__ {TYPE_1__ out; TYPE_8__ salt; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (TYPE_2__*,TYPE_8__*) ;
 int * FUNC_3 (int ,scalar_t__) ;

ngx_int_t
FUNC_4(ngx_mail_session_t *VAR_4, ngx_connection_t *VAR_5,
    char *VAR_6, size_t VAR_7)
{
    u_char *VAR_8;
    ngx_str_t VAR_9;
    ngx_uint_t VAR_10;

    VAR_8 = FUNC_3(VAR_5->pool, VAR_7 + FUNC_0(VAR_4->salt.len) + 2);
    if (VAR_8 == ((void*)0)) {
        return VAR_2;
    }

    VAR_9.data = FUNC_1(VAR_8, VAR_6, VAR_7);
    VAR_4->salt.len -= 2;

    FUNC_2(&VAR_9, &VAR_4->salt);

    VAR_4->salt.len += 2;
    VAR_10 = VAR_7 + VAR_9.len;
    VAR_8[VAR_10++] = VAR_0; VAR_8[VAR_10++] = VAR_1;

    VAR_4->out.len = VAR_10;
    VAR_4->out.data = VAR_8;

    return VAR_3;
}
