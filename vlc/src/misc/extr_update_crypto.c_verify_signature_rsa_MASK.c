
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
struct TYPE_11__ {int * s; } ;
struct TYPE_12__ {TYPE_3__ rsa; } ;
struct TYPE_13__ {int digest_algo; TYPE_4__ algo_specific; } ;
typedef TYPE_5__ signature_packet_t ;
struct TYPE_9__ {int * e; int * n; } ;
struct TYPE_10__ {TYPE_1__ rsa; } ;
struct TYPE_14__ {TYPE_2__ sig; } ;
typedef TYPE_6__ public_key_packet_t ;
typedef int * gcry_sexp_t ;
typedef int * gcry_mpi_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,int ,int *,int,int *) ;
 scalar_t__ FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (int **,size_t*,char const*,int *,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int **,int,int *,int ) ;

__attribute__((used)) static int FUNC_7( signature_packet_t *VAR_3, public_key_packet_t *VAR_4,
                      uint8_t *VAR_5 )
{
    int VAR_6 = VAR_1;

    const char *VAR_7 = "(data(flags raw)(value %m))";

    const char *VAR_8 = "(public-key(rsa(n %m)(e %m)))";

    const char *VAR_9 = "(sig-val(rsa(s%m)))";

    size_t VAR_10;
    gcry_mpi_t VAR_11, VAR_12, VAR_13, VAR_14;
    VAR_11 = VAR_12 = VAR_13 = VAR_14 = ((void*)0);
    gcry_sexp_t VAR_15, VAR_16, VAR_17;
    VAR_15 = VAR_16 = VAR_17 = ((void*)0);

    int VAR_18 = FUNC_5( VAR_4->sig.rsa.n );
    int VAR_19 = FUNC_5( VAR_4->sig.rsa.e );
    if( FUNC_1( &VAR_11, VAR_0, VAR_4->sig.rsa.n + 2, VAR_18, ((void*)0) ) ||
        FUNC_1( &VAR_12, VAR_0, VAR_4->sig.rsa.e + 2, VAR_19, ((void*)0) ) ||
        FUNC_3( &VAR_15, &VAR_10, VAR_8, VAR_11, VAR_12 ) )
        goto out;

    uint8_t *VAR_20 = VAR_3->algo_specific.rsa.s;
    int VAR_21 = FUNC_5( VAR_20 );
    if( FUNC_1( &VAR_13, VAR_0, VAR_20 + 2, VAR_21, ((void*)0) ) ||
        FUNC_3( &VAR_17, &VAR_10, VAR_9, VAR_13 ) )
        goto out;

    if( FUNC_6 (&VAR_14, VAR_18, VAR_5, VAR_3->digest_algo) ||
        FUNC_3( &VAR_16, &VAR_10, VAR_7, VAR_14 ) )
        goto out;

    if( FUNC_2( VAR_17, VAR_16, VAR_15 ) )
        goto out;

    VAR_6 = VAR_2;

out:
    if( VAR_11 ) FUNC_0( VAR_11 );
    if( VAR_12 ) FUNC_0( VAR_12 );
    if( VAR_13 ) FUNC_0( VAR_13 );
    if( VAR_14 ) FUNC_0( VAR_14 );
    if( VAR_15 ) FUNC_4( VAR_15 );
    if( VAR_17 ) FUNC_4( VAR_17 );
    if( VAR_16 ) FUNC_4( VAR_16 );
    return VAR_6;
}
