
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int p_extra; int i_extra; } ;
typedef TYPE_1__ es_format_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const*,void const*,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int*,void const**,unsigned int*,int ,int ) ;

__attribute__((used)) static bool FUNC_2( const es_format_t *VAR_1, const es_format_t *VAR_2 )
{
    unsigned VAR_3[VAR_0];
    const void *VAR_4[VAR_0];
    unsigned VAR_5;

    if( FUNC_1(VAR_3, VAR_4, &VAR_5, VAR_1->i_extra, VAR_1->p_extra ) )
        VAR_5 = 0;

    unsigned VAR_6[VAR_0];
    const void *VAR_7[VAR_0];
    unsigned VAR_8;

    if( FUNC_1(VAR_6, VAR_7, &VAR_8, VAR_2->i_extra, VAR_2->p_extra ) )
        VAR_8 = 0;

    bool VAR_9 = VAR_5 == VAR_8;
    for( unsigned VAR_10 = 0; VAR_10 < VAR_5 && VAR_9; VAR_10++ )
    {

        if( VAR_10 == 1 )
            continue;
        if( VAR_3[VAR_10] != VAR_6[VAR_10] ||
            FUNC_0( VAR_4[VAR_10], VAR_7[VAR_10], VAR_3[VAR_10] ) )
            VAR_9 = 0;
    }

    return VAR_9;
}
