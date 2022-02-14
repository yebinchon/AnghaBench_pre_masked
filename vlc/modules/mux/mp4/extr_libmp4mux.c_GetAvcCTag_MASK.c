
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int h264_sequence_parameter_set_t ;
typedef int bo_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (int *,int const) ;
 int FUNC_2 (int *,size_t,int const*) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int const*,size_t,int const**,size_t*,int const**,size_t*,int const**,size_t*) ;
 int * FUNC_5 (int const*,size_t,int) ;
 scalar_t__ FUNC_6 (int *,int*,int*,int*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static bo_t *FUNC_8(const uint8_t *VAR_6, size_t VAR_7)
{
    bo_t *VAR_8 = FUNC_3("avcC");
    if(!VAR_8)
        return ((void*)0);
    const uint8_t *VAR_9, *VAR_10, *VAR_11;
    size_t VAR_12, VAR_13, VAR_14;

    if(! FUNC_4(VAR_6, VAR_7,
                        &VAR_9, &VAR_12,
                        &VAR_10, &VAR_13,
                        &VAR_11, &VAR_14 ) )
    {
        VAR_9 = VAR_10 = VAR_11 = ((void*)0);
        VAR_12 = VAR_13 = VAR_14 = 0;
    }

    FUNC_1(VAR_8, 1);
    FUNC_1(VAR_8, VAR_12 > 3 ? VAR_9[1] : VAR_5);
    FUNC_1(VAR_8, VAR_12 > 3 ? VAR_9[2] : 64);
    FUNC_1(VAR_8, VAR_12 > 3 ? VAR_9[3] : 30);
    FUNC_1(VAR_8, 0xff);

    FUNC_1(VAR_8, 0xe0 | (VAR_12 > 0 ? 1 : 0));
    if (VAR_12 > 0) {
        FUNC_0(VAR_8, VAR_12);
        FUNC_2(VAR_8, VAR_12, VAR_9);
    }

    FUNC_1(VAR_8, (VAR_13 > 0 ? 1 : 0));
    if (VAR_13 > 0) {
        FUNC_0(VAR_8, VAR_13);
        FUNC_2(VAR_8, VAR_13, VAR_10);
    }

    if( VAR_12 > 3 &&
       (VAR_9[1] == VAR_0 ||
        VAR_9[1] == VAR_1 ||
        VAR_9[1] == VAR_2 ||
        VAR_9[1] == VAR_3 ||
        VAR_9[1] == VAR_4) )
    {
        h264_sequence_parameter_set_t *VAR_15 = FUNC_5( VAR_9, VAR_12, 1 );
        if( VAR_15 )
        {
            uint8_t VAR_16[3];
            if( FUNC_6( VAR_15, &VAR_16[0], &VAR_16[1], &VAR_16[2]) )
            {
                FUNC_1(VAR_8, 0xFC | VAR_16[0]);
                FUNC_1(VAR_8, 0xF8 | (VAR_16[1] - 8));
                FUNC_1(VAR_8, 0xF8 | (VAR_16[2] - 8));
                FUNC_1(VAR_8, (VAR_14 > 0 ? 1 : 0));
                if (VAR_14 > 0) {
                    FUNC_0(VAR_8, VAR_14);
                    FUNC_2(VAR_8, VAR_14, VAR_11);
                }
            }
            FUNC_7( VAR_15 );
        }
    }

    return VAR_8;
}
