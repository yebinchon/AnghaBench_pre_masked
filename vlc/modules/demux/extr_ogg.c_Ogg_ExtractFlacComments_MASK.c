
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef int es_format_t ;
typedef int demux_t ;


 unsigned int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int *,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_0, es_format_t *VAR_1,
                                     const uint8_t *VAR_2, unsigned VAR_3 )
{

    if(VAR_3 <= 46)
        return;
    VAR_2 += 42; VAR_3 -= 42;

    uint32_t VAR_4 = FUNC_0(&VAR_2[1]);
    if(VAR_2[0] == 0x84 && VAR_4 <= VAR_3 - 4)
    {
        FUNC_1( VAR_0, VAR_1, &VAR_2[4], VAR_3 - 4 );
    }
}
