
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int test1_annexbdata ;
struct results_s {int member_0; int member_1; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct results_s const*) ;
 int FUNC_1 (int*) ;
 int* FUNC_2 (int) ;
 int FUNC_3 (int*,int const*,int) ;
 int FUNC_4 (int*,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int const*,int const*,struct results_s const*,int ,size_t const) ;

int FUNC_7( void )
{
    const uint8_t VAR_0[] = { 0, 0, 0, 1, 0x55, 0x55, 0x55, 0x55, 0x55,
                                         0, 0, 1, 0x22, 0x22,
                                         0, 0, 1, 0x0, 0x0,
                                         0, 0, 1,
                                         0, 0, 1, 0,
                                         0, 0, 1, 0x11,
                                         0, 0, 1,
                                       };
    const struct results_s VAR_1[] = {
                                        { 1, 3 + 5 },
                                        { 9, 3 + 2 },
                                        { 14, 3 + 2 },
                                        { 19, 3 + 0 },
                                        { 22, 3 + 1 },
                                        { 26, 3 + 1 },
                                        { 30, 3 + 0 },
                                       };

    FUNC_5("* Running tests on set 1:\n");
    int VAR_2 = FUNC_6( VAR_0,
                                 VAR_0 + sizeof(VAR_0),
                                 VAR_1, FUNC_0(VAR_1), 0 );
    if( VAR_2 != 0 )
        return VAR_2;

    uint8_t *VAR_3 = FUNC_2( 4096 );
    if( VAR_3 )
    {
        const ssize_t VAR_4 = 4096 - sizeof(VAR_0) - 111;
        FUNC_4( VAR_3, 0x42, 4096 );
        FUNC_3( &VAR_3[VAR_4],
                VAR_0, sizeof(VAR_0) );
        FUNC_5("* Running tests on extended set 1:\n");
        VAR_2 = FUNC_6( VAR_3,
                                 VAR_3 + 4096,
                                 VAR_1, FUNC_0(VAR_1),
                                 VAR_4 );
        FUNC_1( VAR_3 );
        if( VAR_2 != 0 )
            return VAR_2;
    }

    return 0;
}
