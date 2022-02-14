
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_9__ {int * mirror; } ;
typedef TYPE_3__ ngx_http_mirror_loc_conf_t ;
struct TYPE_10__ {int pool; TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,char*) ;

__attribute__((used)) static char *
FUNC_3(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_http_mirror_loc_conf_t *VAR_6 = VAR_5;

    ngx_str_t *VAR_7, *VAR_8;

    VAR_7 = VAR_3->args->elts;

    if (FUNC_2(VAR_7[1].data, "off") == 0) {
        if (VAR_6->mirror != VAR_2) {
            return "is duplicate";
        }

        VAR_6->mirror = ((void*)0);
        return VAR_1;
    }

    if (VAR_6->mirror == ((void*)0)) {
        return "is duplicate";
    }

    if (VAR_6->mirror == VAR_2) {
        VAR_6->mirror = FUNC_0(VAR_3->pool, 4, sizeof(ngx_str_t));
        if (VAR_6->mirror == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_8 = FUNC_1(VAR_6->mirror);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_8 = VAR_7[1];

    return VAR_1;
}
