
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int decoder_t ;
typedef int block_t ;


 int FUNC_0 (int *,int **) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1( decoder_t *VAR_1, block_t *VAR_2 )
{
    block_t **VAR_3 = VAR_2 ? &VAR_2 : ((void*)0);
    int VAR_4;
    do
    {
        VAR_4 = FUNC_0( VAR_1, VAR_3 );
    }
    while( VAR_4 == VAR_0 && VAR_3 && *VAR_3 );

    return VAR_4;
}
