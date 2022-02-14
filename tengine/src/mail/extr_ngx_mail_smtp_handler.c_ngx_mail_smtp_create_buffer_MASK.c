
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_9__ {int client_buffer_size; } ;
typedef TYPE_1__ ngx_mail_smtp_srv_conf_t ;
struct TYPE_10__ {int * buffer; int args; } ;
typedef TYPE_2__ ngx_mail_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int pool; } ;
typedef TYPE_3__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 int * FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_mail_session_t *VAR_3, ngx_connection_t *VAR_4)
{
    ngx_mail_smtp_srv_conf_t *VAR_5;

    if (FUNC_0(&VAR_3->args, VAR_4->pool, 2, sizeof(ngx_str_t)) == VAR_0) {
        FUNC_3(VAR_3);
        return VAR_0;
    }

    VAR_5 = FUNC_2(VAR_3, VAR_2);

    VAR_3->buffer = FUNC_1(VAR_4->pool, VAR_5->client_buffer_size);
    if (VAR_3->buffer == ((void*)0)) {
        FUNC_3(VAR_3);
        return VAR_0;
    }

    return VAR_1;
}
