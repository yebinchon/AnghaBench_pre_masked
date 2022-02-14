
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct wl_pointer {int dummy; } ;
struct seat_data {int owner; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct seat_data*,struct wl_pointer*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_3, struct wl_pointer *VAR_4,
                              uint32_t VAR_5, uint32_t VAR_6,
                              uint32_t VAR_7, uint32_t VAR_8)
{
    struct seat_data *VAR_9 = VAR_3;
    int VAR_10;

    FUNC_0(VAR_9, VAR_4);

    switch (VAR_7)
    {
        case 132:
            VAR_10 = VAR_1;
            break;
        case 130:
            VAR_10 = VAR_2;
            break;
        case 131:
            VAR_10 = VAR_0;
            break;
        default:
            return;
    }

    switch (VAR_8)
    {
        case 128:
            FUNC_2(VAR_9->owner, VAR_10);
            break;
        case 129:
            FUNC_1(VAR_9->owner, VAR_10);
            break;
    }

    (void) VAR_5; (void) VAR_6;
}
