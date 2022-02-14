
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_tls {int dummy; } ;
struct vlc_http_conn {struct vlc_tls* tls; int * cbs; } ;
struct vlc_h2_conn {int next_id; int released; struct vlc_http_conn conn; int * out; int lock; int thread; void* send_cwnd; void* init_send_cwnd; int * streams; void* opaque; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vlc_h2_conn*) ;
 struct vlc_h2_conn* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ,struct vlc_h2_conn*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (struct vlc_h2_conn*,int ) ;
 int FUNC_5 () ;
 int * FUNC_6 (struct vlc_tls*,int) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct vlc_http_conn *FUNC_10(void *VAR_4, struct vlc_tls *VAR_5)
{
    struct vlc_h2_conn *VAR_6 = FUNC_1(sizeof (*VAR_6));
    if (FUNC_2(VAR_6 == ((void*)0)))
        return ((void*)0);

    VAR_6->conn.cbs = &VAR_2;
    VAR_6->conn.tls = VAR_5;
    VAR_6->out = FUNC_6(VAR_5, 1);
    VAR_6->opaque = VAR_4;
    VAR_6->streams = ((void*)0);
    VAR_6->next_id = 1;
    VAR_6->released = 0;
    VAR_6->init_send_cwnd = VAR_0;
    VAR_6->send_cwnd = VAR_0;

    if (FUNC_2(VAR_6->out == ((void*)0)))
        goto error;

    FUNC_9(&VAR_6->lock);

    if (FUNC_4(VAR_6, FUNC_5())
     || FUNC_3(&VAR_6->thread, VAR_3, VAR_6,
                  VAR_1))
    {
        FUNC_8(&VAR_6->lock);
        FUNC_7(VAR_6->out);
        goto error;
    }
    return &VAR_6->conn;
error:
    FUNC_0(VAR_6);
    return ((void*)0);
}
