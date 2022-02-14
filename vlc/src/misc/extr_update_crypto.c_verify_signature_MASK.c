
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ public_key_algo; } ;
typedef TYPE_1__ signature_packet_t ;
typedef int public_key_packet_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;

int FUNC_2( signature_packet_t *VAR_3, public_key_packet_t *VAR_4,
                      uint8_t *VAR_5 )
{
    if (VAR_3->public_key_algo == VAR_0)
        return FUNC_0(VAR_3, VAR_4, VAR_5);
    else if (VAR_3->public_key_algo == VAR_1)
        return FUNC_1(VAR_3, VAR_4, VAR_5);
    else
        return VAR_2;
}
