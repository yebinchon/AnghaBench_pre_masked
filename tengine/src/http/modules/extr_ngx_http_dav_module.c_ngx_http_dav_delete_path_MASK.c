
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_10__ {int log; scalar_t__ alloc; int * data; void* spec_handler; int post_tree_handler; int pre_tree_handler; void* file_handler; int * init_handler; } ;
typedef TYPE_2__ ngx_tree_ctx_t ;
struct TYPE_11__ {int data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_9__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 char* VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 char* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ,int ,char*,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_http_request_t *VAR_10, ngx_str_t *VAR_11, ngx_uint_t VAR_12)
{
    char *VAR_13;
    ngx_tree_ctx_t VAR_14;

    if (VAR_12) {

        VAR_14.init_handler = ((void*)0);
        VAR_14.file_handler = VAR_8;
        VAR_14.pre_tree_handler = VAR_9;
        VAR_14.post_tree_handler = VAR_7;
        VAR_14.spec_handler = VAR_8;
        VAR_14.data = ((void*)0);
        VAR_14.alloc = 0;
        VAR_14.log = VAR_10->connection->log;



        if (FUNC_3(&VAR_14, VAR_11) != VAR_3) {
            return VAR_1;
        }

        if (FUNC_0(VAR_11->data) != VAR_0) {
            return VAR_3;
        }

        VAR_13 = VAR_4;

    } else {

        if (FUNC_1(VAR_11->data) != VAR_0) {
            return VAR_3;
        }

        VAR_13 = VAR_5;
    }

    return FUNC_2(VAR_10->connection->log, VAR_6,
                              VAR_2, VAR_13, VAR_11->data);
}
