
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int hxxx_iterator_ctx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int const**,size_t*) ;
 int FUNC_2 (int *,int const**,size_t*) ;
 int FUNC_3 (int *,int const*,size_t,int) ;
 scalar_t__ FUNC_4 (int const*,int const*,size_t) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void FUNC_6( const uint8_t *VAR_0, size_t VAR_1,
                            const uint8_t **VAR_2, size_t *VAR_3 )
{
    FUNC_5("INPUT SET    : ");
    for(size_t VAR_4=0; VAR_4<VAR_1; VAR_4++)
        FUNC_5("0x%.2x, ", VAR_0[VAR_4] );
    FUNC_5("\n");

    for( unsigned int VAR_5=0; VAR_5<3; VAR_5++)
    {
        const uint8_t *VAR_6 = VAR_2[VAR_5];
        size_t VAR_7 = VAR_3[VAR_5];

        FUNC_5("Test with prefix len %d:\n", 1 << VAR_5);

        hxxx_iterator_ctx_t VAR_8;
        FUNC_3( &VAR_8, VAR_0, VAR_1, 0 );

        hxxx_iterator_ctx_t VAR_9;
        FUNC_3( &VAR_9, VAR_6, VAR_7, 1 << VAR_5 );

        const uint8_t *VAR_10; size_t VAR_11;
        const uint8_t *VAR_12; size_t VAR_13;

        bool VAR_14 = 1;
        bool VAR_15 = 1;

        int VAR_16 = 0;
        while(VAR_14 && VAR_15)
        {

            VAR_10 = ((void*)0);
            VAR_12 = ((void*)0);

            VAR_14 = FUNC_1( &VAR_8, &VAR_10, &VAR_11 );
            VAR_15 = FUNC_2( &VAR_9, &VAR_12, &VAR_13 );
            FUNC_5("NAL %d ", VAR_16++);
            if( VAR_14 != VAR_15 )
                FUNC_5(", returns %d != %d\n", VAR_14, VAR_15);
            FUNC_0(VAR_14 == VAR_15);
            if( VAR_14 && VAR_15 )
            {
                FUNC_0(VAR_11 == VAR_13);
                FUNC_0(FUNC_4(VAR_10, VAR_12, VAR_11) == 0);
                for(size_t VAR_17=0; VAR_17<VAR_11; VAR_17++)
                    FUNC_5("0x%.2x, ", VAR_10[VAR_17] );
                FUNC_5("\n");
            }
        }
        FUNC_5("\n");

    }
}
