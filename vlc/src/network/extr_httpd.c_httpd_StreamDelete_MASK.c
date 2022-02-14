
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t i_http_headers; struct TYPE_4__* p_buffer; struct TYPE_4__* p_header; struct TYPE_4__* psz_mime; int lock; struct TYPE_4__* p_http_headers; struct TYPE_4__* value; struct TYPE_4__* name; int url; } ;
typedef TYPE_1__ httpd_stream_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(httpd_stream_t *VAR_0)
{
    FUNC_1(VAR_0->url);
    for (size_t VAR_1 = 0; VAR_1 < VAR_0->i_http_headers; VAR_1++) {
        FUNC_0(VAR_0->p_http_headers[VAR_1].name);
        FUNC_0(VAR_0->p_http_headers[VAR_1].value);
    }
    FUNC_0(VAR_0->p_http_headers);
    FUNC_2(&VAR_0->lock);
    FUNC_0(VAR_0->psz_mime);
    FUNC_0(VAR_0->p_header);
    FUNC_0(VAR_0->p_buffer);
    FUNC_0(VAR_0);
}
