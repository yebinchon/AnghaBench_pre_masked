
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_intern_atom_cookie_t ;
typedef int xcb_connection_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ,int ,char const*) ;

__attribute__((used)) static inline
xcb_intern_atom_cookie_t FUNC_2 (xcb_connection_t *VAR_0, const char *VAR_1)
{
    return FUNC_1 (VAR_0, 0, FUNC_0 (VAR_1), VAR_1);
}
