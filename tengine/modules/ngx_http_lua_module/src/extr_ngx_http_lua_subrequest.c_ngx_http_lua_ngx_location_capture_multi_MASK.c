
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_54__ TYPE_9__ ;
typedef struct TYPE_53__ TYPE_7__ ;
typedef struct TYPE_52__ TYPE_6__ ;
typedef struct TYPE_51__ TYPE_5__ ;
typedef struct TYPE_50__ TYPE_4__ ;
typedef struct TYPE_49__ TYPE_42__ ;
typedef struct TYPE_48__ TYPE_3__ ;
typedef struct TYPE_47__ TYPE_2__ ;
typedef struct TYPE_46__ TYPE_1__ ;
typedef struct TYPE_45__ TYPE_11__ ;
typedef struct TYPE_44__ TYPE_10__ ;


typedef int uint8_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_48__ {size_t len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_50__ {int pool; TYPE_2__* main; int uri; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_51__ {TYPE_10__* buf; TYPE_42__* bufs; } ;
typedef TYPE_5__ ngx_http_request_body_t ;
struct TYPE_52__ {TYPE_7__* data; int handler; } ;
typedef TYPE_6__ ngx_http_post_subrequest_t ;
struct TYPE_53__ {int capture; int index; int no_abort; int vm_state; int body; int * last_body; TYPE_9__* pr_co_ctx; struct TYPE_53__* ctx; TYPE_9__* cur_co_ctx; } ;
typedef TYPE_7__ ngx_http_lua_post_subrequest_data_t ;
typedef TYPE_7__ ngx_http_lua_ctx_t ;
struct TYPE_54__ {int nsubreqs; scalar_t__ pending_subreqs; void* sr_flags; void* sr_bodies; void* sr_headers; void* sr_statuses; } ;
typedef TYPE_9__ ngx_http_lua_co_ctx_t ;
typedef int ngx_http_headers_out_t ;
struct TYPE_44__ {int * last; } ;
typedef TYPE_10__ ngx_buf_t ;
struct TYPE_45__ {scalar_t__ nelts; } ;
typedef TYPE_11__ ngx_array_t ;
typedef int lua_State ;
struct TYPE_49__ {int * next; TYPE_10__* buf; } ;
struct TYPE_47__ {int count; scalar_t__ stream; } ;
struct TYPE_46__ {int log; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int,...) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int) ;
 void* FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *,int,size_t*) ;
 scalar_t__ FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,int ) ;
 size_t FUNC_18 (int,int) ;
 void* FUNC_19 (TYPE_7__*,int) ;
 TYPE_42__* FUNC_20 (int ) ;
 int FUNC_21 (TYPE_11__*) ;
 void* FUNC_22 (int *,int *,size_t) ;
 TYPE_10__* FUNC_23 (int ,size_t) ;
 TYPE_7__* FUNC_24 (TYPE_4__*,int ) ;
 int FUNC_25 (TYPE_4__*,int,int,TYPE_5__*,unsigned int,TYPE_11__*) ;
 int FUNC_26 (int) ;
 int FUNC_27 (TYPE_4__*) ;
 int FUNC_28 (int *,TYPE_7__*,int) ;
 TYPE_4__* FUNC_29 (int *) ;
 int FUNC_30 (TYPE_4__*,TYPE_7__*) ;
 int VAR_8 ;
 int FUNC_31 (int *,TYPE_4__*,TYPE_7__*,int) ;
 int VAR_9 ;
 int FUNC_32 (TYPE_4__*,int *,int,TYPE_3__*) ;
 int FUNC_33 (TYPE_4__*,int *,int,TYPE_11__**) ;
 int FUNC_34 (TYPE_4__*,TYPE_3__*,TYPE_3__*,TYPE_4__**,TYPE_6__*,int ) ;
 int FUNC_35 (TYPE_4__*,TYPE_3__*,TYPE_3__*,int*) ;
 int FUNC_36 (TYPE_4__*,TYPE_7__*,int ) ;
 int FUNC_37 (int ,int ,int ,char*,int *,int ) ;
 int FUNC_38 (int *,int *,size_t) ;
 int FUNC_39 (TYPE_7__*,int) ;
 void* FUNC_40 (int ,size_t) ;
 void* FUNC_41 (int ,int) ;
 int FUNC_42 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_43(lua_State *VAR_10)
{
    ngx_http_request_t *VAR_11;
    ngx_http_request_t *VAR_12 = ((void*)0);
    ngx_http_post_subrequest_t *VAR_13;
    ngx_http_lua_ctx_t *VAR_14;
    ngx_http_lua_ctx_t *VAR_15;
    ngx_array_t *VAR_16;
    ngx_str_t VAR_17;
    ngx_str_t VAR_18;
    ngx_str_t VAR_19;
    ngx_uint_t VAR_20;
    u_char *VAR_21;
    u_char *VAR_22;
    size_t VAR_23;
    size_t VAR_24;
    int VAR_25;
    int VAR_26;
    int VAR_27 = 0;
    ngx_uint_t VAR_28;
    ngx_http_request_body_t *VAR_29;
    int VAR_30;
    ngx_buf_t *VAR_31;
    unsigned VAR_32;
    ngx_uint_t VAR_33;
    ngx_uint_t VAR_34;
    size_t VAR_35;
    size_t VAR_36;
    size_t VAR_37;
    size_t VAR_38;
    size_t VAR_39, VAR_40;
    unsigned VAR_41;
    ngx_http_lua_co_ctx_t *VAR_42;

    ngx_http_lua_post_subrequest_data_t *VAR_43;

    VAR_26 = FUNC_6(VAR_10);
    if (VAR_26 != 1) {
        return FUNC_3(VAR_10, "only one argument is expected, but got %d", VAR_26);
    }

    FUNC_2(VAR_10, 1, 128);

    VAR_33 = FUNC_8(VAR_10, 1);
    if (VAR_33 == 0) {
        return FUNC_3(VAR_10, "at least one subrequest should be specified");
    }

    VAR_11 = FUNC_29(VAR_10);
    if (VAR_11 == ((void*)0)) {
        return FUNC_3(VAR_10, "no request object found");
    }







    VAR_15 = FUNC_24(VAR_11, VAR_8);
    if (VAR_15 == ((void*)0)) {
        return FUNC_3(VAR_10, "no ctx found");
    }

    FUNC_28(VAR_10, VAR_15, VAR_3
                               | VAR_1
                               | VAR_2);

    VAR_42 = VAR_15->cur_co_ctx;
    if (VAR_42 == ((void*)0)) {
        return FUNC_3(VAR_10, "no co ctx found");
    }

    FUNC_37(VAR_6, VAR_11->connection->log, 0,
                   "lua location capture, uri:\"%V\" c:%ud", &VAR_11->uri,
                   VAR_11->main->count);

    VAR_35 = VAR_33 * sizeof(ngx_int_t);
    VAR_36 = VAR_33 * sizeof(ngx_http_headers_out_t *);
    VAR_37 = VAR_33 * sizeof(ngx_str_t);
    VAR_38 = VAR_33 * sizeof(uint8_t);

    VAR_21 = FUNC_41(VAR_11->pool, VAR_35 + VAR_36 +
                    VAR_37 + VAR_38);

    if (VAR_21 == ((void*)0)) {
        return FUNC_3(VAR_10, "no memory");
    }

    VAR_42->sr_statuses = (void *) VAR_21;
    VAR_21 += VAR_35;

    VAR_42->sr_headers = (void *) VAR_21;
    VAR_21 += VAR_36;

    VAR_42->sr_bodies = (void *) VAR_21;
    VAR_21 += VAR_37;

    VAR_42->sr_flags = (void *) VAR_21;

    VAR_42->nsubreqs = VAR_33;

    VAR_42->pending_subreqs = 0;

    VAR_16 = ((void*)0);

    for (VAR_34 = 0; VAR_34 < VAR_33; VAR_34++) {
        VAR_42->pending_subreqs++;

        FUNC_10(VAR_10, 1, VAR_34 + 1);
        if (FUNC_7(VAR_10, -1)) {
            return FUNC_3(VAR_10, "only array-like tables are allowed");
        }

        FUNC_0("queries query: top %d", FUNC_6(VAR_10));

        if (FUNC_15(VAR_10, -1) != 128) {
            return FUNC_3(VAR_10, "the query argument %d is not a table, "
                              "but a %s",
                              VAR_34, FUNC_16(VAR_10, FUNC_15(VAR_10, -1)));
        }

        VAR_24 = FUNC_8(VAR_10, -1);

        if (VAR_24 != 1 && VAR_24 != 2) {
            return FUNC_3(VAR_10, "query argument %d expecting one or "
                              "two arguments", VAR_34);
        }

        FUNC_10(VAR_10, 2, 1);

        FUNC_0("queries query uri: %d", FUNC_6(VAR_10));

        FUNC_0("first arg in first query: %s", FUNC_16(VAR_10, FUNC_15(VAR_10, -1)));

        VAR_29 = ((void*)0);

        FUNC_42(&VAR_19);

        if (VAR_16 != ((void*)0)) {

            VAR_16->nelts = 0;
        }

        VAR_32 = 0;

        VAR_41 = 0;

        if (VAR_24 == 2) {


            FUNC_10(VAR_10, 2, 2);

            FUNC_0("queries query uri opts: %d", FUNC_6(VAR_10));

            if (FUNC_15(VAR_10, 4) != 128) {
                return FUNC_3(VAR_10, "expecting table as the 2nd argument for "
                                  "subrequest %d, but got %s", VAR_34,
                                  FUNC_4(VAR_10, 4));
            }

            FUNC_0("queries query uri opts: %d", FUNC_6(VAR_10));



            FUNC_5(VAR_10, 4, "args");

            VAR_30 = FUNC_15(VAR_10, -1);

            switch (VAR_30) {
            case 128:
                FUNC_32(VAR_11, VAR_10, -1, &VAR_19);
                break;

            case 131:

                break;

            case 130:
            case 129:
                VAR_19.data = (u_char *) FUNC_13(VAR_10, -1, &VAR_23);
                VAR_19.len = VAR_23;

                break;

            default:
                return FUNC_3(VAR_10, "Bad args option value");
            }

            FUNC_9(VAR_10, 1);

            FUNC_0("queries query uri opts: %d", FUNC_6(VAR_10));



            FUNC_5(VAR_10, 4, "vars");

            switch (FUNC_15(VAR_10, -1)) {
            case 128:
                FUNC_33(VAR_11, VAR_10, -1, &VAR_16);

                FUNC_0("post process vars top: %d", FUNC_6(VAR_10));
                break;

            case 131:

                break;

            default:
                return FUNC_3(VAR_10, "Bad vars option value");
            }

            FUNC_9(VAR_10, 1);

            FUNC_0("queries query uri opts: %d", FUNC_6(VAR_10));



            FUNC_5(VAR_10, 4, "share_all_vars");

            switch (FUNC_15(VAR_10, -1)) {
            case 131:

                break;

            case 132:
                if (FUNC_12(VAR_10, -1)) {
                    VAR_32 |= VAR_5;
                }
                break;

            default:
                return FUNC_3(VAR_10, "Bad share_all_vars option value");
            }

            FUNC_9(VAR_10, 1);

            FUNC_0("queries query uri opts: %d", FUNC_6(VAR_10));



            FUNC_5(VAR_10, 4, "copy_all_vars");

            switch (FUNC_15(VAR_10, -1)) {
            case 131:

                break;

            case 132:
                if (FUNC_12(VAR_10, -1)) {
                    VAR_32 |= VAR_4;
                }
                break;

            default:
                return FUNC_3(VAR_10, "Bad copy_all_vars option value");
            }

            FUNC_9(VAR_10, 1);

            FUNC_0("queries query uri opts: %d", FUNC_6(VAR_10));



            FUNC_5(VAR_10, 4, "always_forward_body");
            VAR_27 = FUNC_12(VAR_10, -1);
            FUNC_9(VAR_10, 1);

            FUNC_0("always forward body: %d", VAR_27);



            FUNC_5(VAR_10, 4, "method");

            VAR_30 = FUNC_15(VAR_10, -1);

            if (VAR_30 == 131) {
                VAR_28 = VAR_0;

            } else {
                if (VAR_30 != 130) {
                    return FUNC_3(VAR_10, "Bad http request method");
                }

                VAR_28 = (ngx_uint_t) FUNC_14(VAR_10, -1);
            }

            FUNC_9(VAR_10, 1);

            FUNC_0("queries query uri opts: %d", FUNC_6(VAR_10));



            FUNC_5(VAR_10, 4, "ctx");

            VAR_30 = FUNC_15(VAR_10, -1);

            if (VAR_30 != 131) {
                if (VAR_30 != 128) {
                    return FUNC_3(VAR_10, "Bad ctx option value type %s, "
                                      "expected a Lua table",
                                      FUNC_16(VAR_10, VAR_30));
                }

                VAR_41 = 1;

            } else {
                FUNC_9(VAR_10, 1);
            }

            FUNC_0("queries query uri opts ctx?: %d", FUNC_6(VAR_10));



            FUNC_5(VAR_10, 4, "body");

            VAR_30 = FUNC_15(VAR_10, -1);

            if (VAR_30 != 131) {
                if (VAR_30 != 129 && VAR_30 != 130) {
                    return FUNC_3(VAR_10, "Bad http request body");
                }

                VAR_29 = FUNC_41(VAR_11->pool, sizeof(ngx_http_request_body_t));

                if (VAR_29 == ((void*)0)) {
                    return FUNC_3(VAR_10, "no memory");
                }

                VAR_22 = (u_char *) FUNC_13(VAR_10, -1, &VAR_23);

                FUNC_0("request body: [%.*s]", (int) VAR_23, VAR_22);

                if (VAR_23) {
                    VAR_31 = FUNC_23(VAR_11->pool, VAR_23);
                    if (VAR_31 == ((void*)0)) {
                        return FUNC_3(VAR_10, "no memory");
                    }

                    VAR_31->last = FUNC_22(VAR_31->last, VAR_22, VAR_23);

                    VAR_29->bufs = FUNC_20(VAR_11->pool);
                    if (VAR_29->bufs == ((void*)0)) {
                        return FUNC_3(VAR_10, "no memory");
                    }

                    VAR_29->bufs->buf = VAR_31;
                    VAR_29->bufs->next = ((void*)0);

                    VAR_29->buf = VAR_31;
                }
            }

            FUNC_9(VAR_10, 1);



            FUNC_11(VAR_10, 4);



            FUNC_0("queries query uri ctx?: %d", FUNC_6(VAR_10));

        } else {
            VAR_28 = VAR_0;
        }



        VAR_21 = (u_char *) FUNC_1(VAR_10, 3, &VAR_23);

        VAR_17.data = FUNC_40(VAR_11->pool, VAR_23);
        if (VAR_17.data == ((void*)0)) {
            return FUNC_3(VAR_10, "memory allocation error");
        }

        FUNC_38(VAR_17.data, VAR_21, VAR_23);

        VAR_17.len = VAR_23;

        FUNC_42(&VAR_18);

        VAR_20 = 0;

        VAR_25 = FUNC_35(VAR_11, &VAR_17, &VAR_18, &VAR_20);
        if (VAR_25 != VAR_7) {
            FUNC_0("rc = %d", (int) VAR_25);

            return FUNC_3(VAR_10, "unsafe uri in argument #1: %s", VAR_21);
        }

        if (VAR_18.len == 0) {
            if (VAR_19.len) {
                VAR_21 = FUNC_40(VAR_11->pool, VAR_19.len);
                if (VAR_21 == ((void*)0)) {
                    return FUNC_3(VAR_10, "no memory");
                }

                FUNC_38(VAR_21, VAR_19.data, VAR_19.len);

                VAR_18.data = VAR_21;
                VAR_18.len = VAR_19.len;
            }

        } else if (VAR_19.len) {

            VAR_23 = VAR_18.len + (sizeof("&") - 1) + VAR_19.len;

            VAR_21 = FUNC_40(VAR_11->pool, VAR_23);
            if (VAR_21 == ((void*)0)) {
                return FUNC_3(VAR_10, "no memory");
            }

            VAR_22 = FUNC_22(VAR_21, VAR_18.data, VAR_18.len);
            *VAR_22++ = '&';
            FUNC_38(VAR_22, VAR_19.data, VAR_19.len);

            VAR_18.data = VAR_21;
            VAR_18.len = VAR_23;
        }

        VAR_39 = FUNC_18(sizeof(ngx_http_post_subrequest_t), sizeof(void *));
        VAR_40 = FUNC_18(sizeof(ngx_http_lua_ctx_t), sizeof(void *));

        VAR_21 = FUNC_40(VAR_11->pool, VAR_39 + VAR_40
                       + sizeof(ngx_http_lua_post_subrequest_data_t));
        if (VAR_21 == ((void*)0)) {
            return FUNC_3(VAR_10, "no memory");
        }

        VAR_13 = (ngx_http_post_subrequest_t *) VAR_21;

        VAR_21 += VAR_39;

        VAR_14 = (ngx_http_lua_ctx_t *) VAR_21;

        FUNC_26((void *) VAR_14 == FUNC_19(VAR_14,
                                                             sizeof(void *)));

        VAR_21 += VAR_40;

        VAR_43 = (ngx_http_lua_post_subrequest_data_t *) VAR_21;

        FUNC_26((void *) VAR_43 == FUNC_19(VAR_43,
                                                               sizeof(void *)));

        FUNC_39(VAR_14, sizeof(ngx_http_lua_ctx_t));







        VAR_43->ctx = VAR_14;
        VAR_43->pr_co_ctx = VAR_42;

        VAR_13->handler = VAR_9;
        VAR_13->data = VAR_43;

        VAR_25 = FUNC_34(VAR_11, &VAR_17, &VAR_18, &VAR_12, VAR_13, 0);

        if (VAR_25 != VAR_7) {
            return FUNC_3(VAR_10, "failed to issue subrequest: %d", (int) VAR_25);
        }

        FUNC_30(VAR_12, VAR_14);

        VAR_14->capture = 1;
        VAR_14->index = VAR_34;
        VAR_14->last_body = &VAR_14->body;
        VAR_14->vm_state = VAR_15->vm_state;

        FUNC_36(VAR_12, VAR_14, VAR_8);

        VAR_25 = FUNC_25(VAR_12, VAR_28, VAR_27,
                                            VAR_29, VAR_32, VAR_16);

        if (VAR_25 != VAR_7) {
            FUNC_27(VAR_12);
            return FUNC_3(VAR_10, "failed to adjust the subrequest: %d",
                              (int) VAR_25);
        }

        FUNC_0("queries query uri opts ctx? %d", FUNC_6(VAR_10));



        if (VAR_41) {
            FUNC_31(VAR_10, VAR_12, VAR_14, -1);
            FUNC_9(VAR_10, 3);

        } else {
            FUNC_9(VAR_10, 2);
        }


    }

    if (VAR_16) {
        FUNC_21(VAR_16);
    }

    VAR_15->no_abort = 1;

    return FUNC_17(VAR_10, 0);
}
