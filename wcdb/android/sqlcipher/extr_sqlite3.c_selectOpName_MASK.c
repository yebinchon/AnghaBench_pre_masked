
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(int VAR_0){
  char *VAR_1;
  switch( VAR_0 ){
    case 130: VAR_1 = "UNION ALL"; break;
    case 128: VAR_1 = "INTERSECT"; break;
    case 129: VAR_1 = "EXCEPT"; break;
    default: VAR_1 = "UNION"; break;
  }
  return VAR_1;
}
