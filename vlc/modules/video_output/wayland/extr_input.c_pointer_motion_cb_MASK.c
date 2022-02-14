
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wl_fixed_t ;
typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
struct seat_data {int owner; } ;


 int FUNC_0 (struct seat_data*,struct wl_pointer*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct wl_pointer *VAR_1,
                              uint32_t VAR_2, wl_fixed_t VAR_3, wl_fixed_t VAR_4)
{
    struct seat_data *VAR_5 = VAR_0;

    FUNC_0(VAR_5, VAR_1);
    FUNC_1(VAR_5->owner,
                                 FUNC_2(VAR_3), FUNC_2(VAR_4));
    (void) VAR_2;
}
