
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int flags; unsigned int tag_len; int rtp_rcc; int rtp; int rtcp; } ;
typedef TYPE_1__ srtp_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 unsigned int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;

srtp_session_t *
FUNC_7 (int VAR_6, int VAR_7, unsigned VAR_8, int VAR_9, unsigned VAR_10)
{
    if ((VAR_10 & ~VAR_4))
        return ((void*)0);

    int VAR_11, VAR_12;
    switch (VAR_6)
    {
        case 128:
            VAR_11 = VAR_1;
            break;

        case 129:
            VAR_11 = VAR_0;
            break;

        default:
            return ((void*)0);
    }

    switch (VAR_7)
    {
        case 130:
            VAR_12 = VAR_2;
            break;

        case 131:
            VAR_12 = VAR_3;
            break;

        default:
            return ((void*)0);
    }

    if (VAR_8 > FUNC_1 (VAR_12))
        return ((void*)0);

    if (VAR_9 != VAR_5)
        return ((void*)0);

    srtp_session_t *VAR_13 = FUNC_2 (sizeof (*VAR_13));
    if (VAR_13 == ((void*)0))
        return ((void*)0);

    FUNC_3 (VAR_13, 0, sizeof (*VAR_13));
    VAR_13->flags = VAR_10;
    VAR_13->tag_len = VAR_8;
    VAR_13->rtp_rcc = 1;
    if (FUNC_6 (VAR_13))
    {
        if (VAR_8 < 4)
            goto error;
    }

    if (FUNC_4 (&VAR_13->rtp, VAR_11, VAR_12) == 0)
    {
        if (FUNC_4 (&VAR_13->rtcp, VAR_11, VAR_12) == 0)
            return VAR_13;
        FUNC_5 (&VAR_13->rtp);
    }

error:
    FUNC_0 (VAR_13);
    return ((void*)0);
}
