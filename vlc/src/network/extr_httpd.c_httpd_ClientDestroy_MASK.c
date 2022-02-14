
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* p_buffer; int query; int answer; int sock; int node; } ;
typedef TYPE_1__ httpd_client_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(httpd_client_t *VAR_0)
{
    FUNC_2(&VAR_0->node);
    FUNC_3(VAR_0->sock);
    FUNC_1(&VAR_0->answer);
    FUNC_1(&VAR_0->query);

    FUNC_0(VAR_0->p_buffer);
    FUNC_0(VAR_0);
}
