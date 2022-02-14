
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_tick_t ;
struct seat_data {scalar_t__ cursor_deadline; int cursor_serial; int * pointer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct seat_data *VAR_1, vlc_tick_t VAR_2)
{
    if (VAR_1->pointer != ((void*)0) && VAR_1->cursor_deadline <= VAR_2)
    {
        FUNC_0(VAR_1->pointer, VAR_1->cursor_serial, ((void*)0), 0, 0);
        VAR_1->cursor_deadline = VAR_0;
    }
}
