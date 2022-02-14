
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IROp ;
typedef int GCstr ;






 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2(GCstr *VAR_0, GCstr *VAR_1, IROp VAR_2)
{
  int VAR_3 = FUNC_0(VAR_0, VAR_1);
  switch (VAR_2) {
  case 128: return (VAR_3 < 0);
  case 131: return (VAR_3 >= 0);
  case 129: return (VAR_3 <= 0);
  case 130: return (VAR_3 > 0);
  default: FUNC_1(0); return 0;
  }
}
