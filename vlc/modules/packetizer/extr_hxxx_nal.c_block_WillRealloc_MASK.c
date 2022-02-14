
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ssize_t ;
struct TYPE_3__ {size_t i_size; } ;
typedef TYPE_1__ block_t ;



__attribute__((used)) static bool FUNC_0( block_t *VAR_0, ssize_t VAR_1, size_t VAR_2 )
{
    if( VAR_1 <= 0 && VAR_2 <= (size_t)(-VAR_1) )
        return 0;
    else
        return ( VAR_1 + VAR_2 <= VAR_0->i_size );
}
