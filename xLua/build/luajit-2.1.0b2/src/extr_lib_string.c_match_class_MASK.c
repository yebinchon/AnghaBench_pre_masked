
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, int VAR_2)
{
  if ((VAR_2 & 0xc0) == 0x40) {
    int VAR_3 = VAR_0[(VAR_2&0x1f)];
    if (VAR_3) {
      VAR_3 = FUNC_0(VAR_1, VAR_3);
      return (VAR_2 & 0x20) ? VAR_3 : !VAR_3;
    }
    if (VAR_2 == 'z') return VAR_1 == 0;
    if (VAR_2 == 'Z') return VAR_1 != 0;
  }
  return (VAR_2 == VAR_1);
}
