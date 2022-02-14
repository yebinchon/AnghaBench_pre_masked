
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int kmutex_t ;
typedef int dva_t ;
typedef int blkptr_t ;
struct TYPE_5__ {struct TYPE_5__* b_hash_next; } ;
typedef TYPE_1__ arc_buf_hdr_t ;
struct TYPE_6__ {TYPE_1__** ht_table; } ;


 int * FUNC_0 (int const*) ;
 size_t FUNC_1 (int const*) ;
 size_t FUNC_2 (size_t,int const*,size_t) ;
 int * FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (size_t,int const*,size_t,TYPE_1__*) ;
 TYPE_2__ VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static arc_buf_hdr_t *
FUNC_7(uint64_t VAR_1, const blkptr_t *VAR_2, kmutex_t **VAR_3)
{
 const dva_t *VAR_4 = FUNC_0(VAR_2);
 uint64_t VAR_5 = FUNC_1(VAR_2);
 uint64_t VAR_6 = FUNC_2(VAR_1, VAR_4, VAR_5);
 kmutex_t *VAR_7 = FUNC_3(VAR_6);
 arc_buf_hdr_t *VAR_8;

 FUNC_5(VAR_7);
 for (VAR_8 = VAR_0.ht_table[VAR_6]; VAR_8 != ((void*)0);
     VAR_8 = VAR_8->b_hash_next) {
  if (FUNC_4(VAR_1, VAR_4, VAR_5, VAR_8)) {
   *VAR_3 = VAR_7;
   return (VAR_8);
  }
 }
 FUNC_6(VAR_7);
 *VAR_3 = ((void*)0);
 return (((void*)0));
}
