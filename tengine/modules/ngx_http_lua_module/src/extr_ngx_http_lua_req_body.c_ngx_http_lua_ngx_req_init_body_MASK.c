
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


struct TYPE_15__ {int data; scalar_t__ len; } ;
struct TYPE_16__ {scalar_t__ fd; TYPE_1__ name; } ;
struct TYPE_18__ {TYPE_2__ file; } ;
typedef TYPE_4__ ngx_temp_file_t ;
struct TYPE_17__ {scalar_t__ content_length_n; } ;
struct TYPE_19__ {int request_body_in_file_only; int request_body_in_clean_file; int pool; TYPE_3__ headers_in; TYPE_6__* request_body; scalar_t__ discard_body; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_20__ {TYPE_13__* bufs; int * buf; TYPE_4__* temp_file; } ;
typedef TYPE_6__ ngx_http_request_body_t ;
struct TYPE_21__ {size_t client_body_buffer_size; } ;
typedef TYPE_7__ ngx_http_core_loc_conf_t ;
typedef int lua_State ;
typedef scalar_t__ lua_Integer ;
struct TYPE_14__ {int * next; int * buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 TYPE_13__* FUNC_4 (int ) ;
 int * FUNC_5 (int ,size_t) ;
 int VAR_1 ;
 TYPE_7__* FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_8 (int *) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (TYPE_4__*,int) ;

__attribute__((used)) static int
FUNC_11(lua_State *VAR_2)
{
    ngx_http_request_t *VAR_3;
    int VAR_4;
    ngx_http_request_body_t *VAR_5;
    size_t VAR_6;
    lua_Integer VAR_7;

    ngx_temp_file_t *VAR_8;

    ngx_http_core_loc_conf_t *VAR_9;

    VAR_4 = FUNC_3(VAR_2);

    if (VAR_4 != 1 && VAR_4 != 0) {
        return FUNC_2(VAR_2, "expecting 0 or 1 argument but seen %d", VAR_4);
    }

    VAR_3 = FUNC_8(VAR_2);
    if (VAR_3 == ((void*)0)) {
        return FUNC_2(VAR_2, "no request found");
    }

    FUNC_7(VAR_2, VAR_3);

    if (VAR_3->discard_body) {
        return FUNC_2(VAR_2, "request body already discarded asynchronously");
    }

    if (VAR_3->request_body == ((void*)0)) {
        return FUNC_2(VAR_2, "request body not read yet");
    }

    if (VAR_4 == 1) {
        VAR_7 = FUNC_1(VAR_2, 1);
        if (VAR_7 < 0) {
            return FUNC_2(VAR_2, "bad size argument: %d", (int) VAR_7);
        }

        VAR_6 = (size_t) VAR_7;

    } else {

        VAR_9 = FUNC_6(VAR_3, VAR_1);
        VAR_6 = VAR_9->client_body_buffer_size;
    }

    if (VAR_6 == 0) {
        VAR_3->request_body_in_file_only = 1;
    }

    VAR_5 = VAR_3->request_body;


    VAR_8 = VAR_5->temp_file;

    if (VAR_8) {
        if (VAR_8->file.fd != VAR_0) {

            FUNC_0("cleaning temp file %.*s", (int) VAR_8->file.name.len,
               VAR_8->file.name.data);

            FUNC_9(VAR_3->pool, VAR_8->file.fd);

            FUNC_10(VAR_8, sizeof(ngx_temp_file_t));

            VAR_8->file.fd = VAR_0;

            FUNC_0("temp file cleaned: %.*s", (int) VAR_8->file.name.len,
               VAR_8->file.name.data);
        }

        VAR_5->temp_file = ((void*)0);
    }


    VAR_3->request_body_in_clean_file = 1;

    VAR_3->headers_in.content_length_n = 0;

    VAR_5->buf = FUNC_5(VAR_3->pool, VAR_6);
    if (VAR_5->buf == ((void*)0)) {
        return FUNC_2(VAR_2, "no memory");
    }

    VAR_5->bufs = FUNC_4(VAR_3->pool);
    if (VAR_5->bufs == ((void*)0)) {
        return FUNC_2(VAR_2, "no memory");
    }

    VAR_5->bufs->buf = VAR_5->buf;
    VAR_5->bufs->next = ((void*)0);

    return 0;
}
