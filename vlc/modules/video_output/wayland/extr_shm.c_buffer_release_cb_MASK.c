
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_buffer {int dummy; } ;
struct buffer_data {int * counter; int picture; } ;


 int FUNC_0 (struct buffer_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wl_buffer*) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, struct wl_buffer *VAR_1)
{
    struct buffer_data *VAR_2 = VAR_0;

    FUNC_1(VAR_2->picture);
    (*(VAR_2->counter))--;
    FUNC_0(VAR_2);
    FUNC_2(VAR_1);
}
