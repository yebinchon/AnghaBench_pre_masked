
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ p; scalar_t__ p_end; int p_start; } ;
typedef TYPE_1__ bs_t ;



__attribute__((used)) static size_t FUNC_0( const bs_t *VAR_0 )
{
    if( VAR_0->p )
        return VAR_0->p < VAR_0->p_end ? (VAR_0->p_end - VAR_0->p + 1) / 2 - 1: 0;
    else
        return (VAR_0->p_end - VAR_0->p_start) / 2;
}
