
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_queue_t ;
typedef int ngx_int_t ;
struct TYPE_5__ {TYPE_3__* inclusive; TYPE_3__* exact; } ;
typedef TYPE_2__ ngx_http_location_queue_t ;
struct TYPE_4__ {int len; int data; } ;
struct TYPE_6__ {scalar_t__ exact_match; TYPE_1__ name; scalar_t__ regex; scalar_t__ named; scalar_t__ noname; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(const ngx_queue_t *VAR_0, const ngx_queue_t *VAR_1)
{
    ngx_int_t VAR_2;
    ngx_http_core_loc_conf_t *VAR_3, *VAR_4;
    ngx_http_location_queue_t *VAR_5, *VAR_6;

    VAR_5 = (ngx_http_location_queue_t *) VAR_0;
    VAR_6 = (ngx_http_location_queue_t *) VAR_1;

    VAR_3 = VAR_5->exact ? VAR_5->exact : VAR_5->inclusive;
    VAR_4 = VAR_6->exact ? VAR_6->exact : VAR_6->inclusive;

    if (VAR_3->noname && !VAR_4->noname) {

        return 1;
    }

    if (!VAR_3->noname && VAR_4->noname) {

        return -1;
    }

    if (VAR_3->noname || VAR_4->noname) {

        return 0;
    }

    if (VAR_3->named && !VAR_4->named) {

        return 1;
    }

    if (!VAR_3->named && VAR_4->named) {

        return -1;
    }

    if (VAR_3->named && VAR_4->named) {
        return FUNC_2(VAR_3->name.data, VAR_4->name.data);
    }
    VAR_2 = FUNC_0(VAR_3->name.data, VAR_4->name.data,
                          FUNC_1(VAR_3->name.len, VAR_4->name.len) + 1);

    if (VAR_2 == 0 && !VAR_3->exact_match && VAR_4->exact_match) {

        return 1;
    }

    return VAR_2;
}
