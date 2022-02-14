
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int log; } ;
typedef TYPE_1__ ngx_tree_ctx_t ;
struct TYPE_6__ {int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_int_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_tree_ctx_t *VAR_5, ngx_str_t *VAR_6)
{
    FUNC_2(VAR_1, VAR_5->log, 0,
                   "http delete file: \"%s\"", VAR_6->data);

    if (FUNC_0(VAR_6->data) == VAR_0) {



        (void) FUNC_1(VAR_5->log, VAR_4, 0, VAR_3,
                                  VAR_6->data);
    }

    return VAR_2;
}
