
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int ngx_uint_t ;
struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_9__ {size_t sbrk_size; } ;
typedef TYPE_3__ ngx_http_degradation_main_conf_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ,int ,int ,char*,size_t) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

ngx_uint_t
FUNC_4(ngx_http_request_t *VAR_3)
{
    time_t VAR_4;
    ngx_uint_t VAR_5;
    static size_t VAR_6;
    static time_t VAR_7;
    ngx_http_degradation_main_conf_t *VAR_8;

    VAR_8 = FUNC_0(VAR_3, VAR_1);

    if (VAR_8->sbrk_size) {

        VAR_5 = 0;
        VAR_4 = FUNC_2();



        if (VAR_4 != VAR_7) {
            VAR_6 = (size_t) FUNC_3(0) - ((uintptr_t) VAR_2 & ~0x3FFFFF);
            VAR_7 = VAR_4;
            VAR_5 = 1;
        }



        if (VAR_6 >= VAR_8->sbrk_size) {
            if (VAR_5) {
                FUNC_1(VAR_0, VAR_3->connection->log, 0,
                              "degradation sbrk:%uzM",
                              VAR_6 / (1024 * 1024));
            }

            return 1;
        }
    }

    return 0;
}
