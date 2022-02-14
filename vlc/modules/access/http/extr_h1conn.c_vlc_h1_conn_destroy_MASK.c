
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tls; } ;
struct vlc_h1_conn {int released; TYPE_1__ conn; int active; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vlc_h1_conn*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct vlc_h1_conn *VAR_0)
{
    FUNC_0(!VAR_0->active);
    FUNC_0(VAR_0->released);

    if (VAR_0->conn.tls != ((void*)0))
    {
        FUNC_3(VAR_0->conn.tls, 1);
        FUNC_2(VAR_0->conn.tls);
    }
    FUNC_1(VAR_0);
}
