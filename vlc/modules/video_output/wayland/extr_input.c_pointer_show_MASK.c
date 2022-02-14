
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_surface {int dummy; } ;
struct wl_pointer {int dummy; } ;
struct seat_data {scalar_t__ cursor_timeout; scalar_t__ cursor_deadline; int cursor_serial; int owner; } ;


 scalar_t__ FUNC_0 () ;
 struct wl_surface* FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (struct wl_pointer*,int ,struct wl_surface*,int,int) ;

__attribute__((used)) static void FUNC_3(struct seat_data *VAR_0, struct wl_pointer *VAR_1)
{
    int VAR_2, VAR_3;
    struct wl_surface *VAR_4 = FUNC_1(VAR_0->owner, &VAR_2, &VAR_3);

    if (VAR_4 != ((void*)0))
    {
        FUNC_2(VAR_1, VAR_0->cursor_serial, VAR_4, VAR_2, VAR_3);
        VAR_0->cursor_deadline = FUNC_0() + VAR_0->cursor_timeout;
    }
}
