
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtp_pkt {int dummy; } ;
struct rist_flow {int reset; int fd_in; int fd_nack; int fd_rtcp_m; int * buffer; } ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (struct rist_flow*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct rist_flow *FUNC_3(void)
{
    struct rist_flow *VAR_1 = FUNC_0(1, sizeof(struct rist_flow));
    if (!VAR_1)
        return ((void*)0);

    VAR_1->reset = 1;
    VAR_1->buffer = FUNC_0(VAR_0, sizeof(struct rtp_pkt));

    if ( FUNC_2( VAR_1->buffer == ((void*)0) ) )
    {
        FUNC_1(VAR_1);
        return ((void*)0);
    }
    VAR_1->fd_in = -1;
    VAR_1->fd_nack = -1;
    VAR_1->fd_rtcp_m = -1;

    return VAR_1;
}
