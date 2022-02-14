
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_3__ {int * p_end; int * p; int * p_start; } ;
typedef TYPE_1__ bs_t ;



__attribute__((used)) static size_t FUNC_0( bs_t *VAR_0, size_t VAR_1 )
{
    if( VAR_0->p == ((void*)0) )
    {
        VAR_0->p = VAR_0->p_start;
        return 1 + FUNC_0( VAR_0, VAR_1 - 1 );
    }

    if( VAR_0->p_end - VAR_0->p > (ssize_t) VAR_1 * 2 )
    {
        VAR_0->p += VAR_1 * 2;
        return VAR_1;
    }
    else
    {
        VAR_0->p = VAR_0->p_end;
        return 0;
    }
}
