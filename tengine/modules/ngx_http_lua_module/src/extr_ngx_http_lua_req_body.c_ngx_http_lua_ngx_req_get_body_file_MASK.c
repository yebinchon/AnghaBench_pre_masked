
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {TYPE_5__* request_body; } ;
typedef TYPE_6__ ngx_http_request_t ;
typedef int lua_State ;
struct TYPE_16__ {scalar_t__ pos; scalar_t__ end; int temporary; int memory; int in_file; } ;
struct TYPE_14__ {TYPE_4__* temp_file; TYPE_1__* bufs; } ;
struct TYPE_11__ {int len; scalar_t__ data; } ;
struct TYPE_12__ {TYPE_2__ name; int directio; } ;
struct TYPE_13__ {TYPE_3__ file; } ;
struct TYPE_10__ {TYPE_9__* buf; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (int *,TYPE_6__*) ;
 TYPE_6__* FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(lua_State *VAR_0)
{
    ngx_http_request_t *VAR_1;
    int VAR_2;

    VAR_2 = FUNC_2(VAR_0);

    if (VAR_2 != 0) {
        return FUNC_1(VAR_0, "expecting 0 arguments but seen %d", VAR_2);
    }

    VAR_1 = FUNC_7(VAR_0);
    if (VAR_1 == ((void*)0)) {
        return FUNC_1(VAR_0, "request object not found");
    }

    FUNC_6(VAR_0, VAR_1);

    if (VAR_1->request_body == ((void*)0) || VAR_1->request_body->temp_file == ((void*)0)) {
        FUNC_4(VAR_0);
        return 1;
    }

    FUNC_0("XXX file directio: %u, f:%u, m:%u, t:%u, end - pos %d, size %d",
       VAR_1->request_body->temp_file->file.directio,
       VAR_1->request_body->bufs->buf->in_file,
       VAR_1->request_body->bufs->buf->memory,
       VAR_1->request_body->bufs->buf->temporary,
       (int) (VAR_1->request_body->bufs->buf->end -
              VAR_1->request_body->bufs->buf->pos),
       (int) FUNC_5(VAR_1->request_body->bufs->buf));

    FUNC_3(VAR_0, (char *) VAR_1->request_body->temp_file->file.name.data,
                    VAR_1->request_body->temp_file->file.name.len);
    return 1;
}
