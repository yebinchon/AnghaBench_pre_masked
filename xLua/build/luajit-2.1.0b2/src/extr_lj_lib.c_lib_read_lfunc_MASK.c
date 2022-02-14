
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_13__ {int env; } ;
typedef TYPE_1__ lua_State ;
typedef int ls ;
struct TYPE_15__ {int firstline; } ;
struct TYPE_14__ {char const* p; char const* pe; int c; int level; int * chunkname; TYPE_1__* L; } ;
typedef TYPE_2__ LexState ;
typedef int GCtab ;
typedef int GCstr ;
typedef TYPE_3__ GCproto ;
typedef int GCfunc ;
typedef int BCLine ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 int * FUNC_1 (TYPE_1__*,TYPE_3__*,int ) ;
 int * FUNC_2 (TYPE_1__*,char const*,int) ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,int *) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static const uint8_t *FUNC_7(lua_State *VAR_3, const uint8_t *VAR_4, GCtab *VAR_5)
{
  int VAR_6 = *VAR_4++;
  GCstr *VAR_7 = FUNC_2(VAR_3, (const char *)VAR_4, VAR_6);
  LexState VAR_8;
  GCproto *VAR_9;
  GCfunc *VAR_10;
  FUNC_4(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.L = VAR_3;
  VAR_8.p = (const char *)(VAR_4+VAR_6);
  VAR_8.pe = (const char *)~(uintptr_t)0;
  VAR_8.c = -1;
  VAR_8.level = (VAR_1|(VAR_2*VAR_0));
  VAR_8.chunkname = VAR_7;
  VAR_9 = FUNC_0(&VAR_8);
  VAR_9->firstline = ~(BCLine)0;
  VAR_10 = FUNC_1(VAR_3, VAR_9, FUNC_6(VAR_3->env));

  FUNC_5(VAR_3, FUNC_3(VAR_3, VAR_5, VAR_7), VAR_10);
  return (const uint8_t *)VAR_8.p;
}
