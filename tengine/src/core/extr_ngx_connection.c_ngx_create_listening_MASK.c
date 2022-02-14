
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr {int sa_family; } ;
typedef struct sockaddr u_char ;
typedef size_t socklen_t ;
typedef scalar_t__ ngx_socket_t ;
struct TYPE_10__ {size_t len; struct sockaddr* data; } ;
struct TYPE_11__ {size_t socklen; int addr_text_max_len; int rcvbuf; int sndbuf; int setfib; int fastopen; int backlog; int type; scalar_t__ fd; int sentinel; int rbtree; TYPE_2__ addr_text; struct sockaddr* sockaddr; } ;
typedef TYPE_3__ ngx_listening_t ;
struct TYPE_12__ {int pool; TYPE_1__* cycle; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_9__ {int listening; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int *) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr*,size_t) ;
 int FUNC_2 (TYPE_3__*,int) ;
 struct sockaddr* FUNC_3 (int ,size_t) ;
 struct sockaddr* FUNC_4 (int ,size_t) ;
 int FUNC_5 (int *,int *,int ) ;
 size_t FUNC_6 (struct sockaddr*,size_t,struct sockaddr*,int,int) ;
 int VAR_6 ;

ngx_listening_t *
FUNC_7(ngx_conf_t *VAR_7, struct sockaddr *VAR_8,
    socklen_t VAR_9)
{
    size_t VAR_10;
    ngx_listening_t *VAR_11;
    struct sockaddr *VAR_12;
    u_char VAR_13[VAR_3];

    VAR_11 = FUNC_0(&VAR_7->cycle->listening);
    if (VAR_11 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_2(VAR_11, sizeof(ngx_listening_t));

    VAR_12 = FUNC_3(VAR_7->pool, VAR_9);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_1(VAR_12, VAR_8, VAR_9);

    VAR_11->sockaddr = VAR_12;
    VAR_11->socklen = VAR_9;

    VAR_10 = FUNC_6(VAR_12, VAR_9, VAR_13, VAR_3, 1);
    VAR_11->addr_text.len = VAR_10;

    switch (VAR_11->sockaddr->sa_family) {
    case 130:
        VAR_11->addr_text_max_len = VAR_1;
        break;
    default:
        VAR_11->addr_text_max_len = VAR_3;
        break;
    }

    VAR_11->addr_text.data = FUNC_4(VAR_7->pool, VAR_10);
    if (VAR_11->addr_text.data == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_1(VAR_11->addr_text.data, VAR_13, VAR_10);


    FUNC_5(&VAR_11->rbtree, &VAR_11->sentinel, VAR_6);


    VAR_11->fd = (ngx_socket_t) -1;
    VAR_11->type = VAR_5;

    VAR_11->backlog = VAR_2;
    VAR_11->rcvbuf = -1;
    VAR_11->sndbuf = -1;
    return VAR_11;
}
