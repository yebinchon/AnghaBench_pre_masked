
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0 (int VAR_0) {
  return (VAR_0 < 8) ? VAR_0 : ((VAR_0 & 7) + 8) << ((VAR_0 >> 3) - 1);
}
