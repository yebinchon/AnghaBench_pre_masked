
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_lock_mark {scalar_t__ object; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct vlc_lock_mark *VAR_2 = VAR_0, *VAR_3 = VAR_1;

    if (VAR_2->object == VAR_3->object)
        return 0;

    return ((uintptr_t)(VAR_2->object) > (uintptr_t)(VAR_3->object)) ? +1 : -1;
}
