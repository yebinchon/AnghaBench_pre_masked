
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct check_items_order_data {int count; void** items; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct check_items_order_data *VAR_0, void *VAR_1)
{
    FUNC_0(VAR_0->count < 16);
    VAR_0->items[VAR_0->count] = VAR_1;
    VAR_0->count++;
}
