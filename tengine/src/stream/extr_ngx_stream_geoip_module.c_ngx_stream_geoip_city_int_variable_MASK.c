
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int not_found; int valid; scalar_t__ no_cacheable; int * data; int * len; } ;
typedef TYPE_2__ ngx_stream_variable_value_t ;
struct TYPE_9__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_stream_session_t ;
typedef int ngx_int_t ;
struct TYPE_7__ {int pool; } ;
typedef int GeoIPRecord ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int *,char*,int) ;
 int * FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_stream_session_t *VAR_3,
    ngx_stream_variable_value_t *VAR_4, uintptr_t VAR_5)
{
    int VAR_6;
    GeoIPRecord *VAR_7;

    VAR_7 = FUNC_3(VAR_3);
    if (VAR_7 == ((void*)0)) {
        VAR_4->not_found = 1;
        return VAR_2;
    }

    VAR_4->data = FUNC_1(VAR_3->connection->pool, VAR_1);
    if (VAR_4->data == ((void*)0)) {
        FUNC_0(VAR_7);
        return VAR_0;
    }

    VAR_6 = *(int *) ((char *) VAR_7 + VAR_5);

    VAR_4->len = FUNC_2(VAR_4->data, "%d", VAR_6) - VAR_4->data;
    VAR_4->valid = 1;
    VAR_4->no_cacheable = 0;
    VAR_4->not_found = 0;

    FUNC_0(VAR_7);

    return VAR_2;
}
