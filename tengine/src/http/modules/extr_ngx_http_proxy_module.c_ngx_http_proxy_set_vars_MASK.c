
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ len; int data; } ;
struct TYPE_9__ {scalar_t__ family; int port; int default_port; int uri; TYPE_4__ host; TYPE_4__ port_text; scalar_t__ no_port; } ;
typedef TYPE_2__ ngx_url_t ;
struct TYPE_8__ {int len; } ;
struct TYPE_10__ {int uri; TYPE_1__ key_start; TYPE_4__ port; TYPE_4__ host_header; } ;
typedef TYPE_3__ ngx_http_proxy_vars_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,char*) ;

__attribute__((used)) static void
FUNC_2(ngx_url_t *VAR_1, ngx_http_proxy_vars_t *VAR_2)
{
    if (VAR_1->family != VAR_0) {

        if (VAR_1->no_port || VAR_1->port == VAR_1->default_port) {

            VAR_2->host_header = VAR_1->host;

            if (VAR_1->default_port == 80) {
                FUNC_1(&VAR_2->port, "80");

            } else {
                FUNC_1(&VAR_2->port, "443");
            }

        } else {
            VAR_2->host_header.len = VAR_1->host.len + 1 + VAR_1->port_text.len;
            VAR_2->host_header.data = VAR_1->host.data;
            VAR_2->port = VAR_1->port_text;
        }

        VAR_2->key_start.len += VAR_2->host_header.len;

    } else {
        FUNC_1(&VAR_2->host_header, "localhost");
        FUNC_0(&VAR_2->port);
        VAR_2->key_start.len += sizeof("unix:") - 1 + VAR_1->host.len + 1;
    }

    VAR_2->uri = VAR_1->uri;
}
