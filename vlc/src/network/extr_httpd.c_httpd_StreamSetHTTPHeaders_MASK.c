
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t i_http_headers; int lock; TYPE_3__* p_http_headers; } ;
typedef TYPE_1__ httpd_stream_t ;
struct TYPE_8__ {int value; int name; } ;
typedef TYPE_2__ httpd_header ;
struct TYPE_9__ {struct TYPE_9__* value; struct TYPE_9__* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (size_t,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(httpd_stream_t * VAR_3,
                               const httpd_header *VAR_4, size_t VAR_5)
{
    if (!VAR_3)
        return VAR_0;

    FUNC_4(&VAR_3->lock);
    if (VAR_3->p_http_headers) {
        for (size_t VAR_6 = 0; VAR_6 < VAR_3->i_http_headers; VAR_6++) {
            FUNC_0(VAR_3->p_http_headers[VAR_6].name);
            FUNC_0(VAR_3->p_http_headers[VAR_6].value);
        }
        FUNC_0(VAR_3->p_http_headers);
        VAR_3->p_http_headers = ((void*)0);
        VAR_3->i_http_headers = 0;
    }

    if (!VAR_4 || !VAR_5) {
        FUNC_5(&VAR_3->lock);
        return VAR_2;
    }

    VAR_3->p_http_headers = FUNC_3(VAR_5, sizeof(httpd_header));
    if (!VAR_3->p_http_headers) {
        FUNC_5(&VAR_3->lock);
        return VAR_1;
    }

    size_t VAR_7 = 0;
    for (size_t VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        if (FUNC_2(!VAR_4[VAR_8].name || !VAR_4[VAR_8].value))
            continue;

        VAR_3->p_http_headers[VAR_7].name = FUNC_1(VAR_4[VAR_8].name);
        VAR_3->p_http_headers[VAR_7].value = FUNC_1(VAR_4[VAR_8].value);

        if (FUNC_2(!VAR_3->p_http_headers[VAR_7].name ||
                      !VAR_3->p_http_headers[VAR_7].value)) {
            FUNC_0(VAR_3->p_http_headers[VAR_7].name);
            FUNC_0(VAR_3->p_http_headers[VAR_7].value);
            break;
        }
        VAR_7++;
    }
    VAR_3->i_http_headers = VAR_7;
    FUNC_5(&VAR_3->lock);
    return VAR_2;
}
