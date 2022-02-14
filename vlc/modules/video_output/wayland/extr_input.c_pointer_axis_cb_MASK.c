
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wl_fixed_t ;
typedef int vout_window_t ;
typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
struct seat_data {int * owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seat_data*,struct wl_pointer*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void *VAR_4, struct wl_pointer *VAR_5,
                            uint32_t VAR_6, uint32_t VAR_7, wl_fixed_t VAR_8)
{
    struct seat_data *VAR_9 = VAR_4;
    vout_window_t *VAR_10 = VAR_9->owner;
    int VAR_11;
    bool VAR_12 = VAR_8 > 0;

    FUNC_1(VAR_9, VAR_5);
    VAR_8 = FUNC_0(VAR_8);

    switch (VAR_7)
    {
        case 128:
            VAR_11 = VAR_12 ? VAR_0 : VAR_3;
            break;
        case 129:
            VAR_11 = VAR_12 ? VAR_2 : VAR_1;
            break;
        default:
            return;
    }

    while (VAR_8 > 0)
    {
        FUNC_2(VAR_10, VAR_11);
        FUNC_3(VAR_10, VAR_11);
        VAR_8 -= FUNC_4(10);
    }
    (void) VAR_6;
}
