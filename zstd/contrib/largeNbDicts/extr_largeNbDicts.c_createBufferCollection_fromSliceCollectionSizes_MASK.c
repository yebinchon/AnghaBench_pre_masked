
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t nbSlices; size_t* capacities; } ;
typedef TYPE_2__ slice_collection_t ;
struct TYPE_11__ {int * ptr; } ;
typedef TYPE_3__ buffer_t ;
struct TYPE_9__ {size_t nbSlices; size_t* capacities; void** slicePtrs; } ;
struct TYPE_12__ {TYPE_1__ slices; TYPE_3__ buffer; } ;
typedef TYPE_4__ buffer_collection_t ;


 int FUNC_0 (int ) ;
 TYPE_3__ FUNC_1 (size_t const) ;
 scalar_t__ FUNC_2 (size_t const) ;
 size_t FUNC_3 (TYPE_2__) ;

__attribute__((used)) static buffer_collection_t
FUNC_4(slice_collection_t VAR_0)
{
    size_t const VAR_1 = FUNC_3(VAR_0);

    buffer_t VAR_2 = FUNC_1(VAR_1);
    FUNC_0(VAR_2.ptr != ((void*)0));

    size_t const VAR_3 = VAR_0.nbSlices;
    void** const VAR_4 = (void**)FUNC_2(VAR_3 * sizeof(*VAR_4));
    FUNC_0(VAR_4 != ((void*)0));

    size_t* const VAR_5 = (size_t*)FUNC_2(VAR_3 * sizeof(*VAR_5));
    FUNC_0(VAR_5 != ((void*)0));

    char* const VAR_6 = (char*)VAR_2.ptr;
    size_t VAR_7 = 0;
    for (size_t VAR_8=0; VAR_8 < VAR_3; VAR_8++) {
        VAR_5[VAR_8] = VAR_0.capacities[VAR_8];
        VAR_4[VAR_8] = VAR_6 + VAR_7;
        VAR_7 += VAR_5[VAR_8];
    }

    buffer_collection_t VAR_9;
    VAR_9.buffer = VAR_2;
    VAR_9.slices.nbSlices = VAR_3;
    VAR_9.slices.capacities = VAR_5;
    VAR_9.slices.slicePtrs = VAR_4;
    return VAR_9;
}
