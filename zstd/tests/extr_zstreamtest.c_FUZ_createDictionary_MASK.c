
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; size_t filled; scalar_t__ start; } ;
typedef TYPE_1__ buffer_t ;


 int FUNC_0 (TYPE_1__) ;
 scalar_t__ FUNC_1 (size_t const) ;
 size_t FUNC_2 (scalar_t__,size_t,void const*,size_t* const,unsigned int) ;
 int FUNC_3 (size_t* const) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_4 (size_t const) ;

__attribute__((used)) static buffer_t FUNC_5(const void* VAR_1, size_t VAR_2, size_t VAR_3, size_t VAR_4)
{
    buffer_t VAR_5 = VAR_0;
    size_t const VAR_6 = (VAR_2 + (VAR_3-1)) / VAR_3;
    size_t* const VAR_7 = (size_t*)FUNC_4(VAR_6 * sizeof(size_t));
    if (!VAR_7) return VAR_0;
    VAR_5.start = FUNC_4(VAR_4);
    if (!VAR_5.start) { FUNC_3(VAR_7); return VAR_0; }
    { size_t VAR_8;
        for (VAR_8=0; VAR_8<VAR_6-1; VAR_8++) VAR_7[VAR_8] = VAR_3;
        VAR_7[VAR_6-1] = VAR_2 - (VAR_3 * (VAR_6-1));
    }
    { size_t const VAR_9 = FUNC_2(VAR_5.start, VAR_4, VAR_1, VAR_7, (unsigned)VAR_6);
        FUNC_3(VAR_7);
        if (FUNC_1(VAR_9)) { FUNC_0(VAR_5); return VAR_0; }
        VAR_5.size = VAR_4;
        VAR_5.filled = VAR_9;
        return VAR_5;
    }
}
