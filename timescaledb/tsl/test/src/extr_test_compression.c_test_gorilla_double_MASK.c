
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; int is_null; int is_done; } ;
typedef int GorillaCompressor ;
typedef int GorillaCompressed ;
typedef int DecompressionIterator ;
typedef TYPE_1__ DecompressResult ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,double) ;
 int FUNC_2 (double,int) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 double FUNC_5 (int *) ;
 int FUNC_6 (double) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *) ;
 int * FUNC_10 (int ,int ) ;
 int * FUNC_11 (int ,int ) ;
 TYPE_1__ FUNC_12 (int *) ;
 TYPE_1__ FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14()
{
 GorillaCompressor *VAR_1 = FUNC_7();
 GorillaCompressed *VAR_2;
 DecompressionIterator *VAR_3;
 double VAR_4;
 for (VAR_4 = 0.0; VAR_4 < 1015.0; VAR_4++)
  FUNC_8(VAR_1, FUNC_6(VAR_4));

 VAR_2 = FUNC_9(VAR_1);
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_2(FUNC_5(VAR_2), 1200);

 VAR_4 = 0;
 VAR_3 =
  FUNC_10(FUNC_4(VAR_2), VAR_0);
 for (DecompressResult VAR_5 = FUNC_12(VAR_3); !VAR_5.is_done;
   VAR_5 = FUNC_12(VAR_3))
 {
  FUNC_0(!VAR_5.is_null);
  FUNC_1(FUNC_3(VAR_5.val), VAR_4);
  VAR_4 += 1.0;
 }
 FUNC_2(VAR_4, 1015);

 VAR_3 =
  FUNC_11(FUNC_4(VAR_2), VAR_0);
 for (DecompressResult VAR_6 = FUNC_13(VAR_3); !VAR_6.is_done;
   VAR_6 = FUNC_13(VAR_3))
 {
  FUNC_0(!VAR_6.is_null);
  FUNC_1(FUNC_3(VAR_6.val), VAR_4 - 1);
  VAR_4 -= 1;
 }
 FUNC_2(VAR_4, 0);
}
