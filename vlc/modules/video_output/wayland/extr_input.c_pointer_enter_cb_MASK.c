
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_surface {int dummy; } ;
struct wl_pointer {int dummy; } ;
struct seat_data {int cursor_serial; } ;


 int FUNC_0 (struct seat_data*,struct wl_pointer*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wl_pointer *VAR_1,
                             uint32_t VAR_2, struct wl_surface *VAR_3,
                             wl_fixed_t VAR_4, wl_fixed_t VAR_5)
{
    struct seat_data *VAR_6 = VAR_0;

    VAR_6->cursor_serial = VAR_2;
    FUNC_0(VAR_6, VAR_1);
    (void) VAR_3; (void) VAR_4; (void) VAR_5;
}
