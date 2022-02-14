
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int local; int * address; int buffer_size; int send_lowat; int read_timeout; int send_timeout; int connect_timeout; int allow_ports; int allow_port_all; int accept_connect; } ;
typedef TYPE_1__ ngx_http_proxy_connect_loc_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_4(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_http_proxy_connect_loc_conf_t *VAR_4 = VAR_2;
    ngx_http_proxy_connect_loc_conf_t *VAR_5 = VAR_3;

    FUNC_3(VAR_5->accept_connect, VAR_4->accept_connect, 0);
    FUNC_3(VAR_5->allow_port_all, VAR_4->allow_port_all, 0);
    FUNC_1(VAR_5->allow_ports, VAR_4->allow_ports, ((void*)0));

    FUNC_0(VAR_5->connect_timeout,
                              VAR_4->connect_timeout, 60000);

    FUNC_0(VAR_5->send_timeout, VAR_4->send_timeout, 60000);

    FUNC_0(VAR_5->read_timeout, VAR_4->read_timeout, 60000);

    FUNC_2(VAR_5->send_lowat, VAR_4->send_lowat, 0);

    FUNC_2(VAR_5->buffer_size, VAR_4->buffer_size, 16384);

    if (VAR_5->address == ((void*)0)) {
        VAR_5->address = VAR_4->address;
    }

    FUNC_1(VAR_5->local, VAR_4->local, ((void*)0));

    return VAR_0;
}
