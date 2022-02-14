
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_h2_stream {size_t recv_cwnd; int recv_wait; struct vlc_h2_frame** recv_tailp; int id; int conn; scalar_t__ recv_end; } ;
struct vlc_h2_frame {struct vlc_h2_frame* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vlc_h2_frame*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vlc_h2_frame*,size_t*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct vlc_h2_stream*,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, struct vlc_h2_frame *VAR_3)
{
    struct vlc_h2_stream *VAR_4 = VAR_2;
    size_t VAR_5;

    if (VAR_4->recv_end)
    {
        FUNC_0(VAR_3);
        return FUNC_3(VAR_4->conn, VAR_4->id, VAR_1);
    }


    FUNC_2(VAR_3, &VAR_5);
    if (VAR_5 > VAR_4->recv_cwnd)
    {
        FUNC_0(VAR_3);
        return FUNC_4(VAR_4, VAR_0);
    }
    VAR_4->recv_cwnd -= VAR_5;

    *(VAR_4->recv_tailp) = VAR_3;
    VAR_4->recv_tailp = &VAR_3->next;
    FUNC_1(&VAR_4->recv_wait);
    return 0;
}
