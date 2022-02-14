
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_17__ {TYPE_10__* write; TYPE_10__* read; scalar_t__ fd; } ;
struct TYPE_15__ {int * data; } ;
struct TYPE_16__ {int * sockaddr; } ;
struct TYPE_18__ {void* facility; void* severity; TYPE_2__ conn; TYPE_11__ tag; TYPE_1__ server; } ;
typedef TYPE_3__ ngx_syslog_peer_t ;
typedef scalar_t__ ngx_socket_t ;
struct TYPE_19__ {int handler; TYPE_3__* data; } ;
typedef TYPE_4__ ngx_pool_cleanup_t ;
struct TYPE_20__ {int pool; } ;
typedef TYPE_5__ ngx_conf_t ;
struct TYPE_14__ {int * log; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int ,char*) ;
 TYPE_4__* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_11__*,char*) ;
 int VAR_4 ;
 TYPE_10__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_3__*) ;

char *
FUNC_4(ngx_conf_t *VAR_7, ngx_syslog_peer_t *VAR_8)
{
    ngx_pool_cleanup_t *VAR_9;

    VAR_8->facility = VAR_2;
    VAR_8->severity = VAR_2;

    if (FUNC_3(VAR_7, VAR_8) != VAR_1) {
        return VAR_0;
    }

    if (VAR_8->server.sockaddr == ((void*)0)) {
        FUNC_0(VAR_3, VAR_7, 0,
                           "no syslog server specified");
        return VAR_0;
    }

    if (VAR_8->facility == VAR_2) {
        VAR_8->facility = 23;
    }

    if (VAR_8->severity == VAR_2) {
        VAR_8->severity = 6;
    }

    if (VAR_8->tag.data == ((void*)0)) {
        FUNC_2(&VAR_8->tag, "nginx");
    }

    VAR_8->conn.fd = (ngx_socket_t) -1;

    VAR_8->conn.read = &VAR_5;
    VAR_8->conn.write = &VAR_5;

    VAR_5.log = &VAR_6;

    VAR_9 = FUNC_1(VAR_7->pool, 0);
    if (VAR_9 == ((void*)0)) {
        return VAR_0;
    }

    VAR_9->data = VAR_8;
    VAR_9->handler = VAR_4;

    return VAR_1;
}
