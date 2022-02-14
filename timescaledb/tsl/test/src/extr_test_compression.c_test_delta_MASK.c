
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; int is_null; int is_done; } ;
typedef int DeltaDeltaCompressor ;
typedef int DecompressionIterator ;
typedef TYPE_1__ DecompressResult ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *,int) ;
 int * FUNC_9 (int ,int ) ;
 TYPE_1__ FUNC_10 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_11()
{
 DeltaDeltaCompressor *VAR_2 = FUNC_7();
 Datum VAR_3;
 DecompressionIterator *VAR_4;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < 1015; VAR_5++)
  FUNC_8(VAR_2, VAR_5);

 VAR_3 = FUNC_4(VAR_1, FUNC_5(VAR_2));
 FUNC_0(FUNC_3(VAR_3) != ((void*)0));
 FUNC_1(FUNC_6(FUNC_3(VAR_3)), 56);

 VAR_5 = 0;
 VAR_4 = FUNC_9(VAR_3, VAR_0);
 for (DecompressResult VAR_6 = FUNC_10(VAR_4); !VAR_6.is_done;
   VAR_6 = FUNC_10(VAR_4))
 {
  FUNC_0(!VAR_6.is_null);
  FUNC_1(FUNC_2(VAR_6.val), VAR_5);
  VAR_5 += 1;
 }
 FUNC_1(VAR_5, 1015);
}
