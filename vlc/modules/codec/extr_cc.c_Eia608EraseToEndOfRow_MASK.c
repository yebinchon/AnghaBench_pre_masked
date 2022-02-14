
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int i_column; int i_row; } ;
struct TYPE_7__ {scalar_t__ mode; TYPE_1__ cursor; } ;
typedef TYPE_2__ eia608_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( eia608_t *VAR_1 )
{
    if( VAR_1->mode == VAR_0 )
        return;

    FUNC_0( VAR_1, FUNC_1( VAR_1 ), VAR_1->cursor.i_row, VAR_1->cursor.i_column );
}
