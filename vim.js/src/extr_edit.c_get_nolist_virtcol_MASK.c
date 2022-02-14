
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int colnr_T ;
struct TYPE_2__ {int w_virtcol; int w_cursor; scalar_t__ w_p_list; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ) ;

__attribute__((used)) static colnr_T
FUNC_3()
{
    if (VAR_1->w_p_list && FUNC_2(VAR_2, VAR_0) == ((void*)0))
 return FUNC_0(&VAR_1->w_cursor);
    FUNC_1();
    return VAR_1->w_virtcol;
}
