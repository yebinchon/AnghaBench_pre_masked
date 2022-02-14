
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* hashed_data_len; int* hashed_data; int* unhashed_data_len; int* unhashed_data; } ;
struct TYPE_6__ {TYPE_1__ v4; } ;
struct TYPE_7__ {scalar_t__ public_key_algo; int* hash_verification; int issuer_longid; TYPE_2__ specific; int digest_algo; int type; } ;
typedef TYPE_3__ signature_packet_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int*,int const*,int) ;
 size_t FUNC_3 (int*,int) ;

__attribute__((used)) static size_t FUNC_4( signature_packet_t *VAR_3,
                                      const uint8_t *VAR_4, size_t VAR_5 )
{
    size_t VAR_6 = 1;

    if( VAR_5 < 10 )
        return 0;

    VAR_3->type = *VAR_4++; VAR_6++;

    VAR_3->public_key_algo = *VAR_4++; VAR_6++;
    if (VAR_3->public_key_algo != VAR_0 && VAR_3->public_key_algo != VAR_1 )
            return 0;

    VAR_3->digest_algo = *VAR_4++; VAR_6++;

    FUNC_2( VAR_3->specific.v4.hashed_data_len, VAR_4, 2 );
    VAR_4 += 2; VAR_6 += 2;

    size_t VAR_7 =
        FUNC_3( VAR_3->specific.v4.hashed_data_len, 2 );
    VAR_6 += VAR_7;
    if( VAR_6 + 4 > VAR_5 )
        return 0;

    VAR_3->specific.v4.hashed_data = (uint8_t*) FUNC_1( VAR_7 );
    if( !VAR_3->specific.v4.hashed_data )
        return 0;
    FUNC_2( VAR_3->specific.v4.hashed_data, VAR_4, VAR_7 );
    VAR_4 += VAR_7;

    FUNC_2( VAR_3->specific.v4.unhashed_data_len, VAR_4, 2 );
    VAR_4 += 2; VAR_6 += 2;

    size_t VAR_8 =
        FUNC_3( VAR_3->specific.v4.unhashed_data_len, 2 );
    VAR_6 += VAR_8;
    if( VAR_6 + 2 > VAR_5 )
        return 0;

    VAR_3->specific.v4.unhashed_data = (uint8_t*) FUNC_1( VAR_8 );
    if( !VAR_3->specific.v4.unhashed_data )
        return 0;

    FUNC_2( VAR_3->specific.v4.unhashed_data, VAR_4, VAR_8 );
    VAR_4 += VAR_8;

    FUNC_2( VAR_3->hash_verification, VAR_4, 2 );
    VAR_4 += 2; VAR_6 += 2;

    uint8_t *VAR_9, *VAR_10;
    VAR_9 = VAR_3->specific.v4.unhashed_data;
    VAR_10 = VAR_9 + FUNC_3( VAR_3->specific.v4.unhashed_data_len, 2 );

    for( ;; )
    {
        if( VAR_9 > VAR_10 )
            return 0;

        size_t VAR_11;
        if( *VAR_9 < 192 )
        {
            if( VAR_9 + 1 > VAR_10 )
                return 0;
            VAR_11 = *VAR_9++;
        }
        else if( *VAR_9 < 255 )
        {
            if( VAR_9 + 2 > VAR_10 )
                return 0;
            VAR_11 = (*VAR_9++ - 192) << 8;
            VAR_11 += *VAR_9++ + 192;
        }
        else
        {
            if( ++VAR_9 + 4 > VAR_10 )
                return 0;
            VAR_11 = FUNC_0(VAR_9);
            VAR_9 += 4;
        }

        if( *VAR_9 == VAR_2 )
        {
            if( VAR_9 + 9 > VAR_10 )
                return 0;

            FUNC_2( &VAR_3->issuer_longid, VAR_9+1, 8 );

            return VAR_6;
        }

        VAR_9 += VAR_11;
    }
}
