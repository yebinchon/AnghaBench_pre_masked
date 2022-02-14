
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_window_t ;
typedef int uint32_t ;
struct wl_registry {int dummy; } ;
struct wl_list {int dummy; } ;
struct seat_data {int version; int node; int * seat; int * keyboard; int xkb; int * pointer; int * owner; } ;


 int VAR_0 ;
 int FUNC_0 (struct seat_data*) ;
 struct seat_data* FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (struct wl_list*,int *) ;
 int * FUNC_5 (struct wl_registry*,int,int *,int) ;
 int FUNC_6 (int *,int *,struct seat_data*) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;

int FUNC_8(vout_window_t *VAR_3, struct wl_registry *VAR_4,
                uint32_t VAR_5, uint32_t VAR_6, struct wl_list *VAR_7)
{
    struct seat_data *VAR_8 = FUNC_1(sizeof (*VAR_8));
    if (FUNC_2(VAR_8 == ((void*)0)))
        return -1;

    if (VAR_6 > 5)
        VAR_6 = 5;

    VAR_8->seat = FUNC_5(VAR_4, VAR_5, &VAR_2, VAR_6);
    if (FUNC_2(VAR_8->seat == ((void*)0)))
    {
        FUNC_0(VAR_8);
        return -1;
    }

    VAR_8->owner = VAR_3;
    VAR_8->pointer = ((void*)0);






    VAR_8->version = VAR_6;

    FUNC_6(VAR_8->seat, &VAR_1, VAR_8);
    FUNC_4(VAR_7, &VAR_8->node);
    return 0;
}
