
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {unsigned int custom_uint; TYPE_1__* custom_object; } ;
struct TYPE_8__ {int id; } ;
struct TYPE_7__ {int tcp_data_callback_object; int (* tcp_data_callback ) (int ,int ,int const*,int ) ;} ;
typedef int TCP_con ;
typedef TYPE_1__ TCP_Connections ;
typedef TYPE_2__ TCP_Connection_to ;
typedef TYPE_3__ TCP_Client_Connection ;


 TYPE_2__* FUNC_0 (TYPE_1__*,int ) ;
 int * FUNC_1 (TYPE_1__*,unsigned int) ;
 int FUNC_2 (int ,int ,int const*,int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, uint32_t VAR_1, uint8_t VAR_2, const uint8_t *VAR_3, uint16_t VAR_4)
{

    if (VAR_4 == 0)
        return -1;

    TCP_Client_Connection *VAR_5 = VAR_0;
    TCP_Connections *VAR_6 = VAR_5->custom_object;

    unsigned int VAR_7 = VAR_5->custom_uint;
    TCP_con *VAR_8 = FUNC_1(VAR_6, VAR_7);

    if (!VAR_8)
        return -1;

    TCP_Connection_to *VAR_9 = FUNC_0(VAR_6, VAR_1);

    if (!VAR_9)
        return -1;

    if (VAR_6->tcp_data_callback)
        VAR_6->tcp_data_callback(VAR_6->tcp_data_callback_object, VAR_9->id, VAR_3, VAR_4);

    return 0;
}
