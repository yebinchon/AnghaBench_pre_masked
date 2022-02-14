
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int ngx_uint_t ;
struct TYPE_24__ {int len; char* data; } ;
typedef TYPE_5__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_25__ {int deny; } ;
typedef TYPE_6__ ngx_http_access_rule_un_t ;
struct TYPE_26__ {int deny; int addr; int mask; } ;
typedef TYPE_7__ ngx_http_access_rule_t ;
struct TYPE_27__ {int deny; int addr; int mask; } ;
typedef TYPE_8__ ngx_http_access_rule6_t ;
struct TYPE_28__ {int * rules_un; int * rules6; int * rules; } ;
typedef TYPE_9__ ngx_http_access_loc_conf_t ;
struct TYPE_18__ {int pool; TYPE_1__* args; } ;
typedef TYPE_10__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_22__ {int addr; int mask; } ;
struct TYPE_21__ {int addr; int mask; } ;
struct TYPE_23__ {TYPE_3__ in6; TYPE_2__ in; } ;
struct TYPE_19__ {scalar_t__ family; TYPE_4__ u; } ;
typedef TYPE_11__ ngx_cidr_t ;
struct TYPE_20__ {TYPE_5__* elts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ,int,int) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_10__*,int ,char*,TYPE_5__*) ;
 int FUNC_3 (TYPE_11__*,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_11__*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_9, ngx_command_t *VAR_10, void *VAR_11)
{
    ngx_http_access_loc_conf_t *VAR_12 = VAR_11;

    ngx_int_t VAR_13;
    ngx_uint_t VAR_14;
    ngx_str_t *VAR_15;
    ngx_cidr_t VAR_16;
    ngx_http_access_rule_t *VAR_17;







    VAR_14 = 0;
    FUNC_3(&VAR_16, sizeof(ngx_cidr_t));

    VAR_15 = VAR_9->args->elts;

    if (VAR_15[1].len == 3 && FUNC_5(VAR_15[1].data, "all") == 0) {
        VAR_14 = 1;






    } else {
        VAR_13 = FUNC_4(&VAR_15[1], &VAR_16);

        if (VAR_13 == VAR_6) {
            FUNC_2(VAR_7, VAR_9, 0,
                         "invalid parameter \"%V\"", &VAR_15[1]);
            return VAR_3;
        }

        if (VAR_13 == VAR_5) {
            FUNC_2(VAR_8, VAR_9, 0,
                         "low address bits of %V are meaningless", &VAR_15[1]);
        }
    }

    if (VAR_16.family == VAR_0 || VAR_14) {

        if (VAR_12->rules == ((void*)0)) {
            VAR_12->rules = FUNC_0(VAR_9->pool, 4,
                                           sizeof(ngx_http_access_rule_t));
            if (VAR_12->rules == ((void*)0)) {
                return VAR_3;
            }
        }

        VAR_17 = FUNC_1(VAR_12->rules);
        if (VAR_17 == ((void*)0)) {
            return VAR_3;
        }

        VAR_17->mask = VAR_16.u.in.mask;
        VAR_17->addr = VAR_16.u.in.addr;
        VAR_17->deny = (VAR_15[0].data[0] == 'd') ? 1 : 0;
    }
    return VAR_4;
}
