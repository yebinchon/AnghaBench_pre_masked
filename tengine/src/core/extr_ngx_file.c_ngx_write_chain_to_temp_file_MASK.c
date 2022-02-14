
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_7__ {scalar_t__ fd; int name; int log; } ;
struct TYPE_6__ {int pool; int offset; TYPE_3__ file; scalar_t__ thread_write; int warn; scalar_t__ log_level; int access; int clean; int persistent; int path; } ;
typedef TYPE_1__ ngx_temp_file_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_chain_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,char*,int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,int *,int ,int ) ;

ssize_t
FUNC_4(ngx_temp_file_t *VAR_2, ngx_chain_t *VAR_3)
{
    ngx_int_t VAR_4;

    if (VAR_2->file.fd == VAR_0) {
        VAR_4 = FUNC_0(&VAR_2->file, VAR_2->path, VAR_2->pool,
                                  VAR_2->persistent, VAR_2->clean, VAR_2->access);

        if (VAR_4 != VAR_1) {
            return VAR_4;
        }

        if (VAR_2->log_level) {
            FUNC_1(VAR_2->log_level, VAR_2->file.log, 0, "%s %V",
                          VAR_2->warn, &VAR_2->file.name);
        }
    }
    return FUNC_3(&VAR_2->file, VAR_3, VAR_2->offset, VAR_2->pool);
}
