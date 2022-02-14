
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {int error; int ptr; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct vlc_memstream *VAR_0)
{
    if (VAR_0->error)
        FUNC_0(VAR_0->ptr);
    return VAR_0->error;
}
