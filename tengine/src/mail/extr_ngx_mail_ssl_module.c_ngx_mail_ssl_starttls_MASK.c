
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int enable; int line; int file; int listen; scalar_t__ starttls; } ;
typedef TYPE_4__ ngx_mail_ssl_conf_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {TYPE_3__* conf_file; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_9__ {int data; } ;
struct TYPE_10__ {TYPE_1__ name; } ;
struct TYPE_11__ {int line; TYPE_2__ file; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int ,char*) ;
 char* FUNC_1 (TYPE_5__*,int *,void*) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_mail_ssl_conf_t *VAR_7 = VAR_6;

    char *VAR_8;

    VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_6);

    if (VAR_8 != VAR_1) {
        return VAR_8;
    }

    if (VAR_7->enable == 1 && (ngx_int_t) VAR_7->starttls > VAR_3) {
        FUNC_0(VAR_2, VAR_4, 0,
                           "\"ssl\" directive conflicts with \"starttls\"");
        return VAR_0;
    }

    if (!VAR_7->listen) {
        VAR_7->file = VAR_4->conf_file->file.name.data;
        VAR_7->line = VAR_4->conf_file->line;
    }

    return VAR_1;
}
