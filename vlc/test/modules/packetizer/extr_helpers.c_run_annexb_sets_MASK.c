
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct results_s {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int const*,int const*,struct results_s const*,size_t,int ,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_2( const uint8_t *VAR_2, const uint8_t *VAR_3,
                            const struct results_s *VAR_4, size_t VAR_5,
                            ssize_t VAR_6 )
{
    int VAR_7;

    FUNC_1("checking bits code:\n");
    VAR_7 = FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                       VAR_1 );
    if( VAR_7 != 0 )
        return VAR_7;


    if( VAR_1 != VAR_0 )
    {
        FUNC_1("checking asm:\n");
        VAR_7 = FUNC_0( VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
                           VAR_0 );
        if( VAR_7 != 0 )
            return VAR_7;
    }
    else FUNC_1("asm not built in, skipping test:\n");

    return 0;
}
