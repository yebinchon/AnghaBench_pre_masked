
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int * hashed_data; int * hashed_data_len; } ;
struct TYPE_6__ {int timestamp; } ;
struct TYPE_8__ {TYPE_2__ v4; TYPE_1__ v3; } ;
struct TYPE_9__ {int version; size_t type; size_t public_key_algo; size_t digest_algo; TYPE_3__ specific; } ;
typedef TYPE_4__ signature_packet_t ;
typedef size_t i_len ;
typedef int gcry_md_hd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (size_t) ;
 int FUNC_3 (int ,size_t) ;
 scalar_t__ FUNC_4 (int ,size_t) ;
 int FUNC_5 (int ,int *,size_t) ;
 int * FUNC_6 (unsigned int) ;
 int FUNC_7 (int *,int *,unsigned int) ;
 size_t FUNC_8 (int *,int) ;

__attribute__((used)) static uint8_t *FUNC_9( gcry_md_hd_t VAR_0, signature_packet_t *VAR_1 )
{
    if( VAR_1->version == 3 )
    {
        FUNC_3( VAR_0, VAR_1->type );
        FUNC_5( VAR_0, &VAR_1->specific.v3.timestamp, 4 );
    }
    else if( VAR_1->version == 4 )
    {
        FUNC_3( VAR_0, VAR_1->version );
        FUNC_3( VAR_0, VAR_1->type );
        FUNC_3( VAR_0, VAR_1->public_key_algo );
        FUNC_3( VAR_0, VAR_1->digest_algo );
        FUNC_5( VAR_0, VAR_1->specific.v4.hashed_data_len, 2 );
        size_t VAR_2 = FUNC_8( VAR_1->specific.v4.hashed_data_len, 2 );
        FUNC_5( VAR_0, VAR_1->specific.v4.hashed_data, VAR_2 );

        FUNC_3( VAR_0, 0x04 );
        FUNC_3( VAR_0, 0xFF );

        VAR_2 += 6;

        FUNC_3( VAR_0, (VAR_2 >> 24) & 0xff );
        FUNC_3( VAR_0, (VAR_2 >> 16) & 0xff );
        FUNC_3( VAR_0, (VAR_2 >> 8) & 0xff );
        FUNC_3( VAR_0, (VAR_2) & 0xff );
    }
    else
    {
        return ((void*)0);
    }

    FUNC_1( VAR_0 );

    uint8_t *VAR_3 = (uint8_t*) FUNC_4( VAR_0, VAR_1->digest_algo) ;
    unsigned int VAR_4 = FUNC_2 (VAR_1->digest_algo);
    uint8_t *VAR_5 = FUNC_6(VAR_4);
    if( VAR_5 )
        FUNC_7(VAR_5, VAR_3, VAR_4);
    FUNC_0( VAR_0 );
    return VAR_5;
}
