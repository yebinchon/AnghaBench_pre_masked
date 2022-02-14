
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {size_t i_firstrow; size_t i_lastrow; int ** rows; } ;
typedef TYPE_1__ cea708_window_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( cea708_window_t *VAR_1 )
{
    for( uint8_t VAR_2=VAR_1->i_firstrow; VAR_2<=VAR_1->i_lastrow; VAR_2++ )
    {
        FUNC_0( VAR_1->rows[VAR_2] );
        VAR_1->rows[VAR_2] = ((void*)0);
    }
    VAR_1->i_lastrow = 0;
    VAR_1->i_firstrow = VAR_0;
}
