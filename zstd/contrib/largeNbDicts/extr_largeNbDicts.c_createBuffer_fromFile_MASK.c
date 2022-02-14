
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; scalar_t__ capacity; int * ptr; } ;
typedef TYPE_1__ buffer_t ;
typedef scalar_t__ U64 ;
typedef int FILE ;


 int FUNC_0 (int) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int) ;
 TYPE_1__ FUNC_3 (size_t const) ;
 int FUNC_4 (int * const) ;
 int FUNC_5 (TYPE_1__*,int * const) ;
 int * FUNC_6 (char const*,char*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static buffer_t FUNC_7(const char* VAR_2)
{
    U64 const VAR_3 = FUNC_1(VAR_2);
    size_t const VAR_4 = (size_t) VAR_3;

    if (VAR_3 == VAR_0) return VAR_1;
    FUNC_2((U64)VAR_4 == VAR_3);

    { FILE* const VAR_5 = FUNC_6(VAR_2, "rb");
        if (VAR_5 == ((void*)0)) return VAR_1;

        buffer_t VAR_6 = FUNC_3(VAR_4);
        FUNC_0(VAR_6.ptr != ((void*)0));

        FUNC_5(&VAR_6, VAR_5);
        FUNC_0(VAR_6.size == VAR_6.capacity);

        FUNC_4(VAR_5);
        return VAR_6;
    }
}
