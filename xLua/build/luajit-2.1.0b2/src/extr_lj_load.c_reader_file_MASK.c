
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {char const* buf; int fp; } ;
typedef TYPE_1__ FileReaderCtx ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 size_t FUNC_2 (char const*,int,int,int ) ;

__attribute__((used)) static const char *FUNC_3(lua_State *VAR_0, void *VAR_1, size_t *VAR_2)
{
  FileReaderCtx *VAR_3 = (FileReaderCtx *)VAR_1;
  FUNC_0(VAR_0);
  if (FUNC_1(VAR_3->fp)) return ((void*)0);
  *VAR_2 = FUNC_2(VAR_3->buf, 1, sizeof(VAR_3->buf), VAR_3->fp);
  return *VAR_2 > 0 ? VAR_3->buf : ((void*)0);
}
