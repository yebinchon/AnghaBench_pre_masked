
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct hxxx_bsfw_ep3b_ctx_s {int dummy; } ;
struct TYPE_9__ {struct hxxx_bsfw_ep3b_ctx_s* p_priv; void* cb; } ;
typedef TYPE_1__ bs_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const**,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int) ;
 void* VAR_0 ;
 int FUNC_8 (struct hxxx_bsfw_ep3b_ctx_s*) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10( const char *VAR_1 )
{
    const uint8_t VAR_2[] = { 0xFF, 0x00, 0x00, 0x03, 0x01, 0xFF,
                               0x03, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x03 };
    const uint8_t VAR_3[] = { 0xFF, 0x00, 0x00, 0x01, 0xFF,
                               0x03, 0x00, 0x00, 0x02, 0x00, 0x00, 0x03 };

    bs_t VAR_4;
    struct hxxx_bsfw_ep3b_ctx_s VAR_5;
    FUNC_3( &VAR_4, &VAR_2, FUNC_0(VAR_2) );
    FUNC_8( &VAR_5 );
    VAR_4.cb = VAR_0;
    VAR_4.p_priv = &VAR_5;
    for( size_t VAR_6=0; VAR_6<FUNC_0(VAR_3)*8; VAR_6++ )
    {
        FUNC_9(FUNC_1( &VAR_4 ), !!(VAR_6%8 == 0));
        FUNC_9(FUNC_6( &VAR_4 ), FUNC_0(VAR_3)*8 - VAR_6);
        FUNC_9(FUNC_4( &VAR_4 ), VAR_6);
        FUNC_5( &VAR_4, 1 );
    }
    FUNC_9(FUNC_2( &VAR_4 ), 1);

    FUNC_3( &VAR_4, &VAR_2, FUNC_0(VAR_2) );
    FUNC_8( &VAR_5 );
    VAR_4.cb = VAR_0;
    VAR_4.p_priv = &VAR_5;
    for( size_t VAR_7=0; VAR_7<FUNC_0(VAR_3)*4; VAR_7++ )
    {
        FUNC_9(FUNC_6( &VAR_4 ), FUNC_0(VAR_3)*8 - VAR_7*2);
        FUNC_9(FUNC_4( &VAR_4 ), VAR_7*2);
        FUNC_5( &VAR_4, 2 );
    }
    FUNC_9(FUNC_2( &VAR_4 ), 1);


    FUNC_3( &VAR_4, &VAR_2, FUNC_0(VAR_2) );
    FUNC_7( &VAR_4, (FUNC_0(VAR_2) + 1) * 8 );
    FUNC_9(FUNC_6( &VAR_4 ), 0);
    FUNC_9(FUNC_4( &VAR_4 ), FUNC_0(VAR_2) * 8);

    return 0;
}
