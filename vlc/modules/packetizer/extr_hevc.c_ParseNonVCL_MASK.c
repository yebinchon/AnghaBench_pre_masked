
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int decoder_t ;
typedef int block_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_0 (int *,scalar_t__,int *) ;
 int * FUNC_1 (int *,scalar_t__,int *) ;

__attribute__((used)) static block_t * FUNC_2(decoder_t *VAR_7, uint8_t VAR_8, block_t *VAR_9)
{
    block_t *VAR_10 = ((void*)0);

    if ( (VAR_8 >= VAR_6 && VAR_8 <= VAR_0) ||
          VAR_8 == VAR_1 ||
         (VAR_8 >= VAR_2 && VAR_8 <= VAR_3) ||
         (VAR_8 >= VAR_4 && VAR_8 <= VAR_5) )
    {
        VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_9);
    }
    else
    {
        VAR_10 = FUNC_1(VAR_7, VAR_8, VAR_9);
    }

    return VAR_10;
}
