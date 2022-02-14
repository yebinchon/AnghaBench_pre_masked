
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int uint32_t ;
typedef int kmutex_t ;
struct TYPE_8__ {scalar_t__ b_birth; struct TYPE_8__* b_hash_next; int b_dva; int b_spa; } ;
typedef TYPE_1__ arc_buf_hdr_t ;
struct TYPE_9__ {TYPE_1__** ht_table; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 size_t FUNC_4 (int ,int *,scalar_t__) ;
 int * FUNC_5 (size_t) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *,scalar_t__,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_11 (int *) ;

__attribute__((used)) static arc_buf_hdr_t *
FUNC_12(arc_buf_hdr_t *VAR_6, kmutex_t **VAR_7)
{
 uint64_t VAR_8 = FUNC_4(VAR_6->b_spa, &VAR_6->b_dva, VAR_6->b_birth);
 kmutex_t *VAR_9 = FUNC_5(VAR_8);
 arc_buf_hdr_t *VAR_10;
 uint32_t VAR_11;

 FUNC_3(!FUNC_6(&VAR_6->b_dva));
 FUNC_3(VAR_6->b_birth != 0);
 FUNC_3(!FUNC_8(VAR_6));

 if (VAR_7 != ((void*)0)) {
  *VAR_7 = VAR_9;
  FUNC_11(VAR_9);
 } else {
  FUNC_3(FUNC_9(VAR_9));
 }

 for (VAR_10 = VAR_5.ht_table[VAR_8], VAR_11 = 0; VAR_10 != ((void*)0);
     VAR_10 = VAR_10->b_hash_next, VAR_11++) {
  if (FUNC_7(VAR_6->b_spa, &VAR_6->b_dva, VAR_6->b_birth, VAR_10))
   return (VAR_10);
 }

 VAR_6->b_hash_next = VAR_5.ht_table[VAR_8];
 VAR_5.ht_table[VAR_8] = VAR_6;
 FUNC_10(VAR_6, VAR_0);


 if (VAR_11 > 0) {
  FUNC_0(VAR_3);
  if (VAR_11 == 1)
   FUNC_0(VAR_2);

  FUNC_1(VAR_1, VAR_11);
 }

 FUNC_0(VAR_4);
 FUNC_2(VAR_4);

 return (((void*)0));
}
