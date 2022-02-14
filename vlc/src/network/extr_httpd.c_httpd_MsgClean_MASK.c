
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t i_headers; TYPE_4__* p_body; TYPE_4__* p_headers; TYPE_4__* psz_args; TYPE_4__* psz_url; } ;
typedef TYPE_1__ httpd_message_t ;
struct TYPE_6__ {struct TYPE_6__* value; struct TYPE_6__* name; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(httpd_message_t *VAR_0)
{
    FUNC_0(VAR_0->psz_url);
    FUNC_0(VAR_0->psz_args);
    for (size_t VAR_1 = 0; VAR_1 < VAR_0->i_headers; VAR_1++) {
        FUNC_0(VAR_0->p_headers[VAR_1].name);
        FUNC_0(VAR_0->p_headers[VAR_1].value);
    }
    FUNC_0(VAR_0->p_headers);
    FUNC_0(VAR_0->p_body);
    FUNC_1(VAR_0);
}
