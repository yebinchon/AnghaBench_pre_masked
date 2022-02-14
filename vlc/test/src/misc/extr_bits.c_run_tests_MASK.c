
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct testset {int count; int * data; } ;
typedef int bs_t ;
typedef int bs_byte_callbacks_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int**,int) ;
 int FUNC_14 (int*,int*,int) ;
 int FUNC_15 (int,int) ;

__attribute__((used)) static int FUNC_16( const struct testset *VAR_4,
                      const char *VAR_5,
                      bs_byte_callbacks_t *VAR_6,
                      void *VAR_7, void (*VAR_8)(void *) )
{
    bs_t VAR_9;

    FUNC_3( &VAR_9, ((void*)0), 0 );
    FUNC_15( FUNC_9(&VAR_9), 0 );
    FUNC_15( FUNC_4(&VAR_9), 0 );

    FUNC_3( &VAR_9, VAR_4[VAR_0].data, 0 );
    FUNC_15( FUNC_9(&VAR_9), 0 );
    FUNC_15( FUNC_4(&VAR_9), 0 );

    FUNC_3( &VAR_9, VAR_4[VAR_0].data,
                  VAR_4[VAR_0].count );
    FUNC_15( FUNC_9(&VAR_9), 8 );
    FUNC_15( FUNC_4(&VAR_9), 0 );

    FUNC_10( &VAR_9, 3 );
    FUNC_15( FUNC_9(&VAR_9), 5 );
    FUNC_15( FUNC_4(&VAR_9), 3 );

    FUNC_3( &VAR_9, VAR_4[VAR_1].data,
                  VAR_4[VAR_1].count );
    FUNC_15( FUNC_9(&VAR_9), 16 );

    FUNC_11( &VAR_9, 1, 0 );
    FUNC_15( FUNC_9(&VAR_9), 16 );

    FUNC_6( &VAR_9 );
    FUNC_15( FUNC_9(&VAR_9), 15 );
    FUNC_15( FUNC_4(&VAR_9), 1 );

    FUNC_5( &VAR_9, 7 );
    FUNC_15( FUNC_9(&VAR_9), 8 );
    FUNC_15( FUNC_4(&VAR_9), 8 );

    FUNC_6( &VAR_9 );
    FUNC_15( FUNC_9(&VAR_9), 7 );
    FUNC_15( FUNC_4(&VAR_9), 9 );

    FUNC_0( &VAR_9 );
    FUNC_15( FUNC_9(&VAR_9), 0 );
    FUNC_15( FUNC_4(&VAR_9), 16 );

    FUNC_3( &VAR_9, VAR_4[VAR_1].data,
                  VAR_4[VAR_1].count );
    FUNC_15( FUNC_5(&VAR_9, 4), 0x0A );
    FUNC_15( FUNC_5(&VAR_9, 12), ((0x0A << 8) | 0x55) );

    FUNC_3( &VAR_9, VAR_4[VAR_3].data,
                  VAR_4[VAR_3].count );
    FUNC_15( FUNC_8(&VAR_9), 0x09 );
    FUNC_15( FUNC_9(&VAR_9), 9 );
    FUNC_15( FUNC_6(&VAR_9), 1 );
    FUNC_15( FUNC_7(&VAR_9), 2 );
    FUNC_15( FUNC_9(&VAR_9), 3 );
    FUNC_15( FUNC_7(&VAR_9), -1 );
    FUNC_15( FUNC_2(&VAR_9), !0 );

    FUNC_3( &VAR_9, VAR_4[VAR_2].data,
                  VAR_4[VAR_2].count );
    FUNC_10( &VAR_9, 24 );
    FUNC_15( FUNC_5( &VAR_9, 8 ), 0xDD );
    FUNC_15( FUNC_5( &VAR_9, 4 ), 0x0E );
    FUNC_15( FUNC_5( &VAR_9, 8 ), 0xEF );
    FUNC_15( FUNC_9( &VAR_9 ), 4 );

    FUNC_3( &VAR_9, VAR_4[VAR_2].data,
                  VAR_4[VAR_2].count );
    FUNC_10( &VAR_9, 40 );
    FUNC_15( FUNC_5( &VAR_9, 8 ), 0xFF );

    FUNC_3( &VAR_9, VAR_4[VAR_2].data,
                  VAR_4[VAR_2].count );
    FUNC_10( &VAR_9, 20 );
    FUNC_15( FUNC_5( &VAR_9, 8 ), 0xCD );
    FUNC_15( FUNC_5( &VAR_9, 4 ), 0x0D );
    FUNC_15( FUNC_5( &VAR_9, 8 ), 0xEE );
    FUNC_15( FUNC_9( &VAR_9 ), 8 );


    FUNC_3( &VAR_9, VAR_4[VAR_2].data,
                  VAR_4[VAR_2].count );
    for( size_t VAR_10=0; VAR_10<6*8; VAR_10++ )
    {
        FUNC_15(FUNC_1( &VAR_9 ), !!(VAR_10%8 == 0));
        FUNC_15(FUNC_9( &VAR_9 ), 6*8 - VAR_10);
        FUNC_15(FUNC_4( &VAR_9 ), VAR_10);
        FUNC_5( &VAR_9, 1 );
    }
    FUNC_15(FUNC_2( &VAR_9 ), 1);


    uint8_t VAR_11[5] = { 0 };
    uint8_t VAR_12[5] = { 0x7D, 0xF7, 0xDF, 0x7D, 0xF7 };
    FUNC_13( &VAR_9, &VAR_11, 5 );
    FUNC_11(&VAR_9, 1, 1 );
    FUNC_15(VAR_11[0], 0x80);
    FUNC_11(&VAR_9, 2, 0 );
    FUNC_15(VAR_11[0], 0x80);
    FUNC_11(&VAR_9, 1, 1 );
    FUNC_15(VAR_11[0], 0x90);

    FUNC_13( &VAR_9, &VAR_11, 5 );
    for( size_t VAR_13=0, VAR_14=0; VAR_13<5*8; VAR_14++ )
    {
        FUNC_15(FUNC_1( &VAR_9 ), !!(VAR_13%8 == 0));
        FUNC_15(FUNC_9( &VAR_9 ), 5*8 - VAR_13);
        FUNC_15(FUNC_4( &VAR_9 ), VAR_13);
        FUNC_11(&VAR_9, VAR_14 % 4, (VAR_13 % 2) ? 0xFF >> (8 - (VAR_14 % 4)) : 0 );
        VAR_13 += VAR_14 % 4;
    }
    FUNC_15(FUNC_2( &VAR_9 ), 1);
    FUNC_15(!FUNC_14(VAR_11, VAR_12, 5), 1);

    FUNC_13( &VAR_9, &VAR_11, 5 );
    FUNC_11( &VAR_9, 1, 0 );
    FUNC_12( &VAR_9, 1 );
    FUNC_15(FUNC_1( &VAR_9 ), 1);
    FUNC_15(FUNC_4( &VAR_9 ), 8);
    FUNC_15(VAR_11[0], 0x7F);
    FUNC_11( &VAR_9, 1, 1 );
    FUNC_12( &VAR_9, 0 );
    FUNC_15(FUNC_1( &VAR_9 ), 1);
    FUNC_15(FUNC_4( &VAR_9 ), 16);
    FUNC_15(VAR_11[1], 0x80);


    FUNC_3( &VAR_9, VAR_4[VAR_1].data, VAR_4[VAR_1].count );
    FUNC_5( &VAR_9, 42 );
    FUNC_15(FUNC_9( &VAR_9 ), 0);
    FUNC_15(FUNC_4( &VAR_9 ), 16);

    FUNC_3( &VAR_9, VAR_4[VAR_1].data, VAR_4[VAR_1].count );
    FUNC_10( &VAR_9, 42 );
    FUNC_15(FUNC_9( &VAR_9 ), 0);
    FUNC_15(FUNC_4( &VAR_9 ), 16);

    FUNC_3( &VAR_9, VAR_4[VAR_1].data, VAR_4[VAR_1].count );
    FUNC_10( &VAR_9, 8 );
    FUNC_15(FUNC_9( &VAR_9 ), 8);
    FUNC_15(FUNC_4( &VAR_9 ), 8);
    FUNC_15(FUNC_5( &VAR_9, 8 + 2 ), 0x55 << 2);
    FUNC_15(FUNC_9( &VAR_9 ), 0);
    FUNC_15(FUNC_4( &VAR_9 ), 16);

    return 0;
}
