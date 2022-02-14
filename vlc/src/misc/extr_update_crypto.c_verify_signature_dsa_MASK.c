
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int * s; int * r; } ;
struct TYPE_12__ {TYPE_3__ dsa; } ;
struct TYPE_13__ {int digest_algo; TYPE_4__ algo_specific; } ;
typedef TYPE_5__ signature_packet_t ;
struct TYPE_9__ {int * y; int * g; int * q; int * p; } ;
struct TYPE_10__ {TYPE_1__ dsa; } ;
struct TYPE_14__ {TYPE_2__ sig; } ;
typedef TYPE_6__ public_key_packet_t ;
typedef int * gcry_sexp_t ;
typedef int * gcry_mpi_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int **,int ,int *,int,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int **,size_t*,char const*,int *,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7( signature_packet_t *VAR_3, public_key_packet_t *VAR_4,
                      uint8_t *VAR_5 )
{
    int VAR_6 = VAR_1;


    const char *VAR_7 = "(data(flags raw)(value %m))";

    const char *VAR_8 = "(public-key(dsa(p %m)(q %m)(g %m)(y %m)))";

    const char *VAR_9 = "(sig-val(dsa(r %m )(s %m )))";

    size_t VAR_10;
    gcry_mpi_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    VAR_11 = VAR_12 = VAR_13 = VAR_14 = VAR_15 = VAR_16 = VAR_17 = ((void*)0);
    gcry_sexp_t VAR_18, VAR_19, VAR_20;
    VAR_18 = VAR_19 = VAR_20 = ((void*)0);

    int VAR_21 = FUNC_6( VAR_4->sig.dsa.p );
    int VAR_22 = FUNC_6( VAR_4->sig.dsa.q );
    int VAR_23 = FUNC_6( VAR_4->sig.dsa.g );
    int VAR_24 = FUNC_6( VAR_4->sig.dsa.y );
    if( FUNC_2( &VAR_11, VAR_0, VAR_4->sig.dsa.p + 2, VAR_21, ((void*)0) ) ||
        FUNC_2( &VAR_12, VAR_0, VAR_4->sig.dsa.q + 2, VAR_22, ((void*)0) ) ||
        FUNC_2( &VAR_13, VAR_0, VAR_4->sig.dsa.g + 2, VAR_23, ((void*)0) ) ||
        FUNC_2( &VAR_14, VAR_0, VAR_4->sig.dsa.y + 2, VAR_24, ((void*)0) ) ||
        FUNC_4( &VAR_18, &VAR_10, VAR_8, VAR_11, VAR_12, VAR_13, VAR_14 ) )
        goto out;

    uint8_t *VAR_25 = VAR_3->algo_specific.dsa.r;
    uint8_t *VAR_26 = VAR_3->algo_specific.dsa.s;
    int VAR_27 = FUNC_6( VAR_25 );
    int VAR_28 = FUNC_6( VAR_26 );
    if( FUNC_2( &VAR_15, VAR_0, VAR_25 + 2, VAR_27, ((void*)0) ) ||
        FUNC_2( &VAR_16, VAR_0, VAR_26 + 2, VAR_28, ((void*)0) ) ||
        FUNC_4( &VAR_20, &VAR_10, VAR_9, VAR_15, VAR_16 ) )
        goto out;

    int VAR_29 = FUNC_0 (VAR_3->digest_algo);
    if (VAR_29 > VAR_22)
        VAR_29 = VAR_22;
    if( FUNC_2( &VAR_17, VAR_0, VAR_5, VAR_29, ((void*)0) ) ||
        FUNC_4( &VAR_19, &VAR_10, VAR_7, VAR_17 ) )
        goto out;

    if( FUNC_3( VAR_20, VAR_19, VAR_18 ) )
        goto out;

    VAR_6 = VAR_2;

out:
    if( VAR_11 ) FUNC_1( VAR_11 );
    if( VAR_12 ) FUNC_1( VAR_12 );
    if( VAR_13 ) FUNC_1( VAR_13 );
    if( VAR_14 ) FUNC_1( VAR_14 );
    if( VAR_15 ) FUNC_1( VAR_15 );
    if( VAR_16 ) FUNC_1( VAR_16 );
    if( VAR_17 ) FUNC_1( VAR_17 );
    if( VAR_18 ) FUNC_5( VAR_18 );
    if( VAR_20 ) FUNC_5( VAR_20 );
    if( VAR_19 ) FUNC_5( VAR_19 );

    return VAR_6;
}
