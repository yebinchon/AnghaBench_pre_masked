
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int tcp_mutex; int tcp_c; } ;
typedef int Node_format ;
typedef TYPE_1__ Net_Crypto ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int ,int *,scalar_t__) ;

unsigned int FUNC_3(Net_Crypto *VAR_0, Node_format *VAR_1, uint16_t VAR_2)
{
    if (VAR_2 == 0)
        return 0;

    FUNC_0(&VAR_0->tcp_mutex);
    unsigned int VAR_3 = FUNC_2(VAR_0->tcp_c, VAR_1, VAR_2);
    FUNC_1(&VAR_0->tcp_mutex);

    return VAR_3;
}
