
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__* FUNC_1 (scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_5)
{
  uint32_t VAR_6, VAR_7;
  VAR_5 += 4;
  VAR_5 = FUNC_1(VAR_5, &VAR_7);
  VAR_5 = FUNC_1(VAR_5, &VAR_7);
  VAR_5 = FUNC_1(VAR_5, &VAR_7);
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++, VAR_5 += 4) {
    uint8_t VAR_8 = VAR_5[VAR_4 ? 3 : 0];
    uint8_t VAR_9 = VAR_5[VAR_4 ? 2 : 1];
    uint8_t VAR_10 = VAR_5[VAR_4 ? 1 : 2];
    uint8_t VAR_11 = VAR_5[VAR_4 ? 0 : 3];
    if (!VAR_2 && VAR_8 == VAR_1 && VAR_10 == ~VAR_3+1) {
      VAR_8 = VAR_0; VAR_10++;
    }
    VAR_5[FUNC_0(0, 3)] = VAR_8;
    VAR_5[FUNC_0(1, 2)] = VAR_9;
    VAR_5[FUNC_0(2, 1)] = VAR_10;
    VAR_5[FUNC_0(3, 0)] = VAR_11;
  }
}
