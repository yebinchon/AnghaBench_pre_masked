
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tls; } ;
struct vlc_h1_conn {TYPE_1__ conn; } ;


 int FUNC_0 (struct vlc_h1_conn*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void *FUNC_4(struct vlc_h1_conn *VAR_0)
{
    if (VAR_0->conn.tls != ((void*)0))
    {
        FUNC_1(FUNC_0(VAR_0), "connection failed");
        FUNC_3(VAR_0->conn.tls, 1);
        FUNC_2(VAR_0->conn.tls);
        VAR_0->conn.tls = ((void*)0);
    }
    return ((void*)0);
}
