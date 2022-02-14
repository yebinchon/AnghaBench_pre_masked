
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (void*,size_t,int ,int ,int,int ) ;
 uintptr_t FUNC_2 () ;
 int FUNC_3 (void*,size_t) ;

__attribute__((used)) static void *FUNC_4(size_t VAR_10)
{

  static uintptr_t VAR_11 = 0;
  static uintptr_t VAR_12 = 0;
  int VAR_13 = VAR_9;
  int VAR_14;
  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
    void *VAR_15 = FUNC_1((void *)VAR_11, VAR_10, VAR_8, VAR_7, -1, 0);
    uintptr_t VAR_16 = (uintptr_t)VAR_15;
    if ((VAR_16 >> VAR_1) == 0 && VAR_16 >= VAR_3) {

      VAR_11 = VAR_16 + VAR_10;
      VAR_9 = VAR_13;
      return VAR_15;
    }
    if (VAR_15 != VAR_6) {
      FUNC_3(VAR_15, VAR_10);
    } else if (VAR_9 == VAR_0) {
      return VAR_6;
    }
    if (VAR_11) {

      if (VAR_14 < VAR_2) {
 VAR_11 += 0x1000000;
 if (((VAR_11 + VAR_10) >> VAR_1) != 0)
   VAR_11 = 0;
 continue;
      } else if (VAR_14 == VAR_2) {

 VAR_11 = 0;
 continue;
      }
    }

    if (FUNC_0(VAR_12 == 0)) {
      VAR_12 = FUNC_2();
    }

    VAR_11 ^= VAR_16 & ~((uintptr_t)(VAR_5-1));
    do {
      VAR_12 = VAR_12 * 1103515245 + 12345;
      VAR_11 ^= VAR_12 * (uintptr_t)VAR_5;
      VAR_11 &= (((uintptr_t)1 << VAR_1)-1);
    } while (VAR_11 < VAR_3);
  }
  VAR_9 = VAR_13;
  return VAR_6;
}
