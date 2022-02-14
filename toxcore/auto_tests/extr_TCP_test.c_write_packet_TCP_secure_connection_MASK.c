
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct sec_TCP_con {int sock; int sent_nonce; int shared_key; } ;
typedef int packet ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,int,int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int ,int *,int,int ) ;

int FUNC_6(struct sec_TCP_con *VAR_1, uint8_t *VAR_2, uint16_t VAR_3)
{
    uint8_t VAR_4[sizeof(uint16_t) + VAR_3 + VAR_0];

    uint16_t VAR_5 = FUNC_2(VAR_3 + VAR_0);
    FUNC_4(VAR_4, &VAR_5, sizeof(uint16_t));
    int VAR_6 = FUNC_1(VAR_1->shared_key, VAR_1->sent_nonce, VAR_2, VAR_3, VAR_4 + sizeof(uint16_t));

    if ((unsigned int)VAR_6 != (sizeof(VAR_4) - sizeof(uint16_t)))
        return -1;

    FUNC_3(VAR_1->sent_nonce);

    FUNC_0(FUNC_5(VAR_1->sock, VAR_4, sizeof(VAR_4), 0) == sizeof(VAR_4), "send failed");
    return 0;
}
