
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_53__ TYPE_9__ ;
typedef struct TYPE_52__ TYPE_8__ ;
typedef struct TYPE_51__ TYPE_7__ ;
typedef struct TYPE_50__ TYPE_6__ ;
typedef struct TYPE_49__ TYPE_5__ ;
typedef struct TYPE_48__ TYPE_4__ ;
typedef struct TYPE_47__ TYPE_3__ ;
typedef struct TYPE_46__ TYPE_2__ ;
typedef struct TYPE_45__ TYPE_21__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_14__ ;
typedef struct TYPE_42__ TYPE_13__ ;
typedef struct TYPE_41__ TYPE_12__ ;
typedef struct TYPE_40__ TYPE_11__ ;
typedef struct TYPE_39__ TYPE_10__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_51__ {int len; char* data; } ;
typedef TYPE_7__ ngx_str_t ;
struct TYPE_52__ {int err; char* fd; scalar_t__ size; int is_directio; int mtime; int is_file; scalar_t__ is_dir; int failed; int events; int errors; int min_uses; int valid; int directio; int read_ahead; } ;
typedef TYPE_8__ ngx_open_file_info_t ;
struct TYPE_53__ {char* action; } ;
typedef TYPE_9__ ngx_log_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_47__ {scalar_t__ content_length_n; int last_modified_time; int status; TYPE_21__* location; int headers; } ;
struct TYPE_49__ {scalar_t__ len; int data; } ;
struct TYPE_50__ {char* data; int len; } ;
struct TYPE_39__ {int method; int root_tested; int allow_ranges; struct TYPE_39__* main; scalar_t__ header_only; int pool; TYPE_3__ headers_out; TYPE_5__ args; TYPE_6__ uri; int error_page; TYPE_2__* connection; } ;
typedef TYPE_10__ ngx_http_request_t ;
struct TYPE_48__ {int len; } ;
struct TYPE_40__ {TYPE_4__ root; int * root_lengths; int alias; scalar_t__ log_not_found; int open_file_cache; int open_file_cache_events; int open_file_cache_errors; int open_file_cache_min_uses; int open_file_cache_valid; int directio; int read_ahead; } ;
typedef TYPE_11__ ngx_http_core_loc_conf_t ;
typedef int ngx_file_t ;
struct TYPE_41__ {int * next; TYPE_13__* buf; } ;
typedef TYPE_12__ ngx_chain_t ;
struct TYPE_42__ {scalar_t__ file_last; int in_file; int last_buf; int last_in_chain; TYPE_14__* file; scalar_t__ file_pos; } ;
typedef TYPE_13__ ngx_buf_t ;
struct TYPE_46__ {TYPE_9__* log; } ;
struct TYPE_44__ {size_t len; char* data; } ;
struct TYPE_45__ {int hash; TYPE_1__ value; int key; } ;
struct TYPE_43__ {char* fd; int directio; TYPE_9__* log; TYPE_7__ name; } ;


 scalar_t__ VAR_0 ;






 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_13__* FUNC_0 (int ) ;
 char* FUNC_1 (char*,char*,int) ;
 int FUNC_2 (TYPE_10__*) ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (TYPE_10__*) ;
 TYPE_11__* FUNC_4 (TYPE_10__*,int ) ;
 char* FUNC_5 (TYPE_10__*,TYPE_7__*,size_t*,int ) ;
 scalar_t__ FUNC_6 (TYPE_10__*,TYPE_12__*) ;
 scalar_t__ FUNC_7 (TYPE_10__*) ;
 scalar_t__ FUNC_8 (TYPE_10__*) ;
 scalar_t__ FUNC_9 (TYPE_10__*,TYPE_11__*,TYPE_7__*,TYPE_8__*) ;
 scalar_t__ FUNC_10 (TYPE_10__*) ;
 TYPE_21__* FUNC_11 (int *) ;
 int FUNC_12 (int ,TYPE_9__*,int ,char*) ;
 int FUNC_13 (int ,TYPE_9__*,int ,char*,char*) ;
 int FUNC_14 (int ,TYPE_9__*,int,char*,char*,...) ;
 int FUNC_15 (char*,int ,scalar_t__) ;
 int FUNC_16 (TYPE_8__*,int) ;
 scalar_t__ FUNC_17 (int ,TYPE_7__*,TYPE_8__*,int ) ;
 TYPE_14__* FUNC_18 (int ,int) ;
 char* FUNC_19 (int ,size_t) ;
 int FUNC_20 (int *,char*) ;

