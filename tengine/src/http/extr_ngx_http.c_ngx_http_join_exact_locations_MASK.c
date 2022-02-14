
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_queue_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {scalar_t__ inclusive; int line; int file_name; TYPE_3__* name; scalar_t__ exact; } ;
typedef TYPE_1__ ngx_http_location_queue_t ;
struct TYPE_6__ {int log; } ;
typedef TYPE_2__ ngx_conf_t ;
struct TYPE_7__ {scalar_t__ len; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_3__*,int ,int ) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_conf_t *VAR_3, ngx_queue_t *VAR_4)
{
    ngx_queue_t *VAR_5, *VAR_6;
    ngx_http_location_queue_t *VAR_7, *VAR_8;

    VAR_5 = FUNC_2(VAR_4);

    while (VAR_5 != FUNC_3(VAR_4)) {

        VAR_6 = FUNC_4(VAR_5);

        VAR_7 = (ngx_http_location_queue_t *) VAR_5;
        VAR_8 = (ngx_http_location_queue_t *) VAR_6;

        if (VAR_7->name->len == VAR_8->name->len
            && FUNC_0(VAR_7->name->data, VAR_8->name->data, VAR_8->name->len)
               == 0)
        {
            if ((VAR_7->exact && VAR_8->exact) || (VAR_7->inclusive && VAR_8->inclusive)) {
                FUNC_1(VAR_1, VAR_3->log, 0,
                              "duplicate location \"%V\" in %s:%ui",
                              VAR_8->name, VAR_8->file_name, VAR_8->line);

                return VAR_0;
            }

            VAR_7->inclusive = VAR_8->inclusive;

            FUNC_5(VAR_6);

            continue;
        }

        VAR_5 = FUNC_4(VAR_5);
    }

    return VAR_2;
}
