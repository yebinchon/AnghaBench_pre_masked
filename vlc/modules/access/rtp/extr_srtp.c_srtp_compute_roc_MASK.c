
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int rtp_seq; int rtp_roc; } ;
typedef TYPE_1__ srtp_session_t ;



__attribute__((used)) static uint32_t
FUNC_0 (const srtp_session_t *VAR_0, uint16_t VAR_1)
{
    uint32_t VAR_2 = VAR_0->rtp_roc;

    if (((VAR_1 - VAR_0->rtp_seq) & 0xffff) < 0x8000)
    {

        if (VAR_1 < VAR_0->rtp_seq)
            VAR_2++;
    }
    else
    {

        if (VAR_1 > VAR_0->rtp_seq)
            VAR_2--;
    }
    return VAR_2;
}
