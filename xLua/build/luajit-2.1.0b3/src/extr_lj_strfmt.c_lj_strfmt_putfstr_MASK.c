
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; } ;
typedef int SFormat ;
typedef int SBuf ;
typedef scalar_t__ MSize ;
typedef TYPE_1__ GCstr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (int *,scalar_t__) ;
 char* FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (TYPE_1__*) ;

SBuf *FUNC_6(SBuf *VAR_1, SFormat VAR_2, GCstr *VAR_3)
{
  MSize VAR_4 = VAR_3->len <= FUNC_0(VAR_2) ? VAR_3->len : FUNC_0(VAR_2);
  MSize VAR_5 = FUNC_1(VAR_2);
  char *VAR_6 = FUNC_2(VAR_1, VAR_5 > VAR_4 ? VAR_5 : VAR_4);
  if ((VAR_2 & VAR_0)) VAR_6 = FUNC_3(VAR_6, FUNC_5(VAR_3), VAR_4);
  while (VAR_5-- > VAR_4) *VAR_6++ = ' ';
  if (!(VAR_2 & VAR_0)) VAR_6 = FUNC_3(VAR_6, FUNC_5(VAR_3), VAR_4);
  FUNC_4(VAR_1, VAR_6);
  return VAR_1;
}
