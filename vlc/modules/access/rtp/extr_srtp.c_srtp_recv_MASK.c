
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_7__ {int mac; } ;
struct TYPE_8__ {int flags; size_t tag_len; int rtp_rcc; int rtp_roc; TYPE_1__ rtp; } ;
typedef TYPE_2__ srtp_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int const*,size_t) ;
 int FUNC_2 (scalar_t__*,int*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_2__*) ;
 int* FUNC_7 (int ,int*,size_t,scalar_t__) ;
 int FUNC_8 (int*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int*,size_t) ;

int
FUNC_11 (srtp_session_t *VAR_3, uint8_t *VAR_4, size_t *VAR_5)
{
    size_t VAR_6 = *VAR_5;
    if (VAR_6 < 12u)
        return VAR_1;

    if (!(VAR_3->flags & VAR_2))
    {
        size_t VAR_7 = VAR_3->tag_len, VAR_8 = 0;
        if (FUNC_6 (VAR_3))
        {
            if ((FUNC_8 (VAR_4) % VAR_3->rtp_rcc) == 0)
            {
                VAR_8 = 4;
                if (FUNC_6 (VAR_3) == 3)
                    VAR_7 = 0;
                else
                    VAR_7 -= 4;
            }
            else
            {
                if (FUNC_6 (VAR_3) & 1)
                    VAR_7 = 0;
            }
        }

        if (VAR_6 < (12u + VAR_8 + VAR_7))
            return VAR_1;
        VAR_6 -= VAR_8 + VAR_7;

        uint32_t VAR_9 = FUNC_9 (VAR_3, FUNC_8 (VAR_4)), VAR_10;
        if (VAR_8)
        {
            FUNC_0 (VAR_8 == 4);
            FUNC_2 (&VAR_10, VAR_4 + VAR_6, 4);
            VAR_10 = FUNC_3 (VAR_10);
        }
        else
            VAR_10 = VAR_9;

        const uint8_t *VAR_11 = FUNC_7 (VAR_3->rtp.mac, VAR_4, VAR_6, VAR_10);
        if (FUNC_1 (VAR_4 + VAR_6 + VAR_8, VAR_11, VAR_7))
            return VAR_0;

        if (VAR_8)
        {

            VAR_3->rtp_roc += VAR_10 - VAR_9;
            FUNC_0 (FUNC_9 (VAR_3, FUNC_8 (VAR_4)) == VAR_10);
        }
        *VAR_5 = VAR_6;
    }

    return FUNC_10 (VAR_3, VAR_4, VAR_6);
}
