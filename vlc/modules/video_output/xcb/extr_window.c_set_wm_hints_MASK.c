
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_window_t ;
typedef int xcb_connection_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int,int,int const*) ;

__attribute__((used)) static inline
void FUNC_1 (xcb_connection_t *VAR_2, xcb_window_t VAR_3)
{
    static const uint32_t VAR_4[8] = {
        3,
        1,
        1,
        0, 0, 0, 0, 0,
    };
    FUNC_0 (VAR_2, VAR_1, VAR_3, VAR_0,
                         VAR_0, 32, 8, VAR_4);
}
