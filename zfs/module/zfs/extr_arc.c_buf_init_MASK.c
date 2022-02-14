
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int arc_buf_t ;
struct TYPE_4__ {int ht_mask; TYPE_1__* ht_locks; int * ht_table; } ;
struct TYPE_3__ {int ht_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__ VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int * VAR_21 ;
 void* FUNC_2 (char*,int,int ,int ,int ,int *,int *,int *,int ) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int * FUNC_5 (int,int ) ;
 int VAR_22 ;
 int* VAR_23 ;

__attribute__((used)) static void
FUNC_6(void)
{
 uint64_t *VAR_24 = ((void*)0);
 uint64_t VAR_25 = 1ULL << 12;
 int VAR_26, VAR_27;







 while (VAR_25 * VAR_22 < FUNC_1())
  VAR_25 <<= 1;
retry:
 VAR_11.ht_mask = VAR_25 - 1;
 VAR_11.ht_table =
     FUNC_3(VAR_25 * sizeof (void*), VAR_4);

 if (VAR_11.ht_table == ((void*)0)) {
  FUNC_0(VAR_25 > (1ULL << 8));
  VAR_25 >>= 1;
  goto retry;
 }

 VAR_12 = FUNC_2("arc_buf_hdr_t_full", VAR_2,
     0, VAR_13, VAR_17, VAR_21, ((void*)0), ((void*)0), 0);
 VAR_14 = FUNC_2("arc_buf_hdr_t_full_crypt",
     VAR_1, 0, VAR_15, VAR_16,
     VAR_21, ((void*)0), ((void*)0), 0);
 VAR_18 = FUNC_2("arc_buf_hdr_t_l2only",
     VAR_3, 0, VAR_19, VAR_20, VAR_21,
     ((void*)0), ((void*)0), 0);
 VAR_8 = FUNC_2("arc_buf_t", sizeof (arc_buf_t),
     0, VAR_9, VAR_10, ((void*)0), ((void*)0), ((void*)0), 0);

 for (VAR_26 = 0; VAR_26 < 256; VAR_26++)
  for (VAR_24 = VAR_23 + VAR_26, *VAR_24 = VAR_26, VAR_27 = 8; VAR_27 > 0; VAR_27--)
   *VAR_24 = (*VAR_24 >> 1) ^ (-(*VAR_24 & 1) & VAR_7);

 for (VAR_26 = 0; VAR_26 < VAR_0; VAR_26++) {
  FUNC_4(&VAR_11.ht_locks[VAR_26].ht_lock,
      ((void*)0), VAR_6, ((void*)0));
 }
}
