
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int es_format_t ;
typedef int demux_t ;


 int FUNC_0 (int *,int *,int const*,unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int*,void const**,unsigned int*,unsigned int,void const*) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_1, es_format_t *VAR_2,
                                 const void *VAR_3, unsigned VAR_4, unsigned VAR_5 )
{
    unsigned VAR_6[VAR_0];
    const void *VAR_7[VAR_0];
    unsigned VAR_8;

    if( FUNC_1( VAR_6, VAR_7, &VAR_8, VAR_4, VAR_3 ) )
        return;

    if( VAR_8 >= 2 && VAR_6[1] > VAR_5 )
    {
        FUNC_0( VAR_1, VAR_2,
                             (const uint8_t *)VAR_7[1] + VAR_5,
                             VAR_6[1] - VAR_5 );
    }
}
