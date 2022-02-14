
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int nodes ;
struct TYPE_6__ {int name_length; int statusmessage_length; int onion_c; int net_crypto; int dht; int userstatus; int statusmessage; int name; int fr; } ;
typedef int Node_format ;
typedef TYPE_1__ Messenger ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (int ,int *,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (TYPE_1__ const*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (TYPE_1__ const*) ;
 unsigned int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int *,int,int *,unsigned int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (TYPE_1__ const*) ;
 int * FUNC_15 (int *,int,int ) ;

void FUNC_16(const Messenger *VAR_15, uint8_t *VAR_16)
{
    FUNC_8(VAR_16, 0, FUNC_9(VAR_15));

    uint32_t VAR_17;
    uint16_t VAR_18;
    uint32_t VAR_19 = sizeof(uint32_t);

    FUNC_8(VAR_16, 0, VAR_19);
    VAR_16 += VAR_19;
    FUNC_6(VAR_16, VAR_0);
    VAR_16 += VAR_19;




    VAR_17 = VAR_19 + VAR_13 + VAR_14;
    VAR_18 = VAR_5;
    VAR_16 = FUNC_15(VAR_16, VAR_17, VAR_18);
    *(uint32_t *)VAR_16 = FUNC_5(&(VAR_15->fr));
    FUNC_13(VAR_15->net_crypto, VAR_16 + VAR_19);
    VAR_16 += VAR_17;

    VAR_17 = FUNC_14(VAR_15);
    VAR_18 = VAR_3;
    VAR_16 = FUNC_15(VAR_16, VAR_17, VAR_18);
    FUNC_4(VAR_15, VAR_16);
    VAR_16 += VAR_17;

    VAR_17 = VAR_15->name_length;
    VAR_18 = VAR_4;
    VAR_16 = FUNC_15(VAR_16, VAR_17, VAR_18);
    FUNC_7(VAR_16, VAR_15->name, VAR_17);
    VAR_16 += VAR_17;

    VAR_17 = VAR_15->statusmessage_length;
    VAR_18 = VAR_8;
    VAR_16 = FUNC_15(VAR_16, VAR_17, VAR_18);
    FUNC_7(VAR_16, VAR_15->statusmessage, VAR_17);
    VAR_16 += VAR_17;

    VAR_17 = 1;
    VAR_18 = VAR_7;
    VAR_16 = FUNC_15(VAR_16, VAR_17, VAR_18);
    *VAR_16 = VAR_15->userstatus;
    VAR_16 += VAR_17;

    VAR_17 = FUNC_1(VAR_15->dht);
    VAR_18 = VAR_1;
    VAR_16 = FUNC_15(VAR_16, VAR_17, VAR_18);
    FUNC_0(VAR_15->dht, VAR_16);
    VAR_16 += VAR_17;

    Node_format VAR_20[VAR_11];
    VAR_18 = VAR_9;
    uint8_t *VAR_21 = VAR_16;
    VAR_16 = FUNC_15(VAR_21, 0, VAR_18);
    unsigned int VAR_22 = FUNC_3(VAR_15->net_crypto, VAR_20, VAR_11);
    int VAR_23 = FUNC_11(VAR_16, VAR_11 * FUNC_12(VAR_12), VAR_20, VAR_22);

    if (VAR_23 > 0) {
        VAR_17 = VAR_23;
        VAR_16 = FUNC_15(VAR_21, VAR_17, VAR_18);
        VAR_16 += VAR_17;
    }

    Node_format VAR_24[VAR_10];
    VAR_18 = VAR_6;
    VAR_21 = VAR_16;
    VAR_16 = FUNC_15(VAR_16, 0, VAR_18);
    FUNC_8(VAR_24, 0, sizeof(VAR_24));
    VAR_22 = FUNC_10(VAR_15->onion_c, VAR_24, VAR_10);
    VAR_23 = FUNC_11(VAR_16, VAR_10 * FUNC_12(VAR_12), VAR_24, VAR_22);

    if (VAR_23 > 0) {
        VAR_17 = VAR_23;
        VAR_16 = FUNC_15(VAR_21, VAR_17, VAR_18);
        VAR_16 += VAR_17;
    }

    FUNC_15(VAR_16, 0, VAR_2);
}
