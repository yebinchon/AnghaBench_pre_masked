
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_wl_interface {int globals; int interface; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct vlc_wl_interface* FUNC_1 (int) ;
 int FUNC_2 (int ,char const*,size_t const) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct vlc_wl_interface *FUNC_5(const char *VAR_0)
{
    const size_t VAR_1 = FUNC_3(VAR_0) + 1;
    struct vlc_wl_interface *VAR_2 = FUNC_1(sizeof (*VAR_2) + VAR_1);

    if (FUNC_0(VAR_2 != ((void*)0)))
    {
        FUNC_2(VAR_2->interface, VAR_0, VAR_1);
        FUNC_4(&VAR_2->globals);
    }
    return VAR_2;
}
