
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; int sin6_family; int member_0; } ;
struct sockaddr {int dummy; } ;
struct sec_TCP_con {int sock; int * recv_nonce; int shared_key; int * public_key; int * sent_nonce; } ;
typedef int sock_t ;
typedef int addr6_loopback ;
struct TYPE_4__ {int public_key; } ;
typedef TYPE_1__ TCP_Server ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,struct sockaddr*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int *,int *,int,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int *,int *,int *,int,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ) ;
 int VAR_11 ;
 struct sec_TCP_con* FUNC_9 (int) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *) ;
 int * VAR_12 ;
 size_t FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *,int,int ) ;
 int FUNC_15 (int ,int *,int,int ) ;
 int FUNC_16 (int ,int ,int ) ;

struct sec_TCP_con *FUNC_17(TCP_Server *VAR_13)
{
    struct sec_TCP_con *VAR_14 = FUNC_9(sizeof(struct sec_TCP_con));
    sock_t VAR_15 = FUNC_16(VAR_0, VAR_3, VAR_1);
    struct sockaddr_in6 VAR_16 = {0};
    VAR_16.sin6_family = VAR_0;
    VAR_16.sin6_port = FUNC_8(VAR_12[FUNC_12() % VAR_2]);
    VAR_16.sin6_addr = VAR_11;

    int VAR_17 = FUNC_2(VAR_15, (struct sockaddr *)&VAR_16, sizeof(VAR_16));
    FUNC_1(VAR_17 == 0, "Failed to connect to TCP relay server");

    uint8_t VAR_18[VAR_10];
    FUNC_3(VAR_14->public_key, VAR_18);
    FUNC_13(VAR_14->sent_nonce);

    uint8_t VAR_19[VAR_10];
    uint8_t VAR_20[VAR_5];
    FUNC_3(VAR_20, VAR_19);
    FUNC_10(VAR_20 + VAR_9, VAR_14->sent_nonce, VAR_8);
    uint8_t VAR_21[VAR_4];
    FUNC_10(VAR_21, VAR_14->public_key, VAR_9);
    FUNC_11(VAR_21 + VAR_9);

    VAR_17 = FUNC_6(VAR_13->public_key, VAR_18, VAR_21 + VAR_9, VAR_20,
                       VAR_5, VAR_21 + VAR_9 + VAR_8);
    FUNC_1(VAR_17 == VAR_4 - (VAR_9 + VAR_8),
                  "Encrypt failed.");
    FUNC_1(FUNC_15(VAR_15, VAR_21, VAR_4 - 1, 0) == VAR_4 - 1, "send Failed.");
    FUNC_5(VAR_13);
    FUNC_0(50);
    FUNC_1(FUNC_15(VAR_15, VAR_21 + (VAR_4 - 1), 1, 0) == 1, "send Failed.");
    FUNC_0(50);
    FUNC_5(VAR_13);
    uint8_t VAR_22[VAR_6];
    uint8_t VAR_23[VAR_5];
    FUNC_1(FUNC_14(VAR_15, VAR_22, VAR_6, 0) == VAR_6, "recv Failed.");
    VAR_17 = FUNC_4(VAR_13->public_key, VAR_18, VAR_22, VAR_22 + VAR_8,
                       VAR_6 - VAR_8, VAR_23);
    FUNC_1(VAR_17 == VAR_5, "Decrypt Failed.");
    FUNC_7(VAR_23, VAR_19, VAR_14->shared_key);
    FUNC_10(VAR_14->recv_nonce, VAR_23 + VAR_7, VAR_8);
    VAR_14->sock = VAR_15;
    return VAR_14;
}
