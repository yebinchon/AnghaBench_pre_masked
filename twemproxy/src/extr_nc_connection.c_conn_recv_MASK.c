
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn {int recv_ready; size_t recv_bytes; int eof; int sd; scalar_t__ err; int send_bytes; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (char*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,void*,size_t) ;
 int FUNC_5 (scalar_t__) ;

ssize_t
FUNC_6(struct conn *VAR_8, void *VAR_9, size_t VAR_10)
{
    ssize_t VAR_11;

    FUNC_0(VAR_9 != ((void*)0));
    FUNC_0(VAR_10 > 0);
    FUNC_0(VAR_8->recv_ready);

    for (;;) {
        VAR_11 = FUNC_4(VAR_8->sd, VAR_9, VAR_10);

        FUNC_2(VAR_4, "recv on sd %d %zd of %zu", VAR_8->sd, VAR_11, VAR_10);

        if (VAR_11 > 0) {
            if (VAR_11 < (ssize_t) VAR_10) {
                VAR_8->recv_ready = 0;
            }
            VAR_8->recv_bytes += (size_t)VAR_11;
            return VAR_11;
        }

        if (VAR_11 == 0) {
            VAR_8->recv_ready = 0;
            VAR_8->eof = 1;
            FUNC_2(VAR_3, "recv on sd %d eof rb %zu sb %zu", VAR_8->sd,
                      VAR_8->recv_bytes, VAR_8->send_bytes);
            return VAR_11;
        }

        if (VAR_7 == VAR_1) {
            FUNC_2(VAR_4, "recv on sd %d not ready - eintr", VAR_8->sd);
            continue;
        } else if (VAR_7 == VAR_0 || VAR_7 == VAR_2) {
            VAR_8->recv_ready = 0;
            FUNC_2(VAR_4, "recv on sd %d not ready - eagain", VAR_8->sd);
            return VAR_5;
        } else {
            VAR_8->recv_ready = 0;
            VAR_8->err = VAR_7;
            FUNC_3("recv on sd %d failed: %s", VAR_8->sd, FUNC_5(VAR_7));
            return VAR_6;
        }
    }

    FUNC_1();

    return VAR_6;
}
