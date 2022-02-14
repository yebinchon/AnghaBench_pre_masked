
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_13__ {int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_17__ {int len; int * data; } ;
struct TYPE_16__ {int len; int * data; } ;
struct TYPE_12__ {TYPE_2__* elts; } ;
struct TYPE_14__ {int auth_method; TYPE_8__ passwd; TYPE_7__ login; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int log; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_7__*,TYPE_8__*) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int * FUNC_5 (int ,int ) ;

ngx_int_t
FUNC_6(ngx_mail_session_t *VAR_7, ngx_connection_t *VAR_8)
{
    u_char *VAR_9, *VAR_10;
    ngx_str_t *VAR_11;

    VAR_11 = VAR_7->args.elts;

    FUNC_2(VAR_2, VAR_8->log, 0,
                   "mail auth cram-md5: \"%V\"", &VAR_11[0]);

    VAR_7->login.data = FUNC_5(VAR_8->pool, FUNC_0(VAR_11[0].len));
    if (VAR_7->login.data == ((void*)0)) {
        return VAR_1;
    }

    if (FUNC_1(&VAR_7->login, &VAR_11[0]) != VAR_6) {
        FUNC_4(VAR_3, VAR_8->log, 0,
            "client sent invalid base64 encoding in AUTH CRAM-MD5 command");
        return VAR_5;
    }

    VAR_9 = VAR_7->login.data;
    VAR_10 = VAR_9 + VAR_7->login.len;

    while (VAR_9 < VAR_10) {
        if (*VAR_9++ == ' ') {
            VAR_7->login.len = VAR_9 - VAR_7->login.data - 1;
            VAR_7->passwd.len = VAR_10 - VAR_9;
            VAR_7->passwd.data = VAR_9;
            break;
        }
    }

    if (VAR_7->passwd.len != 32) {
        FUNC_4(VAR_3, VAR_8->log, 0,
            "client sent invalid CRAM-MD5 hash in AUTH CRAM-MD5 command");
        return VAR_5;
    }

    FUNC_3(VAR_2, VAR_8->log, 0,
                   "mail auth cram-md5: \"%V\" \"%V\"", &VAR_7->login, &VAR_7->passwd);

    VAR_7->auth_method = VAR_4;

    return VAR_0;
}
