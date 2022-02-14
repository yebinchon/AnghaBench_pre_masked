
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int ngx_uint_t ;
typedef int ngx_queue_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_9__ {TYPE_3__* exact; TYPE_3__* inclusive; } ;
typedef TYPE_1__ ngx_http_location_queue_t ;
struct TYPE_10__ {TYPE_3__** named_locations; } ;
typedef TYPE_2__ ngx_http_core_srv_conf_t ;
struct TYPE_11__ {struct TYPE_11__** regex_locations; scalar_t__ noname; scalar_t__ named; scalar_t__ regex; int * locations; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_12__ {int pool; } ;
typedef TYPE_4__ ngx_conf_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__** FUNC_0 (int ,int) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_conf_t *VAR_3, ngx_http_core_srv_conf_t *VAR_4,
    ngx_http_core_loc_conf_t *VAR_5)
{
    ngx_uint_t VAR_6;
    ngx_queue_t *VAR_7, *VAR_8, *VAR_9, VAR_10;
    ngx_http_core_loc_conf_t *VAR_11;
    ngx_http_location_queue_t *VAR_12;
    ngx_http_core_loc_conf_t **VAR_13;





    VAR_8 = VAR_5->locations;

    if (VAR_8 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_4(VAR_8, VAR_2);

    VAR_9 = ((void*)0);
    VAR_6 = 0;





    for (VAR_7 = FUNC_1(VAR_8);
         VAR_7 != FUNC_3(VAR_8);
         VAR_7 = FUNC_2(VAR_7))
    {
        VAR_12 = (ngx_http_location_queue_t *) VAR_7;

        VAR_11 = VAR_12->exact ? VAR_12->exact : VAR_12->inclusive;

        if (FUNC_6(VAR_3, ((void*)0), VAR_11) != VAR_1) {
            return VAR_0;
        }
        if (VAR_11->named) {
            VAR_6++;

            if (VAR_9 == ((void*)0)) {
                VAR_9 = VAR_7;
            }

            continue;
        }

        if (VAR_11->noname) {
            break;
        }
    }

    if (VAR_7 != FUNC_3(VAR_8)) {
        FUNC_5(VAR_8, VAR_7, &VAR_10);
    }

    if (VAR_9) {
        VAR_13 = FUNC_0(VAR_3->pool,
                           (VAR_6 + 1) * sizeof(ngx_http_core_loc_conf_t *));
        if (VAR_13 == ((void*)0)) {
            return VAR_0;
        }

        VAR_4->named_locations = VAR_13;

        for (VAR_7 = VAR_9;
             VAR_7 != FUNC_3(VAR_8);
             VAR_7 = FUNC_2(VAR_7))
        {
            VAR_12 = (ngx_http_location_queue_t *) VAR_7;

            *(VAR_13++) = VAR_12->exact;
        }

        *VAR_13 = ((void*)0);

        FUNC_5(VAR_8, VAR_9, &VAR_10);
    }
    return VAR_1;
}
