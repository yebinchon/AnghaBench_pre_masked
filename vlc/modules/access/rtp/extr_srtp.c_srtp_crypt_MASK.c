
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_5__ {int window; int salt; int cipher; } ;
struct TYPE_6__ {int rtp_seq; int rtp_roc; int flags; TYPE_1__ rtp; } ;
typedef TYPE_2__ srtp_session_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int*,int) ;
 scalar_t__ FUNC_4 (int ,int,int,int,int ,int*,size_t) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_7 (srtp_session_t *VAR_3, uint8_t *VAR_4, size_t VAR_5)
{
    FUNC_1 (VAR_3 != ((void*)0));
    FUNC_1 (VAR_5 >= 12u);

    if ((VAR_4[0] >> 6) != 2)
        return VAR_1;


    uint16_t VAR_6 = 12;
    VAR_6 += (VAR_4[0] & 0xf) * 4;

    if (VAR_4[0] & 0x10)
    {
        uint16_t VAR_7;

        VAR_6 += 4;
        if (VAR_5 < VAR_6)
            return VAR_1;

        FUNC_3 (&VAR_7, VAR_4 + VAR_6 - 2, 2);
        VAR_6 += FUNC_2 (VAR_7);
    }

    if (VAR_5 < VAR_6)
        return VAR_1;


    uint16_t VAR_8 = FUNC_5 (VAR_4);
    uint32_t VAR_9 = FUNC_6 (VAR_3, VAR_8), VAR_10;
    FUNC_3 (&VAR_10, VAR_4 + 8, 4);


    int16_t VAR_11 = VAR_8 - VAR_3->rtp_seq;
    if (VAR_11 > 0)
    {

        VAR_3->rtp.window = VAR_3->rtp.window << VAR_11;
        VAR_3->rtp.window |= FUNC_0(1);
        VAR_3->rtp_seq = VAR_8, VAR_3->rtp_roc = VAR_9;
    }
    else
    {

        VAR_11 = -VAR_11;
        if ((VAR_11 >= 64) || ((VAR_3->rtp.window >> VAR_11) & 1))
            return VAR_0;
        VAR_3->rtp.window |= FUNC_0(1) << VAR_11;
    }


    if (VAR_3->flags & VAR_2)
        return 0;

    if (FUNC_4 (VAR_3->rtp.cipher, VAR_10, VAR_9, VAR_8, VAR_3->rtp.salt,
                   VAR_4 + VAR_6, VAR_5 - VAR_6))
        return VAR_1;

    return 0;
}
