
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int window; int salt; } ;
struct TYPE_5__ {int window; int cipher; } ;
struct TYPE_7__ {int flags; int rtcp_index; TYPE_2__ rtp; TYPE_1__ rtcp; } ;
typedef TYPE_3__ srtp_session_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int,int,int ,int*,size_t) ;

__attribute__((used)) static int FUNC_5 (srtp_session_t *VAR_3, uint8_t *VAR_4, size_t VAR_5)
{
    FUNC_1 (VAR_3 != ((void*)0));


    if ((VAR_5 < 12) || ((VAR_4[0] >> 6) != 2))
        return VAR_1;

    uint32_t VAR_6;
    FUNC_2 (&VAR_6, VAR_4 + VAR_5, 4);
    VAR_6 = FUNC_3 (VAR_6);
    if (((VAR_6 >> 31) != 0) != ((VAR_3->flags & VAR_2) == 0))
        return VAR_1;

    VAR_6 &= ~(1 << 31);


    int32_t VAR_7 = VAR_6 - VAR_3->rtcp_index;
    if (VAR_7 > 0)
    {

        VAR_3->rtcp.window = VAR_3->rtcp.window << VAR_7;
        VAR_3->rtcp.window |= FUNC_0(1);
        VAR_3->rtcp_index = VAR_6;
    }
    else
    {

        VAR_7 = -VAR_7;
        if ((VAR_7 >= 64) || ((VAR_3->rtcp.window >> VAR_7) & 1))
            return VAR_0;
        VAR_3->rtp.window |= FUNC_0(1) << VAR_7;
    }


    if (VAR_3->flags & VAR_2)
        return 0;

    uint32_t VAR_8;
    FUNC_2 (&VAR_8, VAR_4 + 4, 4);

    if (FUNC_4 (VAR_3->rtcp.cipher, VAR_8, VAR_6, VAR_3->rtp.salt,
                    VAR_4 + 8, VAR_5 - 8))
        return VAR_1;
    return 0;
}
