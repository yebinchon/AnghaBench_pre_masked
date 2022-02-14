
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef char u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_8__ {char* data; scalar_t__ len; } ;
typedef TYPE_2__ ngx_str_t ;
typedef int ngx_cpuset_t ;
struct TYPE_9__ {int cpu_affinity_n; int cpu_affinity_auto; int * cpu_affinity; } ;
typedef TYPE_3__ ngx_core_conf_t ;
struct TYPE_10__ {TYPE_1__* args; int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {int nelts; TYPE_2__* elts; } ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,TYPE_4__*,int ,char*,...) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int VAR_5 ;
 int * FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    FUNC_2(VAR_4, VAR_6, 0,
                       "\"worker_cpu_affinity\" is not supported "
                       "on this platform, ignored");


    return VAR_2;
}
