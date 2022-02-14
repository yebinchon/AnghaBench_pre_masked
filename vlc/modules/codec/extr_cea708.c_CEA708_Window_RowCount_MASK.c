
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ i_firstrow; scalar_t__ i_lastrow; } ;
typedef TYPE_1__ cea708_window_t ;



__attribute__((used)) static uint8_t FUNC_0( const cea708_window_t *VAR_0 )
{
    if( VAR_0->i_firstrow > VAR_0->i_lastrow )
        return 0;
    return 1 + VAR_0->i_lastrow - VAR_0->i_firstrow;
}
