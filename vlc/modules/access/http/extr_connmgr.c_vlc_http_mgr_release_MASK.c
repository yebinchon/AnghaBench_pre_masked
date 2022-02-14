
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_mgr {struct vlc_http_conn* conn; } ;
struct vlc_http_conn {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vlc_http_conn*) ;

__attribute__((used)) static void FUNC_2(struct vlc_http_mgr *VAR_0,
                                 struct vlc_http_conn *VAR_1)
{
    FUNC_0(VAR_0->conn == VAR_1);
    VAR_0->conn = ((void*)0);

    FUNC_1(VAR_1);
}
