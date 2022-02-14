
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {unsigned int custom_uint; TYPE_1__* custom_object; } ;
struct TYPE_6__ {int tcp_oob_callback_object; int (* tcp_oob_callback ) (int ,int const*,unsigned int,int const*,int ) ;} ;
typedef int TCP_con ;
typedef TYPE_1__ TCP_Connections ;
typedef int TCP_Connection_to ;
typedef TYPE_2__ TCP_Client_Connection ;


 int FUNC_0 (TYPE_1__*,int const*) ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int * FUNC_2 (TYPE_1__*,unsigned int) ;
 int FUNC_3 (int ,int const*,unsigned int,int const*,int ) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (void*,int,int ,int const*,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2, uint16_t VAR_3)
{
    if (VAR_3 == 0)
        return -1;

    TCP_Client_Connection *VAR_4 = VAR_0;
    TCP_Connections *VAR_5 = VAR_4->custom_object;

    unsigned int VAR_6 = VAR_4->custom_uint;
    TCP_con *VAR_7 = FUNC_2(VAR_5, VAR_6);

    if (!VAR_7)
        return -1;


    int VAR_8 = FUNC_0(VAR_5, VAR_1);

    TCP_Connection_to *VAR_9 = FUNC_1(VAR_5, VAR_8);

    if (VAR_9 && FUNC_4(VAR_9, VAR_6)) {
        return FUNC_5(VAR_0, VAR_8, 0, VAR_2, VAR_3);
    } else {
        if (VAR_5->tcp_oob_callback)
            VAR_5->tcp_oob_callback(VAR_5->tcp_oob_callback_object, VAR_1, VAR_6, VAR_2, VAR_3);
    }

    return 0;
}
