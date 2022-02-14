
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint64 ;
typedef scalar_t__ uint32 ;
struct TYPE_10__ {int has_nulls; int delta_deltas; void* last_delta; void* last_value; int compression_algorithm; int vl_len_; } ;
struct TYPE_9__ {scalar_t__ num_elements; } ;
typedef scalar_t__ Size ;
typedef TYPE_1__ Simple8bRleSerialized ;
typedef TYPE_2__ DeltaDeltaCompressed ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 char* FUNC_3 (char*,scalar_t__,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int) ;
 char* FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static DeltaDeltaCompressed *
FUNC_10(uint64 VAR_4, uint64 VAR_5, Simple8bRleSerialized *VAR_6,
        Simple8bRleSerialized *VAR_7)
{
 uint32 VAR_8 = 0;
 Size VAR_9;
 char *VAR_10;
 DeltaDeltaCompressed *VAR_11;
 if (VAR_7 != ((void*)0))
  VAR_8 = FUNC_9(VAR_7);
 VAR_9 =
  sizeof(DeltaDeltaCompressed) + FUNC_8(VAR_6) + VAR_8;

 if (!FUNC_0(VAR_9))
  FUNC_4(VAR_2,
    (FUNC_5(VAR_1),
     FUNC_6("compressed size exceeds the maximum allowed (%d)", (int) VAR_3)));

 VAR_10 = FUNC_7(VAR_9);
 VAR_11 = (DeltaDeltaCompressed *) VAR_10;
 FUNC_2(&VAR_11->vl_len_, VAR_9);

 VAR_11->compression_algorithm = VAR_0;
 VAR_11->last_value = VAR_4;
 VAR_11->last_delta = VAR_5;
 VAR_11->has_nulls = VAR_8 != 0 ? 1 : 0;

 VAR_10 = (char *) &VAR_11->delta_deltas;
 VAR_10 =
  FUNC_3(VAR_10,
            FUNC_9(VAR_6),
            VAR_6);
 if (VAR_11->has_nulls)
 {
  FUNC_1(VAR_7->num_elements > VAR_6->num_elements);
  FUNC_3(VAR_10, VAR_8, VAR_7);
 }

 return VAR_11;
}
