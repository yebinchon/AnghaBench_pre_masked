
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int * unhashed_data; int * hashed_data; } ;
struct TYPE_14__ {TYPE_4__ v4; } ;
struct TYPE_11__ {int s; } ;
struct TYPE_10__ {int s; int r; } ;
struct TYPE_12__ {TYPE_2__ rsa; TYPE_1__ dsa; } ;
struct TYPE_15__ {int version; scalar_t__ public_key_algo; int type; TYPE_5__ specific; TYPE_3__ algo_specific; } ;
typedef TYPE_6__ signature_packet_t ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (int ,int) ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 size_t FUNC_3 (TYPE_6__*,int const*,size_t) ;
 size_t FUNC_4 (TYPE_6__*,int const*,size_t) ;

__attribute__((used)) static int FUNC_5( signature_packet_t *VAR_4,
                                   const uint8_t *VAR_5, size_t VAR_6 )
{
    if( !VAR_6 )
        return VAR_2;

    VAR_4->version = *VAR_5++;

    size_t VAR_7;
    switch( VAR_4->version )
    {
        case 3:
            VAR_7 = FUNC_3( VAR_4, VAR_5, VAR_6 );
            break;
        case 4:
            VAR_4->specific.v4.hashed_data = ((void*)0);
            VAR_4->specific.v4.unhashed_data = ((void*)0);
            VAR_7 = FUNC_4( VAR_4, VAR_5, VAR_6 );
            break;
        default:
            return VAR_2;
    }

    if( VAR_7 == 0 )
        goto error;

    if( VAR_4->public_key_algo != VAR_0 && VAR_4->public_key_algo != VAR_1 )
        goto error;

    switch( VAR_4->type )
    {
        case 133:
        case 128:
        case 131:
        case 130:
        case 132:
        case 129:
            break;
        default:
            goto error;
    }

    VAR_5--;
    VAR_5 += VAR_7;

    if( VAR_4->public_key_algo == VAR_0 ) {
        FUNC_0(VAR_4->algo_specific.dsa.r, 256);
        FUNC_0(VAR_4->algo_specific.dsa.s, 256);
    } else if ( VAR_4->public_key_algo == VAR_1 ) {
        FUNC_0(VAR_4->algo_specific.rsa.s, 4096);
    } else
        goto error;

    FUNC_1( VAR_7 == VAR_6 );
    if( VAR_7 < VAR_6 )
        goto error;

    return VAR_3;

error:

    if( VAR_4->version == 4 )
    {
        FUNC_2( VAR_4->specific.v4.hashed_data );
        FUNC_2( VAR_4->specific.v4.unhashed_data );
    }

    return VAR_2;
}
