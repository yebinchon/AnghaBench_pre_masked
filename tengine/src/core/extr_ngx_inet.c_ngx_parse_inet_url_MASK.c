
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef char u_char ;
struct TYPE_15__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; void* sin_port; void* sin_family; } ;
struct TYPE_21__ {int sockaddr; } ;
struct TYPE_14__ {size_t len; char* data; } ;
struct TYPE_19__ {int len; char* data; } ;
struct TYPE_18__ {int len; char* data; } ;
struct TYPE_17__ {char* data; size_t len; } ;
struct TYPE_20__ {int socklen; char* err; int last_port; void* port; int wildcard; int no_port; void* default_port; TYPE_9__ sockaddr; TYPE_3__* addrs; void* family; scalar_t__ no_resolve; scalar_t__ listen; TYPE_1__ host; TYPE_6__ port_text; TYPE_5__ uri; int uri_part; TYPE_4__ url; } ;
typedef TYPE_7__ ngx_url_t ;
typedef int ngx_pool_t ;
typedef int ngx_int_t ;
typedef void* in_port_t ;
struct TYPE_16__ {int socklen; TYPE_10__* sockaddr; } ;
struct TYPE_13__ {void* sa_family; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int *,TYPE_7__*,int *,int,int) ;
 scalar_t__ FUNC_3 (char*,size_t) ;
 int FUNC_4 (int *,TYPE_7__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_9__*,TYPE_10__*,int) ;
 char* FUNC_7 (char*,char*,char) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_pool_t *VAR_5, ngx_url_t *VAR_6)
{
    u_char *VAR_7, *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    size_t VAR_13;
    ngx_int_t VAR_14;
    struct sockaddr_in *VAR_15;

    VAR_6->socklen = sizeof(struct sockaddr_in);
    VAR_15 = (struct sockaddr_in *) &VAR_6->sockaddr;
    VAR_15->sin_family = VAR_0;

    VAR_6->family = VAR_0;

    VAR_7 = VAR_6->url.data;

    VAR_9 = VAR_7 + VAR_6->url.len;

    VAR_8 = FUNC_7(VAR_7, VAR_9, ':');

    VAR_10 = FUNC_7(VAR_7, VAR_9, '/');

    VAR_11 = FUNC_7(VAR_7, VAR_9, '?');

    if (VAR_11) {
        if (VAR_10 == ((void*)0) || VAR_11 < VAR_10) {
            VAR_10 = VAR_11;
        }
    }

    if (VAR_10) {
        if (VAR_6->listen || !VAR_6->uri_part) {
            VAR_6->err = "invalid host";
            return VAR_3;
        }

        VAR_6->uri.len = VAR_9 - VAR_10;
        VAR_6->uri.data = VAR_10;

        VAR_9 = VAR_10;

        if (VAR_10 < VAR_8) {
            VAR_8 = ((void*)0);
        }
    }

    if (VAR_8) {
        VAR_8++;

        VAR_13 = VAR_9 - VAR_8;

        if (VAR_6->listen) {
            VAR_12 = FUNC_7(VAR_8, VAR_9, '-');

            if (VAR_12) {
                VAR_12++;

                VAR_14 = FUNC_1(VAR_12, VAR_9 - VAR_12);

                if (VAR_14 < 1 || VAR_14 > 65535) {
                    VAR_6->err = "invalid port";
                    return VAR_3;
                }

                VAR_6->last_port = (in_port_t) VAR_14;

                VAR_13 = VAR_12 - VAR_8 - 1;
            }
        }

        VAR_14 = FUNC_1(VAR_8, VAR_13);

        if (VAR_14 < 1 || VAR_14 > 65535) {
            VAR_6->err = "invalid port";
            return VAR_3;
        }

        if (VAR_6->last_port && VAR_14 > VAR_6->last_port) {
            VAR_6->err = "invalid port range";
            return VAR_3;
        }

        VAR_6->port = (in_port_t) VAR_14;
        VAR_15->sin_port = FUNC_0((in_port_t) VAR_14);

        VAR_6->port_text.len = VAR_9 - VAR_8;
        VAR_6->port_text.data = VAR_8;

        VAR_9 = VAR_8 - 1;

    } else {
        if (VAR_10 == ((void*)0)) {

            if (VAR_6->listen) {



                VAR_13 = VAR_9 - VAR_7;

                VAR_12 = FUNC_7(VAR_7, VAR_9, '-');

                if (VAR_12) {
                    VAR_12++;

                    VAR_14 = FUNC_1(VAR_12, VAR_9 - VAR_12);

                    if (VAR_14 == VAR_3) {
                        goto no_port;
                    }

                    if (VAR_14 < 1 || VAR_14 > 65535) {
                        VAR_6->err = "invalid port";

                    } else {
                        VAR_6->last_port = (in_port_t) VAR_14;
                    }

                    VAR_13 = VAR_12 - VAR_7 - 1;
                }

                VAR_14 = FUNC_1(VAR_7, VAR_13);

                if (VAR_14 != VAR_3) {

                    if (VAR_6->err) {
                        return VAR_3;
                    }

                    if (VAR_14 < 1 || VAR_14 > 65535) {
                        VAR_6->err = "invalid port";
                        return VAR_3;
                    }

                    if (VAR_6->last_port && VAR_14 > VAR_6->last_port) {
                        VAR_6->err = "invalid port range";
                        return VAR_3;
                    }

                    VAR_6->port = (in_port_t) VAR_14;
                    VAR_15->sin_port = FUNC_0((in_port_t) VAR_14);
                    VAR_15->sin_addr.s_addr = VAR_1;

                    VAR_6->port_text.len = VAR_9 - VAR_7;
                    VAR_6->port_text.data = VAR_7;

                    VAR_6->wildcard = 1;

                    return FUNC_2(VAR_5, VAR_6, &VAR_6->sockaddr.sockaddr,
                                             VAR_6->socklen, 1);
                }
            }
        }

no_port:

        VAR_6->err = ((void*)0);
        VAR_6->no_port = 1;
        VAR_6->port = VAR_6->default_port;
        VAR_15->sin_port = FUNC_0(VAR_6->default_port);
        VAR_6->last_port = 0;
    }

    VAR_13 = VAR_9 - VAR_7;

    if (VAR_13 == 0) {
        VAR_6->err = "no host";
        return VAR_3;
    }

    VAR_6->host.len = VAR_13;
    VAR_6->host.data = VAR_7;

    if (VAR_6->listen && VAR_13 == 1 && *VAR_7 == '*') {
        VAR_15->sin_addr.s_addr = VAR_1;
        VAR_6->wildcard = 1;
        return FUNC_2(VAR_5, VAR_6, &VAR_6->sockaddr.sockaddr, VAR_6->socklen, 1);
    }

    VAR_15->sin_addr.s_addr = FUNC_3(VAR_7, VAR_13);

    if (VAR_15->sin_addr.s_addr != VAR_2) {

        if (VAR_15->sin_addr.s_addr == VAR_1) {
            VAR_6->wildcard = 1;
        }

        return FUNC_2(VAR_5, VAR_6, &VAR_6->sockaddr.sockaddr, VAR_6->socklen, 1);
    }

    if (VAR_6->no_resolve) {
        return VAR_4;
    }

    if (FUNC_4(VAR_5, VAR_6) != VAR_4) {
        return VAR_3;
    }

    VAR_6->family = VAR_6->addrs[0].sockaddr->sa_family;
    VAR_6->socklen = VAR_6->addrs[0].socklen;
    FUNC_6(&VAR_6->sockaddr, VAR_6->addrs[0].sockaddr, VAR_6->addrs[0].socklen);
    VAR_6->wildcard = FUNC_5(&VAR_6->sockaddr.sockaddr);

    return VAR_4;
}
