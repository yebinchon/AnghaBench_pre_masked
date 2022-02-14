
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_http_mgr {int * creds; int * conn; } ;


 int FUNC_0 (struct vlc_http_mgr*) ;
 int FUNC_1 (struct vlc_http_mgr*,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct vlc_http_mgr *VAR_0)
{
    if (VAR_0->conn != ((void*)0))
        FUNC_1(VAR_0, VAR_0->conn);
    if (VAR_0->creds != ((void*)0))
        FUNC_2(VAR_0->creds);
    FUNC_0(VAR_0);
}
