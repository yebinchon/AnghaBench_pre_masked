
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ starttls; } ;
typedef TYPE_1__ ngx_mail_ssl_conf_t ;
struct TYPE_9__ {int out; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_10__ {int capability; int starttls_only_capability; int starttls_capability; } ;
typedef TYPE_3__ ngx_mail_pop3_srv_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_11__ {int * ssl; } ;
typedef TYPE_4__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_mail_session_t *VAR_5, ngx_connection_t *VAR_6, ngx_int_t VAR_7)
{
    ngx_mail_pop3_srv_conf_t *VAR_8;

    VAR_8 = FUNC_0(VAR_5, VAR_3);
    VAR_5->out = VAR_8->capability;
    return VAR_2;
}
