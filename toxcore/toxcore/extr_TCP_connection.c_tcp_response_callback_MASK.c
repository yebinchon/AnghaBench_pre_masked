
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {unsigned int custom_uint; int * custom_object; } ;
struct TYPE_4__ {int connection; } ;
typedef TYPE_1__ TCP_con ;
typedef int TCP_Connections ;
typedef int TCP_Connection_to ;
typedef TYPE_2__ TCP_Client_Connection ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*) ;
 int * FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_1, uint8_t VAR_2, const uint8_t *VAR_3)
{
    TCP_Client_Connection *VAR_4 = VAR_1;
    TCP_Connections *VAR_5 = VAR_4->custom_object;

    unsigned int VAR_6 = VAR_4->custom_uint;
    TCP_con *VAR_7 = FUNC_2(VAR_5, VAR_6);

    if (!VAR_7)
        return -1;

    int VAR_8 = FUNC_0(VAR_5, VAR_3);

    if (VAR_8 == -1)
        return -1;

    TCP_Connection_to *VAR_9 = FUNC_1(VAR_5, VAR_8);

    if (VAR_9 == ((void*)0))
        return -1;

    if (FUNC_4(VAR_9, VAR_6, VAR_0, VAR_2) == -1)
        return -1;

    FUNC_3(VAR_7->connection, VAR_2, VAR_8);

    return 0;
}
