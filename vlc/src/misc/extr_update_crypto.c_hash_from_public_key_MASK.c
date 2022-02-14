
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_13__ {int version; scalar_t__ type; scalar_t__* hash_verification; int digest_algo; } ;
struct TYPE_9__ {int e; int n; } ;
struct TYPE_8__ {int y; int g; int q; int p; } ;
struct TYPE_10__ {TYPE_2__ rsa; TYPE_1__ dsa; } ;
struct TYPE_11__ {scalar_t__ algo; size_t version; scalar_t__* timestamp; TYPE_3__ sig; } ;
struct TYPE_12__ {scalar_t__* psz_username; TYPE_7__ sig; TYPE_4__ key; } ;
typedef TYPE_5__ public_key_t ;
typedef size_t i_len ;
typedef int gcry_md_hd_t ;
typedef scalar_t__ gcry_error_t ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,scalar_t__*,size_t) ;
 scalar_t__* FUNC_4 (int ,TYPE_7__*) ;
 size_t FUNC_5 (int ) ;
 size_t FUNC_6 (char*) ;

uint8_t *FUNC_7( public_key_t *VAR_4 )
{
    const uint8_t VAR_5 = VAR_4->key.algo;
    size_t VAR_6;
    size_t VAR_7, VAR_8, VAR_9, VAR_10;
    size_t VAR_11, VAR_12;

    if( VAR_4->sig.version != 4 )
        return ((void*)0);

    if( VAR_4->sig.type < VAR_2 ||
        VAR_4->sig.type > VAR_3 )
        return ((void*)0);

    if( VAR_4->psz_username == ((void*)0) )
        return ((void*)0);

    gcry_error_t VAR_13 = 0;
    gcry_md_hd_t VAR_14;

    if (VAR_5 == VAR_0) {
        VAR_7 = FUNC_5( VAR_4->key.sig.dsa.p );
        VAR_8 = FUNC_5( VAR_4->key.sig.dsa.g );
        VAR_9 = FUNC_5( VAR_4->key.sig.dsa.q );
        VAR_10 = FUNC_5( VAR_4->key.sig.dsa.y );

        VAR_6 = 6 + 2*4 + VAR_7 + VAR_8 + VAR_9 + VAR_10;
    } else if (VAR_5 == VAR_1) {
        VAR_11 = FUNC_5( VAR_4->key.sig.rsa.n );
        VAR_12 = FUNC_5( VAR_4->key.sig.rsa.e );

        VAR_6 = 6 + 2*2 + VAR_11 + VAR_12;
    } else
        return ((void*)0);

    VAR_13 = FUNC_1( &VAR_14, VAR_4->sig.digest_algo, 0 );
    if( VAR_13 )
        return ((void*)0);

    FUNC_2( VAR_14, 0x99 );

    FUNC_2( VAR_14, (VAR_6 >> 8) & 0xff );
    FUNC_2( VAR_14, VAR_6 & 0xff );

    FUNC_2( VAR_14, VAR_4->key.version );
    FUNC_3( VAR_14, VAR_4->key.timestamp, 4 );
    FUNC_2( VAR_14, VAR_4->key.algo );

    if (VAR_5 == VAR_0) {
        FUNC_3( VAR_14, (uint8_t*)&VAR_4->key.sig.dsa.p, 2 + VAR_7 );
        FUNC_3( VAR_14, (uint8_t*)&VAR_4->key.sig.dsa.q, 2 + VAR_9 );
        FUNC_3( VAR_14, (uint8_t*)&VAR_4->key.sig.dsa.g, 2 + VAR_8 );
        FUNC_3( VAR_14, (uint8_t*)&VAR_4->key.sig.dsa.y, 2 + VAR_10 );
    } else if (VAR_5 == VAR_1) {
        FUNC_3( VAR_14, (uint8_t*)&VAR_4->key.sig.rsa.n, 2 + VAR_11 );
        FUNC_3( VAR_14, (uint8_t*)&VAR_4->key.sig.rsa.e, 2 + VAR_12 );
    }

    FUNC_2( VAR_14, 0xb4 );

    size_t VAR_15 = FUNC_6((char*)VAR_4->psz_username);

    FUNC_2( VAR_14, (VAR_15 >> 24) & 0xff );
    FUNC_2( VAR_14, (VAR_15 >> 16) & 0xff );
    FUNC_2( VAR_14, (VAR_15 >> 8) & 0xff );
    FUNC_2( VAR_14, (VAR_15) & 0xff );

    FUNC_3( VAR_14, VAR_4->psz_username, VAR_15 );

    uint8_t *VAR_16 = FUNC_4( VAR_14, &VAR_4->sig );
    if( !VAR_16 ||
        VAR_16[0] != VAR_4->sig.hash_verification[0] ||
        VAR_16[1] != VAR_4->sig.hash_verification[1] )
    {
        FUNC_0(VAR_16);
        return ((void*)0);
    }

    return VAR_16;
}
