
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int tcp_onion_callback_object; int (* tcp_onion_callback ) (int ,int const*,int ) ;} ;
typedef TYPE_1__ TCP_Connections ;


 int FUNC_0 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const uint8_t *VAR_1, uint16_t VAR_2)
{
    TCP_Connections *VAR_3 = VAR_0;

    if (VAR_3->tcp_onion_callback)
        VAR_3->tcp_onion_callback(VAR_3->tcp_onion_callback_object, VAR_1, VAR_2);

    return 0;
}
