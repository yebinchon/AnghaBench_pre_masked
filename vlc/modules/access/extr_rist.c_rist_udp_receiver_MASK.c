
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ i_port; int psz_host; } ;
typedef TYPE_1__ vlc_url_t ;
struct rist_flow {int fd_in; int fd_rtcp_m; int fd_nack; struct rist_flow* buffer; int cname; } ;
struct TYPE_11__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ stream_t ;
struct TYPE_12__ {struct rist_flow* flow; } ;
typedef TYPE_3__ stream_sys_t ;


 int VAR_0 ;
 int FUNC_0 (struct rist_flow*) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*,int ,...) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__,int,int ) ;
 void* FUNC_4 (TYPE_2__*,int ,scalar_t__,int *,int ,int ) ;
 int FUNC_5 (int,int ) ;
 struct rist_flow* FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static struct rist_flow *FUNC_8(stream_t *VAR_1, vlc_url_t *VAR_2, bool VAR_3)
{
    stream_sys_t *VAR_4 = VAR_1->p_sys;
    FUNC_2( VAR_1, "Opening Rist Flow Receiver at %s:%d and %s:%d",
             VAR_2->psz_host, VAR_2->i_port,
             VAR_2->psz_host, VAR_2->i_port+1);

    VAR_4->flow = FUNC_6();
    if (!VAR_4->flow)
        return ((void*)0);

    VAR_4->flow->fd_in = FUNC_4(VAR_1, VAR_2->psz_host, VAR_2->i_port, ((void*)0),
                0, VAR_0);
    if (VAR_4->flow->fd_in < 0)
    {
        FUNC_1( VAR_1, "cannot open input socket" );
        goto fail;
    }

    if (VAR_3)
    {
        VAR_4->flow->fd_rtcp_m = FUNC_4(VAR_1, VAR_2->psz_host, VAR_2->i_port + 1,
            ((void*)0), 0, VAR_0);
        if (VAR_4->flow->fd_rtcp_m < 0)
        {
            FUNC_1( VAR_1, "cannot open multicast nack socket" );
            goto fail;
        }
        VAR_4->flow->fd_nack = FUNC_3(VAR_1, VAR_2->psz_host,
            VAR_2->i_port + 1, -1, VAR_0 );
    }
    else
    {
        VAR_4->flow->fd_nack = FUNC_4(VAR_1, VAR_2->psz_host, VAR_2->i_port + 1,
            ((void*)0), 0, VAR_0);
    }
    if (VAR_4->flow->fd_nack < 0)
    {
        FUNC_1( VAR_1, "cannot open nack socket" );
        goto fail;
    }

    FUNC_5(VAR_4->flow->fd_nack, VAR_4->flow->cname);
    FUNC_2(VAR_1, "our cname is %s", VAR_4->flow->cname);

    return VAR_4->flow;

fail:
    if (VAR_4->flow->fd_in != -1)
        FUNC_7(VAR_4->flow->fd_in);
    if (VAR_4->flow->fd_nack != -1)
        FUNC_7(VAR_4->flow->fd_nack);
    if (VAR_4->flow->fd_rtcp_m != -1)
        FUNC_7(VAR_4->flow->fd_rtcp_m);
    FUNC_0(VAR_4->flow->buffer);
    FUNC_0(VAR_4->flow);
    return ((void*)0);
}
