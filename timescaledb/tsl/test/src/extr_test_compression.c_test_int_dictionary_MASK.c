
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; int is_null; int is_done; } ;
typedef int DictionaryCompressor ;
typedef int DictionaryCompressed ;
typedef int DecompressionIterator ;
typedef TYPE_1__ DecompressResult ;


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
 int * FUNC_9 (int ,int ) ;

__attribute__((used)) static void
FUNC_10()
{
 DictionaryCompressor *VAR_1 = FUNC_5(VAR_0);
 DictionaryCompressed *VAR_2;
 DecompressionIterator *VAR_3;
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 1015; VAR_4++)
  FUNC_6(VAR_1, FUNC_3(VAR_4 % 15));

 VAR_2 = FUNC_7(VAR_1);
 FUNC_0(VAR_2 != ((void*)0));

 VAR_4 = 0;
 VAR_3 = FUNC_9(FUNC_4(VAR_2),
                 VAR_0);
 for (DecompressResult VAR_5 = FUNC_8(VAR_3); !VAR_5.is_done;
   VAR_5 = FUNC_8(VAR_3))
 {
  FUNC_0(!VAR_5.is_null);
  FUNC_1(FUNC_2(VAR_5.val), VAR_4 % 15);
  VAR_4 += 1;
 }
 FUNC_1(VAR_4, 1015);
}
