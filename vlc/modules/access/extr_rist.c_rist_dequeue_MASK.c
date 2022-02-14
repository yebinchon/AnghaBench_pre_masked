
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef size_t uint16_t ;
struct rtp_pkt {TYPE_7__* buffer; scalar_t__ rtp_ts; } ;
struct rist_flow {size_t ri; size_t wi; scalar_t__ reset; scalar_t__ hi_timestamp; scalar_t__ rtp_latency; struct rtp_pkt* buffer; } ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_10__ {int b_flag_discontinuity; int i_lost_packets; } ;
typedef TYPE_2__ stream_sys_t ;
struct TYPE_11__ {int i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;
struct TYPE_12__ {int i_buffer; int p_buffer; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (TYPE_1__*,char*,size_t,size_t,size_t) ;

__attribute__((used)) static block_t *FUNC_4(stream_t *VAR_1, struct rist_flow *VAR_2)
{
    stream_sys_t *VAR_3 = VAR_1->p_sys;
    block_t *VAR_4 = ((void*)0);
    struct rtp_pkt *VAR_5;
    uint16_t VAR_6;
    if (VAR_2->ri == VAR_2->wi || VAR_2->reset > 0)
        return ((void*)0);

    VAR_6 = VAR_2->ri;
    bool VAR_7 = 0;
    uint16_t VAR_8 = 0;
    while(VAR_6++ != VAR_2->wi) {

        VAR_5 = &(VAR_2->buffer[VAR_6]);
        if (!VAR_5->buffer)
        {

            VAR_8++;




            continue;
        }



        if (VAR_2->hi_timestamp > (uint32_t)(VAR_5->rtp_ts + VAR_2->rtp_latency))
        {

            int VAR_9 = VAR_5->buffer->i_buffer - VAR_0;
            VAR_4 = FUNC_0(VAR_9);
            if (VAR_4)
            {
                VAR_4->i_buffer = VAR_9;
                FUNC_2(VAR_4->p_buffer, VAR_5->buffer->p_buffer + VAR_0, VAR_9);

                VAR_2->ri = VAR_6;

                VAR_7 = 1;
            }
            FUNC_1(VAR_5->buffer);
            VAR_5->buffer = ((void*)0);
            break;
        }

    }

    if (VAR_8 > 0 && VAR_7 == 1)
    {

        FUNC_3(VAR_1, "Packet NOT RECOVERED, %d packet(s), Window: [%d:%d]", VAR_8,
            VAR_2->ri, VAR_2->wi);
        VAR_3->i_lost_packets += VAR_8;
        VAR_3->b_flag_discontinuity = 1;
    }

    return VAR_4;
}
