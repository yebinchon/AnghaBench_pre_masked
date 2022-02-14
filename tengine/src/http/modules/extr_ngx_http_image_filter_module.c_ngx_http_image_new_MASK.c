
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_http_request_t ;
typedef int * gdImagePtr ;
struct TYPE_4__ {int log; } ;


 int VAR_0 ;
 int * FUNC_0 (int,int) ;
 int * FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static gdImagePtr
FUNC_3(ngx_http_request_t *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    gdImagePtr VAR_5;

    if (VAR_4 == 0) {
        VAR_5 = FUNC_1(VAR_2, VAR_3);

        if (VAR_5 == ((void*)0)) {
            FUNC_2(VAR_0, VAR_1->connection->log, 0,
                          "gdImageCreateTrueColor() failed");
            return ((void*)0);
        }

    } else {
        VAR_5 = FUNC_0(VAR_2, VAR_3);

        if (VAR_5 == ((void*)0)) {
            FUNC_2(VAR_0, VAR_1->connection->log, 0,
                          "gdImageCreate() failed");
            return ((void*)0);
        }
    }

    return VAR_5;
}
