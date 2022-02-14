
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seat_data {int cursor_deadline; int owner; int cursor_timeout; int * pointer; int seat; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int *,struct seat_data*) ;
 int * FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct seat_data *VAR_2)
{
    if (VAR_2->pointer != ((void*)0))
        return;

    VAR_2->pointer = FUNC_4(VAR_2->seat);
    if (FUNC_1(VAR_2->pointer != ((void*)0)))
        FUNC_3(VAR_2->pointer, &VAR_1, VAR_2);

    VAR_2->cursor_timeout = FUNC_0( FUNC_2(VAR_2->owner, "mouse-hide-timeout") );
    VAR_2->cursor_deadline = VAR_0;
}
