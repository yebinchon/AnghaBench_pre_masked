
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_seat {int dummy; } ;
struct seat_data {int owner; } ;


 int FUNC_0 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, struct wl_seat *VAR_1, const char *VAR_2)
{
    struct seat_data *VAR_3 = VAR_0;

    FUNC_0(VAR_3->owner, "seat name: %s", VAR_2);
    (void) VAR_1;
}
