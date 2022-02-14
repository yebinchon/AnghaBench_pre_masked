
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int atom; } ;
typedef TYPE_1__ xcb_intern_atom_reply_t ;
typedef int xcb_intern_atom_cookie_t ;
typedef int xcb_connection_t ;
typedef int xcb_atom_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static
xcb_atom_t FUNC_2 (xcb_connection_t *VAR_0, xcb_intern_atom_cookie_t VAR_1)
{
    xcb_intern_atom_reply_t *VAR_2;
    xcb_atom_t VAR_3;

    VAR_2 = FUNC_1 (VAR_0, VAR_1, ((void*)0));
    if (VAR_2 == ((void*)0))
        return 0;

    VAR_3 = VAR_2->atom;
    FUNC_0 (VAR_2);
    return VAR_3;
}
