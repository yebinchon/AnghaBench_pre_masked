
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
struct vlc_memstream {int ptr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 scalar_t__ FUNC_16 () ;
 scalar_t__ FUNC_17 () ;
 scalar_t__ FUNC_18 (struct vlc_memstream*) ;
 int FUNC_19 (struct vlc_memstream*) ;
 int FUNC_20 (struct vlc_memstream*,char*) ;

void FUNC_21 (vlc_object_t *VAR_0)
{
    struct vlc_memstream VAR_1;

    FUNC_19(&VAR_1);


    if (FUNC_8())
        FUNC_20(&VAR_1, "MMX ");
    if (FUNC_9())
        FUNC_20(&VAR_1, "MMXEXT ");
    if (FUNC_10())
        FUNC_20(&VAR_1, "SSE ");
    if (FUNC_11())
        FUNC_20(&VAR_1, "SSE2 ");
    if (FUNC_12())
        FUNC_20(&VAR_1, "SSE3 ");
    if (FUNC_16())
        FUNC_20(&VAR_1, "SSSE3 ");
    if (FUNC_14())
        FUNC_20(&VAR_1, "SSE4.1 ");
    if (FUNC_15())
        FUNC_20(&VAR_1, "SSE4.2 ");
    if (FUNC_13())
        FUNC_20(&VAR_1, "SSE4A ");
    if (FUNC_5())
        FUNC_20(&VAR_1, "AVX ");
    if (FUNC_6())
        FUNC_20(&VAR_1, "AVX2 ");
    if (FUNC_2())
        FUNC_20(&VAR_1, "3DNow! ");
    if (FUNC_17())
        FUNC_20(&VAR_1, "XOP ");
    if (FUNC_7())
        FUNC_20(&VAR_1, "FMA4 ");
    if (FUNC_18(&VAR_1) == 0)
    {
        FUNC_1 (VAR_0, "CPU has capabilities %s", VAR_1.ptr);
        FUNC_0(VAR_1.ptr);
    }
}
