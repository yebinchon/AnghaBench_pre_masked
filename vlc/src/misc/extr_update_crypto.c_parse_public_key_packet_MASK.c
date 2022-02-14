
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int e; int n; } ;
struct TYPE_6__ {int y; int g; int q; int p; } ;
struct TYPE_8__ {TYPE_2__ rsa; TYPE_1__ dsa; } ;
struct TYPE_9__ {int version; scalar_t__ algo; TYPE_3__ sig; int timestamp; } ;
typedef TYPE_4__ public_key_packet_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int const*,int) ;

__attribute__((used)) static int FUNC_2( public_key_packet_t *VAR_4,
                                    const uint8_t *VAR_5, size_t VAR_6 )
{
    if( VAR_6 < 6 )
        return VAR_2;

    size_t VAR_7 = 0;

    VAR_4->version = *VAR_5++; VAR_7++;
    if( VAR_4->version != 4 )
        return VAR_2;


    FUNC_1( VAR_4->timestamp, VAR_5, 4 ); VAR_5 += 4; VAR_7 += 4;

    VAR_4->algo = *VAR_5++; VAR_7++;
    if( VAR_4->algo == VAR_0 ) {
        FUNC_0(VAR_4->sig.dsa.p, 3072);
        FUNC_0(VAR_4->sig.dsa.q, 256);
        FUNC_0(VAR_4->sig.dsa.g, 3072);
        FUNC_0(VAR_4->sig.dsa.y, 3072);
    } else if ( VAR_4->algo == VAR_1 ) {
        FUNC_0(VAR_4->sig.rsa.n, 4096);
        FUNC_0(VAR_4->sig.rsa.e, 4096);
    } else
        return VAR_2;

    if( VAR_7 == VAR_6 )
        return VAR_3;



error:
    return VAR_2;
}
