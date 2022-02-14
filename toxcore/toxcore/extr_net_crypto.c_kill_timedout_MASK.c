
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ status; scalar_t__ temp_packet_num_sent; } ;
struct TYPE_7__ {scalar_t__ crypto_connections_length; } ;
typedef TYPE_1__ Net_Crypto ;
typedef TYPE_2__ Crypto_Connection ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(Net_Crypto *VAR_6)
{
    uint32_t VAR_7;


    for (VAR_7 = 0; VAR_7 < VAR_6->crypto_connections_length; ++VAR_7) {
        Crypto_Connection *VAR_8 = FUNC_1(VAR_6, VAR_7);

        if (VAR_8 == 0)
            return;

        if (VAR_8->status == VAR_4)
            continue;

        if (VAR_8->status == VAR_0 || VAR_8->status == VAR_2
                || VAR_8->status == VAR_3) {
            if (VAR_8->temp_packet_num_sent < VAR_5)
                continue;

            FUNC_0(VAR_6, VAR_7);

        }

        if (VAR_8->status == VAR_1) {

        }
    }
}
