
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int hashed_data_len; int timestamp; } ;
struct TYPE_6__ {TYPE_1__ v3; } ;
struct TYPE_7__ {int * hash_verification; int digest_algo; int public_key_algo; int issuer_longid; TYPE_2__ specific; int type; } ;
typedef TYPE_3__ signature_packet_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static size_t FUNC_2( signature_packet_t *VAR_0,
                                      const uint8_t *VAR_1, size_t VAR_2 )
{
    size_t VAR_3 = 1;

    if( VAR_2 < 19 )
        return 0;

    VAR_0->specific.v3.hashed_data_len = *VAR_1++; VAR_3++;
    if( VAR_0->specific.v3.hashed_data_len != 5 )
        return 0;

    VAR_0->type = *VAR_1++; VAR_3++;

    FUNC_1( VAR_0->specific.v3.timestamp, VAR_1, 4 );
    VAR_1 += 4; VAR_3 += 4;

    FUNC_1( VAR_0->issuer_longid, VAR_1, 8 );
    VAR_1 += 8; VAR_3 += 8;

    VAR_0->public_key_algo = *VAR_1++; VAR_3++;

    VAR_0->digest_algo = *VAR_1++; VAR_3++;

    VAR_0->hash_verification[0] = *VAR_1++; VAR_3++;
    VAR_0->hash_verification[1] = *VAR_1++; VAR_3++;

    FUNC_0( VAR_3 == 19 );

    return VAR_3;
}
