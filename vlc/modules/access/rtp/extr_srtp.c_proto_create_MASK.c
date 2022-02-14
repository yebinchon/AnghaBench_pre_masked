
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cipher; int mac; } ;
typedef TYPE_1__ srtp_proto_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;

__attribute__((used)) static int FUNC_3 (srtp_proto_t *VAR_2, int VAR_3, int VAR_4)
{
    if (FUNC_1 (&VAR_2->cipher, VAR_3, VAR_0, 0) == 0)
    {
        if (FUNC_2 (&VAR_2->mac, VAR_4, VAR_1) == 0)
            return 0;
        FUNC_0 (VAR_2->cipher);
    }
    return -1;
}
