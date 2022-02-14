
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {int error; scalar_t__ length; int * ptr; } ;


 int VAR_0 ;
 int * FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ) ;

int FUNC_2(struct vlc_memstream *VAR_1)
{
    VAR_1->error = 0;
    VAR_1->ptr = FUNC_0(1, 1);
    if (FUNC_1(VAR_1->ptr == ((void*)0)))
        VAR_1->error = VAR_0;
    VAR_1->length = 0;
    return VAR_1->error;
}
