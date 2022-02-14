
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; int is_null; int is_done; } ;
typedef int DecompressionIterator ;
typedef TYPE_1__ DecompressResult ;
typedef int ArrayCompressor ;
typedef int ArrayCompressed ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *) ;
 TYPE_1__ FUNC_8 (int *) ;
 TYPE_1__ FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ,int ) ;

__attribute__((used)) static void
FUNC_12()
{
 ArrayCompressor *VAR_1 = FUNC_5(VAR_0);
 ArrayCompressed *VAR_2;
 DecompressionIterator *VAR_3;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 1015; VAR_4++)
  FUNC_6(VAR_1, FUNC_3(VAR_4));

 VAR_2 = FUNC_7(VAR_1);
 FUNC_0(VAR_2 != ((void*)0));

 VAR_4 = 0;
 VAR_3 =
  FUNC_10(FUNC_4(VAR_2), VAR_0);
 for (DecompressResult VAR_5 = FUNC_8(VAR_3); !VAR_5.is_done;
   VAR_5 = FUNC_8(VAR_3))
 {
  FUNC_0(!VAR_5.is_null);
  FUNC_1(FUNC_2(VAR_5.val), VAR_4);
  VAR_4 += 1;
 }
 FUNC_1(VAR_4, 1015);

 VAR_3 =
  FUNC_11(FUNC_4(VAR_2), VAR_0);
 for (DecompressResult VAR_6 = FUNC_9(VAR_3); !VAR_6.is_done;
   VAR_6 = FUNC_9(VAR_3))
 {
  FUNC_0(!VAR_6.is_null);
  FUNC_1(FUNC_2(VAR_6.val), VAR_4 - 1);
  VAR_4 -= 1;
 }
 FUNC_1(VAR_4, 0);
}
