
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int ngx_uint_t ;
struct TYPE_6__ {int allocated; TYPE_2__* request; scalar_t__ intel; void* free_mem; } ;
typedef TYPE_3__ ngx_http_gzip_ctx_t ;
struct TYPE_5__ {int pool; TYPE_1__* connection; } ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int,int,int,void*) ;
 int FUNC_1 (int ,int ,int ,char*,int,int) ;
 void* FUNC_2 (int ,int) ;

__attribute__((used)) static void *
FUNC_3(void *VAR_3, u_int VAR_4, u_int VAR_5)
{
    ngx_http_gzip_ctx_t *VAR_6 = VAR_3;

    void *VAR_7;
    ngx_uint_t VAR_8;

    VAR_8 = VAR_4 * VAR_5;

    if (VAR_4 == 1 && VAR_8 % 512 != 0 && VAR_8 < 8192) {






        VAR_8 = 8192;
    }

    if (VAR_8 <= VAR_6->allocated) {
        VAR_7 = VAR_6->free_mem;
        VAR_6->free_mem += VAR_8;
        VAR_6->allocated -= VAR_8;

        FUNC_0(VAR_1, VAR_6->request->connection->log, 0,
                       "gzip alloc: n:%ud s:%ud a:%ui p:%p",
                       VAR_4, VAR_5, VAR_8, VAR_7);

        return VAR_7;
    }

    if (VAR_6->intel) {
        FUNC_1(VAR_0, VAR_6->request->connection->log, 0,
                      "gzip filter failed to use preallocated memory: "
                      "%ud of %ui", VAR_4 * VAR_5, VAR_6->allocated);

    } else {
        VAR_2 = 1;
    }

    VAR_7 = FUNC_2(VAR_6->request->pool, VAR_4 * VAR_5);

    return VAR_7;
}
