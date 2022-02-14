
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int d1; int d2; } ;
struct TYPE_7__ {scalar_t__ i_row; scalar_t__ i_column; } ;
struct TYPE_9__ {int i_channel; scalar_t__ i_row_rollup; int font; int color; int mode; TYPE_2__ last; TYPE_1__ cursor; scalar_t__ i_screen; } ;
typedef TYPE_3__ eia608_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static void FUNC_2( eia608_t *VAR_4 )
{
    FUNC_1( VAR_4, 0, sizeof(*VAR_4) );


    VAR_4->i_channel = -1;

    VAR_4->i_screen = 0;
    FUNC_0( VAR_4, 0 );
    FUNC_0( VAR_4, 1 );


    VAR_4->cursor.i_column = 0;
    VAR_4->cursor.i_row = 0;

    VAR_4->last.d1 = 0x00;
    VAR_4->last.d2 = 0x00;
    VAR_4->mode = VAR_2;
    VAR_4->color = VAR_0;
    VAR_4->font = VAR_1;
    VAR_4->i_row_rollup = VAR_3-1;
}
