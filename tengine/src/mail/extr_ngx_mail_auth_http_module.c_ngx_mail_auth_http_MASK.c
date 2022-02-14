
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ len; } ;
struct TYPE_14__ {int data; int len; } ;
struct TYPE_13__ {int default_port; int uri_part; scalar_t__ family; TYPE_6__ uri; TYPE_6__ host; int addrs; TYPE_3__ url; scalar_t__ err; } ;
typedef TYPE_2__ ngx_url_t ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_15__ {TYPE_6__ uri; TYPE_6__ host_header; int peer; } ;
typedef TYPE_4__ ngx_mail_auth_http_conf_t ;
struct TYPE_16__ {int pool; TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_12__ {TYPE_3__* elts; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,TYPE_5__*,int ,char*,scalar_t__,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 scalar_t__ FUNC_4 (int,char*,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_mail_auth_http_conf_t *VAR_8 = VAR_7;

    ngx_str_t *VAR_9;
    ngx_url_t VAR_10;

    VAR_9 = VAR_5->args->elts;

    FUNC_1(&VAR_10, sizeof(ngx_url_t));

    VAR_10.url = VAR_9[1];
    VAR_10.default_port = 80;
    VAR_10.uri_part = 1;

    if (FUNC_4(VAR_10.url.data, "http://", 7) == 0) {
        VAR_10.url.len -= 7;
        VAR_10.url.data += 7;
    }

    if (FUNC_2(VAR_5->pool, &VAR_10) != VAR_4) {
        if (VAR_10.err) {
            FUNC_0(VAR_3, VAR_5, 0,
                               "%s in auth_http \"%V\"", VAR_10.err, &VAR_10.url);
        }

        return VAR_1;
    }

    VAR_8->peer = VAR_10.addrs;

    if (VAR_10.family != VAR_0) {
        VAR_8->host_header = VAR_10.host;

    } else {
        FUNC_3(&VAR_8->host_header, "localhost");
    }

    VAR_8->uri = VAR_10.uri;

    if (VAR_8->uri.len == 0) {
        FUNC_3(&VAR_8->uri, "/");
    }

    return VAR_2;
}
