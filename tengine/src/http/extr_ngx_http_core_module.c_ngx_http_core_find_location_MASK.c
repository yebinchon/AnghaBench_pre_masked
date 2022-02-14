
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {char* data; scalar_t__ len; } ;
struct TYPE_12__ {int loc_conf; TYPE_5__ uri; TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_13__ {scalar_t__ noregex; int loc_conf; int regex; int name; struct TYPE_13__** regex_locations; int static_locations; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int VAR_6 ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,TYPE_5__*) ;
 int FUNC_4 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_http_core_loc_conf_t *VAR_9;
    VAR_9 = FUNC_2(VAR_7, VAR_6);






    VAR_8 = FUNC_1(VAR_7, VAR_9->static_locations);

    if (VAR_8 == VAR_0) {
        VAR_8 = FUNC_5(VAR_7);
    }

    if (VAR_8 == VAR_5 || VAR_8 == VAR_2) {
        return VAR_8;
    }
    return VAR_8;
}