__attribute__((used)) static ngx_int_t
FUNC_21(ngx_http_request_t *VAR_16)
{
    u_char *VAR_17, *VAR_18;
    size_t VAR_19, VAR_20;
    ngx_str_t VAR_21;
    ngx_int_t VAR_22;
    ngx_uint_t VAR_23;
    ngx_log_t *VAR_24;
    ngx_buf_t *VAR_25;
    ngx_chain_t VAR_26;
    ngx_open_file_info_t VAR_27;
    ngx_http_core_loc_conf_t *VAR_28;

    if (!(VAR_16->method & (VAR_3|VAR_4|VAR_10))) {
        return VAR_7;
    }

    if (VAR_16->uri.data[VAR_16->uri.len - 1] == '/') {
        return VAR_0;
    }

    VAR_24 = VAR_16->connection->log;






    VAR_17 = FUNC_5(VAR_16, &VAR_21, &VAR_19, 0);
    if (VAR_17 == ((void*)0)) {
        return VAR_5;
    }

    VAR_21.len = VAR_17 - VAR_21.data;

    FUNC_13(VAR_12, VAR_24, 0,
                   "http filename: \"%s\"", VAR_21.data);

    VAR_28 = FUNC_4(VAR_16, VAR_15);

    FUNC_16(&VAR_27, sizeof(ngx_open_file_info_t));

    VAR_27.read_ahead = VAR_28->read_ahead;
    VAR_27.directio = VAR_28->directio;
    VAR_27.valid = VAR_28->open_file_cache_valid;
    VAR_27.min_uses = VAR_28->open_file_cache_min_uses;
    VAR_27.errors = VAR_28->open_file_cache_errors;
    VAR_27.events = VAR_28->open_file_cache_events;

    if (FUNC_9(VAR_16, VAR_28, &VAR_21, &VAR_27) != VAR_14) {
        return VAR_5;
    }

    if (FUNC_17(VAR_28->open_file_cache, &VAR_21, &VAR_27, VAR_16->pool)
        != VAR_14)
    {
        switch (VAR_27.err) {

        case 0:
            return VAR_5;

        case 129:
        case 128:
        case 130:

            VAR_23 = VAR_13;
            VAR_22 = VAR_8;
            break;

        case 133:





            VAR_23 = VAR_13;
            VAR_22 = VAR_2;
            break;

        default:

            VAR_23 = VAR_11;
            VAR_22 = VAR_5;
            break;
        }

        if (VAR_22 != VAR_8 || VAR_28->log_not_found) {
            FUNC_14(VAR_23, VAR_24, VAR_27.err,
                          "%s \"%s\" failed", VAR_27.failed, VAR_21.data);
        }

        return VAR_22;
    }

    VAR_16->root_tested = !VAR_16->error_page;

    FUNC_13(VAR_12, VAR_24, 0, "http static fd: %d", VAR_27.fd);

    if (VAR_27.is_dir) {

        FUNC_12(VAR_12, VAR_24, 0, "http dir");

        FUNC_2(VAR_16);

        VAR_16->headers_out.location = FUNC_11(&VAR_16->headers_out.headers);
        if (VAR_16->headers_out.location == ((void*)0)) {
            return VAR_5;
        }

        VAR_20 = VAR_16->uri.len + 1;

        if (!VAR_28->alias && VAR_28->root_lengths == ((void*)0) && VAR_16->args.len == 0) {
            VAR_18 = VAR_21.data + VAR_28->root.len;

            *VAR_17 = '/';

        } else {
            if (VAR_16->args.len) {
                VAR_20 += VAR_16->args.len + 1;
            }

            VAR_18 = FUNC_19(VAR_16->pool, VAR_20);
            if (VAR_18 == ((void*)0)) {
                FUNC_2(VAR_16);
                return VAR_5;
            }

            VAR_17 = FUNC_1(VAR_18, VAR_16->uri.data, VAR_16->uri.len);

            *VAR_17 = '/';

            if (VAR_16->args.len) {
                *++VAR_17 = '?';
                FUNC_15(++VAR_17, VAR_16->args.data, VAR_16->args.len);
            }
        }

        VAR_16->headers_out.location->hash = 1;
        FUNC_20(&VAR_16->headers_out.location->key, "Location");
        VAR_16->headers_out.location->value.len = VAR_20;
        VAR_16->headers_out.location->value.data = VAR_18;

        return VAR_6;
    }



    if (!VAR_27.is_file) {
        FUNC_14(VAR_11, VAR_24, 0,
                      "\"%s\" is not a regular file", VAR_21.data);

        return VAR_8;
    }



    if (VAR_16->method == VAR_10) {
        return VAR_7;
    }

    VAR_22 = FUNC_3(VAR_16);

    if (VAR_22 != VAR_14) {
        return VAR_22;
    }

    VAR_24->action = "sending response to client";

    VAR_16->headers_out.status = VAR_9;
    VAR_16->headers_out.content_length_n = VAR_27.size;
    VAR_16->headers_out.last_modified_time = VAR_27.mtime;

    if (FUNC_10(VAR_16) != VAR_14) {
        return VAR_5;
    }

    if (FUNC_8(VAR_16) != VAR_14) {
        return VAR_5;
    }

    if (VAR_16 != VAR_16->main && VAR_27.size == 0) {
        return FUNC_7(VAR_16);
    }

    VAR_16->allow_ranges = 1;



    VAR_25 = FUNC_0(VAR_16->pool);
    if (VAR_25 == ((void*)0)) {
        return VAR_5;
    }

    VAR_25->file = FUNC_18(VAR_16->pool, sizeof(ngx_file_t));
    if (VAR_25->file == ((void*)0)) {
        return VAR_5;
    }

    VAR_22 = FUNC_7(VAR_16);

    if (VAR_22 == VAR_1 || VAR_22 > VAR_14 || VAR_16->header_only) {
        return VAR_22;
    }

    VAR_25->file_pos = 0;
    VAR_25->file_last = VAR_27.size;

    VAR_25->in_file = VAR_25->file_last ? 1: 0;
    VAR_25->last_buf = (VAR_16 == VAR_16->main) ? 1: 0;
    VAR_25->last_in_chain = 1;

    VAR_25->file->fd = VAR_27.fd;
    VAR_25->file->name = VAR_21;
    VAR_25->file->log = VAR_24;
    VAR_25->file->directio = VAR_27.is_directio;

    VAR_26.buf = VAR_25;
    VAR_26.next = ((void*)0);

    return FUNC_6(VAR_16, &VAR_26);
}
