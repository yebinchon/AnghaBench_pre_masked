
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_stream {int interrupted; int recv_wait; struct vlc_h2_conn* conn; } ;
struct vlc_h2_conn {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
    struct vlc_h2_stream *VAR_1 = VAR_0;
    struct vlc_h2_conn *VAR_2 = VAR_1->conn;

    FUNC_1(&VAR_2->lock);
    VAR_1->interrupted = 1;
    FUNC_0(&VAR_1->recv_wait);
    FUNC_2(&VAR_2->lock);
}
