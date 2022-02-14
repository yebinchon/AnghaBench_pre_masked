
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct conn {int sd; scalar_t__ authenticated; scalar_t__ redis; scalar_t__ done; scalar_t__ eof; scalar_t__ connected; scalar_t__ connecting; scalar_t__ proxy; scalar_t__ client; scalar_t__ send_ready; scalar_t__ send_active; scalar_t__ recv_ready; scalar_t__ recv_active; scalar_t__ err; scalar_t__ events; scalar_t__ recv_bytes; scalar_t__ send_bytes; int * smsg; int * rmsg; int omsg_q; int imsg_q; int * owner; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct conn* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct conn*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct conn* FUNC_5 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static struct conn *
FUNC_6(void)
{
    struct conn *VAR_5;

    if (!FUNC_1(&VAR_1)) {
        FUNC_0(VAR_3 > 0);

        VAR_5 = FUNC_2(&VAR_1);
        VAR_3--;
        FUNC_4(&VAR_1, VAR_5, VAR_0);
    } else {
        VAR_5 = FUNC_5(sizeof(*VAR_5));
        if (VAR_5 == ((void*)0)) {
            return ((void*)0);
        }
    }

    VAR_5->owner = ((void*)0);

    VAR_5->sd = -1;


    FUNC_3(&VAR_5->imsg_q);
    FUNC_3(&VAR_5->omsg_q);
    VAR_5->rmsg = ((void*)0);
    VAR_5->smsg = ((void*)0);







    VAR_5->send_bytes = 0;
    VAR_5->recv_bytes = 0;

    VAR_5->events = 0;
    VAR_5->err = 0;
    VAR_5->recv_active = 0;
    VAR_5->recv_ready = 0;
    VAR_5->send_active = 0;
    VAR_5->send_ready = 0;

    VAR_5->client = 0;
    VAR_5->proxy = 0;
    VAR_5->connecting = 0;
    VAR_5->connected = 0;
    VAR_5->eof = 0;
    VAR_5->done = 0;
    VAR_5->redis = 0;
    VAR_5->authenticated = 0;

    VAR_4++;
    VAR_2++;

    return VAR_5;
}
