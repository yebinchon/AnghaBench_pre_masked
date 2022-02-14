
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_char ;
typedef int signature ;
typedef int ngx_proxy_protocol_header_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {size_t len; int * data; } ;
struct TYPE_5__ {int log; scalar_t__ proxy_protocol_port; TYPE_4__ proxy_protocol_addr; int pool; } ;
typedef TYPE_1__ ngx_connection_t ;
typedef scalar_t__ in_port_t ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,char*,TYPE_4__*,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,char*,size_t,char*) ;
 int FUNC_5 (int *,char*,size_t) ;
 int * FUNC_6 (int ,size_t) ;
 char* FUNC_7 (TYPE_1__*,char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

u_char *
FUNC_9(ngx_connection_t *VAR_4, u_char *VAR_5, u_char *VAR_6)
{
    size_t VAR_7;
    u_char VAR_8, *VAR_9, *VAR_10, *VAR_11;
    ngx_int_t VAR_12;

    static const u_char VAR_13[] = "\r\n\r\n\0\r\nQUIT\n";

    VAR_9 = VAR_5;
    VAR_7 = VAR_6 - VAR_5;

    if (VAR_7 >= sizeof(ngx_proxy_protocol_header_t)
        && FUNC_0(VAR_9, VAR_13, sizeof(VAR_13) - 1) == 0)
    {
        return FUNC_7(VAR_4, VAR_5, VAR_6);
    }

    if (VAR_7 < 8 || FUNC_8(VAR_9, "PROXY ", 6) != 0) {
        goto invalid;
    }

    VAR_9 += 6;
    VAR_7 -= 6;

    if (VAR_7 >= 7 && FUNC_8(VAR_9, "UNKNOWN", 7) == 0) {
        FUNC_2(VAR_2, VAR_4->log, 0,
                       "PROXY protocol unknown protocol");
        VAR_9 += 7;
        goto skip;
    }

    if (VAR_7 < 5 || FUNC_8(VAR_9, "TCP", 3) != 0
        || (VAR_9[3] != '4' && VAR_9[3] != '6') || VAR_9[4] != ' ')
    {
        goto invalid;
    }

    VAR_9 += 5;
    VAR_10 = VAR_9;

    for ( ;; ) {
        if (VAR_9 == VAR_6) {
            goto invalid;
        }

        VAR_8 = *VAR_9++;

        if (VAR_8 == ' ') {
            break;
        }

        if (VAR_8 != ':' && VAR_8 != '.'
            && (VAR_8 < 'a' || VAR_8 > 'f')
            && (VAR_8 < 'A' || VAR_8 > 'F')
            && (VAR_8 < '0' || VAR_8 > '9'))
        {
            goto invalid;
        }
    }

    VAR_7 = VAR_9 - VAR_10 - 1;
    VAR_4->proxy_protocol_addr.data = FUNC_6(VAR_4->pool, VAR_7);

    if (VAR_4->proxy_protocol_addr.data == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_5(VAR_4->proxy_protocol_addr.data, VAR_10, VAR_7);
    VAR_4->proxy_protocol_addr.len = VAR_7;

    for ( ;; ) {
        if (VAR_9 == VAR_6) {
            goto invalid;
        }

        if (*VAR_9++ == ' ') {
            break;
        }
    }

    VAR_11 = VAR_9;

    for ( ;; ) {
        if (VAR_9 == VAR_6) {
            goto invalid;
        }

        if (*VAR_9++ == ' ') {
            break;
        }
    }

    VAR_7 = VAR_9 - VAR_11 - 1;

    VAR_12 = FUNC_1(VAR_11, VAR_7);

    if (VAR_12 < 0 || VAR_12 > 65535) {
        goto invalid;
    }

    VAR_4->proxy_protocol_port = (in_port_t) VAR_12;

    FUNC_3(VAR_2, VAR_4->log, 0,
                   "PROXY protocol address: %V %d", &VAR_4->proxy_protocol_addr,
                   VAR_4->proxy_protocol_port);

skip:

    for ( ; VAR_9 < VAR_6 - 1; VAR_9++) {
        if (VAR_9[0] == VAR_0 && VAR_9[1] == VAR_1) {
            return VAR_9 + 2;
        }
    }

invalid:

    FUNC_4(VAR_3, VAR_4->log, 0,
                  "broken header: \"%*s\"", (size_t) (VAR_6 - VAR_5), VAR_5);

    return ((void*)0);
}
