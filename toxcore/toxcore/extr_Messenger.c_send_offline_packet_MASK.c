
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int packet ;
struct TYPE_3__ {int fr_c; int net_crypto; } ;
typedef TYPE_1__ Messenger ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_2(Messenger *VAR_1, int VAR_2)
{
    uint8_t VAR_3 = VAR_0;
    return FUNC_1(VAR_1->net_crypto, FUNC_0(VAR_1->fr_c, VAR_2), &VAR_3,
                             sizeof(VAR_3), 0) != -1;
}
