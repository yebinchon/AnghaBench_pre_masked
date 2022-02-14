
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int test_id ;
struct TYPE_19__ {int port; } ;
struct TYPE_16__ {TYPE_9__ ip_port; } ;
struct TYPE_15__ {TYPE_9__ ip_port; } ;
struct TYPE_18__ {TYPE_3__ assoc4; TYPE_2__ assoc6; int public_key; } ;
struct TYPE_14__ {scalar_t__ family; } ;
struct TYPE_17__ {int port; TYPE_1__ ip; } ;
typedef TYPE_4__ IP_Port ;
typedef int DHT ;
typedef TYPE_5__ Client_data ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_4__,int*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_5__*,int,int*) ;
 int VAR_2 ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (TYPE_4__*,TYPE_9__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_9__*) ;
 int FUNC_6 () ;
 int FUNC_7 (int*,int) ;

void FUNC_8(DHT *VAR_3,
                             Client_data *VAR_4,
                             uint32_t VAR_5,
                             IP_Port *VAR_6)
{
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    IP_Port VAR_12;
    uint8_t VAR_13[VAR_2];
    uint8_t VAR_14 = VAR_6->ip.family == VAR_0 ? 1 : 0;


    VAR_8 = FUNC_6() % VAR_5;
    FUNC_4(&VAR_12, VAR_14 ? &VAR_4[VAR_8].assoc6.ip_port : &VAR_4[VAR_8].assoc4.ip_port);

    FUNC_7(VAR_13, sizeof(VAR_13));
    VAR_7 = FUNC_0(VAR_3, VAR_12, VAR_13);
    FUNC_1(VAR_7 >= 1, "Wrong number of added clients");

    VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_13);
    FUNC_1(VAR_11 >= 0, "Client id is not in the list");
    FUNC_1(FUNC_5(&VAR_12, VAR_14 ? &VAR_4[VAR_11].assoc6.ip_port : &VAR_4[VAR_11].assoc4.ip_port),
                  "Client IP_Port is incorrect");


    VAR_8 = FUNC_6() % VAR_5;
    VAR_12.port = FUNC_6() % VAR_1;
    FUNC_3(VAR_13, VAR_4[VAR_8].public_key);

    VAR_7 = FUNC_0(VAR_3, VAR_12, VAR_13);
    FUNC_1(VAR_7 >= 1, "Wrong number of added clients");

    FUNC_1(FUNC_2(VAR_4, VAR_5, VAR_13) == VAR_8, "Client id is not in the list");
    FUNC_1(FUNC_5(&VAR_12, VAR_14 ? &VAR_4[VAR_8].assoc6.ip_port : &VAR_4[VAR_8].assoc4.ip_port),
                  "Client IP_Port is incorrect");


    VAR_9 = FUNC_6() % (VAR_5 / 2);
    VAR_10 = FUNC_6() % (VAR_5 / 2) + VAR_5 / 2;

    FUNC_4(&VAR_12, VAR_14 ? &VAR_4[VAR_9].assoc6.ip_port : &VAR_4[VAR_9].assoc4.ip_port);
    FUNC_3(VAR_13, VAR_4[VAR_10].public_key);

    if (VAR_14) VAR_4[VAR_10].assoc6.ip_port.port = -1;
    else VAR_4[VAR_10].assoc4.ip_port.port = -1;

    VAR_7 = FUNC_0(VAR_3, VAR_12, VAR_13);
    FUNC_1(VAR_7 >= 1, "Wrong number of added clients");
    FUNC_1(FUNC_2(VAR_4, VAR_5, VAR_13) == VAR_10, "Client id is not in the list");
    FUNC_1(FUNC_5(&VAR_12, VAR_14 ? &VAR_4[VAR_10].assoc6.ip_port : &VAR_4[VAR_10].assoc4.ip_port),
                  "Client IP_Port is incorrect");


    VAR_9 = FUNC_6() % (VAR_5 / 2);
    VAR_10 = FUNC_6() % (VAR_5 / 2) + VAR_5 / 2;

    FUNC_4(&VAR_12, VAR_14 ? &VAR_4[VAR_10].assoc6.ip_port : &VAR_4[VAR_10].assoc4.ip_port);
    FUNC_3(VAR_13, VAR_4[VAR_9].public_key);

    if (VAR_14) VAR_4[VAR_9].assoc6.ip_port.port = -1;
    else VAR_4[VAR_9].assoc4.ip_port.port = -1;

    VAR_7 = FUNC_0(VAR_3, VAR_12, VAR_13);
    FUNC_1(VAR_7 >= 1, "Wrong number of added clients");
    FUNC_1(FUNC_2(VAR_4, VAR_5, VAR_13) == VAR_9, "Client id is not in the list");
    FUNC_1(FUNC_5(&VAR_12, VAR_14 ? &VAR_4[VAR_9].assoc6.ip_port : &VAR_4[VAR_9].assoc4.ip_port),
                  "Client IP_Port is incorrect");
}
