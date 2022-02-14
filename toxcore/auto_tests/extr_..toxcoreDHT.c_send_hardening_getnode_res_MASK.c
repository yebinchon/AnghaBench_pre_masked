
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int data ;
struct TYPE_8__ {int ip; } ;
struct TYPE_7__ {int net; int self_secret_key; int self_public_key; } ;
struct TYPE_6__ {TYPE_3__ ip_port; int public_key; } ;
typedef TYPE_1__ Node_format ;
typedef TYPE_2__ DHT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int ,int *,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int ,TYPE_3__,int *,int) ;

__attribute__((used)) static int FUNC_4(const DHT *VAR_4, const Node_format *VAR_5, const uint8_t *VAR_6,
                                      const uint8_t *VAR_7, uint16_t VAR_8)
{
    if (!FUNC_1(&VAR_5->ip_port.ip))
        return -1;

    uint8_t VAR_9[VAR_2];
    uint8_t VAR_10[1 + VAR_3 + VAR_8];
    VAR_10[0] = VAR_0;
    FUNC_2(VAR_10 + 1, VAR_6, VAR_3);
    FUNC_2(VAR_10 + 1 + VAR_3, VAR_7, VAR_8);
    int VAR_11 = FUNC_0(VAR_4->self_public_key, VAR_4->self_secret_key, VAR_9, VAR_5->public_key, VAR_10,
                             sizeof(VAR_10), VAR_1);

    if (VAR_11 == -1)
        return -1;

    return FUNC_3(VAR_4->net, VAR_5->ip_port, VAR_9, VAR_11);
}
