
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct sec_TCP_con {int recv_nonce; int shared_key; int sock; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,int ,int *,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int,int ) ;

int FUNC_4(struct sec_TCP_con *VAR_0, uint8_t *VAR_1, uint16_t VAR_2)
{
    int VAR_3;
    FUNC_0((VAR_3 = FUNC_3(VAR_0->sock, VAR_1, VAR_2, 0)) == VAR_2, "wrong len %i\n", VAR_3);
    FUNC_0((VAR_3 = FUNC_1(VAR_0->shared_key, VAR_0->recv_nonce, VAR_1 + 2, VAR_2 - 2, VAR_1)) != -1,
                  "Decrypt failed");
    FUNC_2(VAR_0->recv_nonce);
    return VAR_3;
}
