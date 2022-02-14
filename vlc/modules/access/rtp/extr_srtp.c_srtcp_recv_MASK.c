
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int mac; } ;
struct TYPE_6__ {unsigned int tag_len; TYPE_1__ rtcp; } ;
typedef TYPE_2__ srtp_session_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int const*,size_t) ;
 int * FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (TYPE_2__*,int *,size_t) ;

int
FUNC_3 (srtp_session_t *VAR_2, uint8_t *VAR_3, size_t *VAR_4)
{
    size_t VAR_5 = *VAR_4;

    if (VAR_5 < (4u + VAR_2->tag_len))
        return VAR_1;
    VAR_5 -= VAR_2->tag_len;

    const uint8_t *VAR_6 = FUNC_1 (VAR_2->rtcp.mac, VAR_3, VAR_5);
    if (FUNC_0 (VAR_3 + VAR_5, VAR_6, VAR_2->tag_len))
         return VAR_0;

    VAR_5 -= 4;
    *VAR_4 = VAR_5;
    return FUNC_2 (VAR_2, VAR_3, VAR_5);
}
