
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int ngx_log_t ;
typedef int ngx_int_t ;
struct TYPE_6__ {size_t len; } ;
struct TYPE_7__ {TYPE_3__** recovering; TYPE_1__ pattern; } ;
typedef TYPE_2__ ngx_http_lua_socket_compiled_pattern_t ;
struct TYPE_8__ {scalar_t__ chr; int new_state; struct TYPE_8__* next; } ;
typedef TYPE_3__ ngx_http_lua_dfa_edge_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int,int *) ;
 int FUNC_1 (int ,int *,int ,char*,int,size_t,scalar_t__*,scalar_t__,int,size_t,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*,size_t) ;
 int FUNC_3 (TYPE_3__**,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_4(u_char *VAR_3, size_t VAR_4,
    ngx_http_lua_socket_compiled_pattern_t *VAR_5, ngx_log_t *VAR_6)
{
    size_t VAR_7;
    size_t VAR_8;
    size_t VAR_9;
    unsigned VAR_10;
    int VAR_11, VAR_12;

    ngx_http_lua_dfa_edge_t *VAR_13;
    ngx_http_lua_dfa_edge_t **VAR_14 = ((void*)0);

    VAR_5->pattern.len = VAR_4;

    if (VAR_4 <= 2) {
        return VAR_2;
    }

    for (VAR_7 = 1; VAR_7 < VAR_4; VAR_7++) {
        VAR_8 = 1;

        while (VAR_8 <= VAR_4 - VAR_7 - 1) {

            if (FUNC_2(VAR_3, &VAR_3[VAR_7], VAR_8) == 0) {
                if (VAR_3[VAR_8] == VAR_3[VAR_7 + VAR_8]) {
                    VAR_8++;
                    continue;
                }

                VAR_11 = VAR_7 + VAR_8;
                VAR_12 = VAR_8 + 1;

                if (VAR_5->recovering == ((void*)0)) {
                    VAR_9 = sizeof(void *) * (VAR_4 - 2);
                    VAR_5->recovering = FUNC_0(VAR_9, VAR_6);
                    if (VAR_5->recovering == ((void*)0)) {
                        return VAR_0;
                    }

                    FUNC_3(VAR_5->recovering, VAR_9);
                }

                VAR_13 = VAR_5->recovering[VAR_11 - 2];

                VAR_10 = 0;

                if (VAR_13 == ((void*)0)) {
                    VAR_14 = &VAR_5->recovering[VAR_11 - 2];

                } else {

                    for (; VAR_13; VAR_13 = VAR_13->next) {
                        VAR_14 = &VAR_13->next;

                        if (VAR_13->chr == VAR_3[VAR_8]) {
                            VAR_10 = 1;

                            if (VAR_13->new_state < VAR_12) {
                                VAR_13->new_state = VAR_12;
                            }

                            break;
                        }
                    }
                }

                if (!VAR_10) {
                    FUNC_1(VAR_1, VAR_6, 0,
                                   "lua tcp socket read until recovering point:"
                                   " on state %d (%*s), if next is '%c', then "
                                   "recover to state %d (%*s)", VAR_11,
                                   (size_t) VAR_11, VAR_3, VAR_3[VAR_8],
                                   VAR_12, (size_t) VAR_12, VAR_3);

                    VAR_13 = FUNC_0(sizeof(ngx_http_lua_dfa_edge_t), VAR_6);
                    if (VAR_13 == ((void*)0)) {
                        return VAR_0;
                    }

                    VAR_13->chr = VAR_3[VAR_8];
                    VAR_13->new_state = VAR_12;
                    VAR_13->next = ((void*)0);

                    *VAR_14 = VAR_13;
                }

                break;
            }

            break;
        }
    }

    return VAR_2;
}
