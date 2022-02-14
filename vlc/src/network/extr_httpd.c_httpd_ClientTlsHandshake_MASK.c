
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int p_tls; } ;
typedef TYPE_1__ httpd_host_t ;
struct TYPE_6__ {int i_state; int sock; } ;
typedef TYPE_2__ httpd_client_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(httpd_host_t *VAR_4, httpd_client_t *VAR_5)
{
    switch (FUNC_0(VAR_4->p_tls, VAR_5->sock))
    {
        case -1: VAR_5->i_state = VAR_0; break;
        case 0: VAR_5->i_state = VAR_1; break;
        case 1: VAR_5->i_state = VAR_2; break;
        case 2: VAR_5->i_state = VAR_3; break;
    }
}
