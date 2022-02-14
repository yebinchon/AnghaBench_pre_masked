
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
typedef void const accept_filter_arg ;
typedef size_t ngx_uint_t ;
struct TYPE_8__ {int rcvbuf; int sndbuf; int keepalive; int keepidle; int keepintvl; int keepcnt; int setfib; int fastopen; int accept_filter; int deferred_accept; scalar_t__ type; int addr_text; int fd; TYPE_1__* sockaddr; scalar_t__ wildcard; scalar_t__ add_deferred; scalar_t__ delete_deferred; int backlog; scalar_t__ listen; int * logp; int log; } ;
typedef TYPE_3__ ngx_listening_t ;
struct TYPE_7__ {size_t nelts; TYPE_3__* elts; } ;
struct TYPE_9__ {int log; TYPE_2__ listening; } ;
typedef TYPE_4__ ngx_cycle_t ;
struct TYPE_6__ {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ,int ,char*,int,...) ;
 int FUNC_3 (void const*,int) ;
 int VAR_23 ;
 int FUNC_4 (int ,int ,int ,void const*,int) ;

void
FUNC_5(ngx_cycle_t *VAR_24)
{
    int VAR_25;
    ngx_uint_t VAR_26;
    ngx_listening_t *VAR_27;





    VAR_27 = VAR_24->listening.elts;
    for (VAR_26 = 0; VAR_26 < VAR_24->listening.nelts; VAR_26++) {

        VAR_27[VAR_26].log = *VAR_27[VAR_26].logp;

        if (VAR_27[VAR_26].rcvbuf != -1) {
            if (FUNC_4(VAR_27[VAR_26].fd, VAR_11, VAR_14,
                           (const void *) &VAR_27[VAR_26].rcvbuf, sizeof(int))
                == -1)
            {
                FUNC_2(VAR_9, VAR_24->log, VAR_23,
                              "setsockopt(SO_RCVBUF, %d) %V failed, ignored",
                              VAR_27[VAR_26].rcvbuf, &VAR_27[VAR_26].addr_text);
            }
        }

        if (VAR_27[VAR_26].sndbuf != -1) {
            if (FUNC_4(VAR_27[VAR_26].fd, VAR_11, VAR_16,
                           (const void *) &VAR_27[VAR_26].sndbuf, sizeof(int))
                == -1)
            {
                FUNC_2(VAR_9, VAR_24->log, VAR_23,
                              "setsockopt(SO_SNDBUF, %d) %V failed, ignored",
                              VAR_27[VAR_26].sndbuf, &VAR_27[VAR_26].addr_text);
            }
        }

        if (VAR_27[VAR_26].keepalive) {
            VAR_25 = (VAR_27[VAR_26].keepalive == 1) ? 1 : 0;

            if (FUNC_4(VAR_27[VAR_26].fd, VAR_11, VAR_13,
                           (const void *) &VAR_25, sizeof(int))
                == -1)
            {
                FUNC_2(VAR_9, VAR_24->log, VAR_23,
                              "setsockopt(SO_KEEPALIVE, %d) %V failed, ignored",
                              VAR_25, &VAR_27[VAR_26].addr_text);
            }
        }
        if (VAR_27[VAR_26].listen) {



            if (FUNC_0(VAR_27[VAR_26].fd, VAR_27[VAR_26].backlog) == -1) {
                FUNC_2(VAR_9, VAR_24->log, VAR_23,
                              "listen() to %V, backlog %d failed, ignored",
                              VAR_27[VAR_26].addr_text, VAR_27[VAR_26].backlog);
            }
        }
    }

    return;
}
