
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_8__ {int * pos; TYPE_2__* session; scalar_t__ ip; int skip; } ;
typedef TYPE_3__ ngx_stream_script_engine_t ;
struct TYPE_9__ {int len; } ;
typedef TYPE_4__ ngx_stream_script_copy_code_t ;
struct TYPE_7__ {TYPE_1__* connection; } ;
struct TYPE_6__ {int log; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int ,int ,int ,char*,int,int *) ;

void
FUNC_2(ngx_stream_script_engine_t *VAR_1)
{
    u_char *VAR_2;
    ngx_stream_script_copy_code_t *VAR_3;

    VAR_3 = (ngx_stream_script_copy_code_t *) VAR_1->ip;

    VAR_2 = VAR_1->pos;

    if (!VAR_1->skip) {
        VAR_1->pos = FUNC_0(VAR_2, VAR_1->ip + sizeof(ngx_stream_script_copy_code_t),
                          VAR_3->len);
    }

    VAR_1->ip += sizeof(ngx_stream_script_copy_code_t)
          + ((VAR_3->len + sizeof(uintptr_t) - 1) & ~(sizeof(uintptr_t) - 1));

    FUNC_1(VAR_0, VAR_1->session->connection->log, 0,
                   "stream script copy: \"%*s\"", VAR_1->pos - VAR_2, VAR_2);
}
