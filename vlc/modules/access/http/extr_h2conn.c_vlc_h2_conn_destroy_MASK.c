
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tls; } ;
struct vlc_h2_conn {TYPE_1__ conn; int out; int lock; int thread; int * streams; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vlc_h2_conn*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vlc_h2_conn*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(struct vlc_h2_conn *VAR_1)
{
    FUNC_0(VAR_1->streams == ((void*)0));

    FUNC_3(VAR_1, VAR_0);

    FUNC_2(VAR_1->thread);
    FUNC_5(VAR_1->thread, ((void*)0));
    FUNC_6(&VAR_1->lock);

    FUNC_4(VAR_1->out);
    FUNC_8(VAR_1->conn.tls, 1);

    FUNC_7(VAR_1->conn.tls);
    FUNC_1(VAR_1);
}
