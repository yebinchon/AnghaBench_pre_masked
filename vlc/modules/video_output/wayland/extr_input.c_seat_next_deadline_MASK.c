
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
struct seat_data {int cursor_deadline; int * pointer; } ;


 int VAR_0 ;

__attribute__((used)) static vlc_tick_t FUNC_0(const struct seat_data *VAR_1)
{
    return (VAR_1->pointer != ((void*)0)) ? VAR_1->cursor_deadline : VAR_0;
}
