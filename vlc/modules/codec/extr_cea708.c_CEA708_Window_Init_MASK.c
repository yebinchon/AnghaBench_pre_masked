
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_row_lock; int b_column_lock; int i_firstrow; int pen; int style; } ;
typedef TYPE_1__ cea708_window_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_1( cea708_window_t *VAR_3 )
{
    FUNC_0( VAR_3, 0, sizeof(*VAR_3) );
    VAR_3->style = VAR_2[0];
    VAR_3->pen = VAR_1[0];
    VAR_3->i_firstrow = VAR_0;
    VAR_3->b_row_lock = 1;
    VAR_3->b_column_lock = 1;
}
