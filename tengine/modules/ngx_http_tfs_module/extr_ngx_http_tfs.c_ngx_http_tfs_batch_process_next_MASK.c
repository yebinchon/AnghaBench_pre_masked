
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_7__ {scalar_t__ sp_fail_count; int data; int sp_curr; int log; TYPE_1__* parent; scalar_t__ sp_ready; } ;
typedef TYPE_2__ ngx_http_tfs_t ;
struct TYPE_6__ {scalar_t__ sp_fail_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_4(ngx_http_tfs_t *VAR_4)
{
    if (VAR_4->sp_ready) {
        if (VAR_4->sp_fail_count > 0 || VAR_4->parent->sp_fail_count > 0) {
            FUNC_3(VAR_2, VAR_4->log, 0,
                          "(other) sub process failed");

            FUNC_0(VAR_4->data, VAR_4, VAR_0);
            return VAR_3;
        }

        FUNC_2(VAR_1, VAR_4->log, 0,
                       "segment[%uD] wake up, will output...",
                       VAR_4->sp_curr);
        FUNC_1(VAR_4->data, VAR_4);
    }

    return VAR_3;
}
