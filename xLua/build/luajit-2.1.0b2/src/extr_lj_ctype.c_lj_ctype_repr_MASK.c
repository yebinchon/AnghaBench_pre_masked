
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int lua_State ;
typedef int global_State ;
struct TYPE_11__ {int ok; int * pb; int * pe; scalar_t__ needsp; int * L; int cts; int * buf; } ;
struct TYPE_10__ {int len; } ;
typedef TYPE_1__ GCstr ;
typedef int CTypeID ;
typedef TYPE_2__ CTRepr ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_1__* FUNC_5 (int *,int *,int) ;
 TYPE_1__* FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_1__*) ;

GCstr *FUNC_8(lua_State *VAR_1, CTypeID VAR_2, GCstr *VAR_3)
{
  global_State *VAR_4 = FUNC_0(VAR_1);
  CTRepr VAR_5;
  VAR_5.pb = VAR_5.pe = &VAR_5.buf[VAR_0/2];
  VAR_5.cts = FUNC_2(VAR_4);
  VAR_5.L = VAR_1;
  VAR_5.ok = 1;
  VAR_5.needsp = 0;
  if (VAR_3) FUNC_3(&VAR_5, FUNC_7(VAR_3), VAR_3->len);
  FUNC_4(&VAR_5, VAR_2);
  if (FUNC_1(!VAR_5.ok)) return FUNC_6(VAR_1, "?");
  return FUNC_5(VAR_1, VAR_5.pb, VAR_5.pe - VAR_5.pb);
}
