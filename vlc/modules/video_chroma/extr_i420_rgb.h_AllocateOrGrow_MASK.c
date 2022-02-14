
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;


 unsigned int VAR_0 ;
 unsigned int* FUNC_0 (unsigned int*,size_t const) ;

__attribute__((used)) static inline int FUNC_1( uint8_t **VAR_1, size_t *VAR_2,
                                  unsigned VAR_3, uint8_t VAR_4 )
{
    if(VAR_0 / VAR_4 < VAR_3)
        return -1;
    const size_t VAR_5 = VAR_3 * VAR_4;
    if(*VAR_2 >= VAR_5)
        return 0;
    uint8_t *VAR_6 = FUNC_0(*VAR_1, VAR_5);
    if(!VAR_6)
        return -1;
    *VAR_1 = VAR_6;
    *VAR_2 = VAR_5;
    return 0;
}
