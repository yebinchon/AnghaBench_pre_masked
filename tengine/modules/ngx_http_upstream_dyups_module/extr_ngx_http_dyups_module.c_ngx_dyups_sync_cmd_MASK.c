
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef scalar_t__ ngx_uint_t ;
struct TYPE_14__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {int temporary; scalar_t__ last; scalar_t__ end; scalar_t__ pos; scalar_t__ start; } ;
typedef TYPE_2__ ngx_buf_t ;
struct TYPE_13__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_12__* VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_1__*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_pool_t *VAR_7, ngx_str_t *VAR_8, ngx_str_t *VAR_9,
    ngx_uint_t VAR_10)
{
    ngx_int_t VAR_11;
    ngx_buf_t VAR_12;
    ngx_str_t VAR_13;

    if (VAR_10 == VAR_1) {

        VAR_11 = FUNC_0(VAR_8, &VAR_13);

        FUNC_2(VAR_4, VAR_6->log, 0,
                       "[dyups] sync del: %V rv: %V rc: %i",
                       VAR_8, &VAR_13, VAR_11);

        if (VAR_11 != VAR_3) {
            return VAR_2;
        }

        return VAR_5;

    } else if (VAR_10 == VAR_0) {

        VAR_12.start = VAR_12.pos = VAR_9->data;
        VAR_12.end = VAR_12.last = VAR_9->data + VAR_9->len;
        VAR_12.temporary = 1;

        VAR_11 = FUNC_1(VAR_8, &VAR_12, &VAR_13);

        FUNC_2(VAR_4, VAR_6->log, 0,
                      "[dyups] sync add: %V rv: %V rc: %i",
                      VAR_8, &VAR_13, VAR_11);

        if (VAR_11 != VAR_3) {
            return VAR_2;
        }

        return VAR_5;
    }

    return VAR_2;
}
