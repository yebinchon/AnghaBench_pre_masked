
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ u32; int id; } ;
struct TYPE_11__ {char c; int mode; TYPE_1__ val; int sb; } ;
struct TYPE_10__ {scalar_t__ i; } ;
typedef TYPE_2__ TValue ;
typedef scalar_t__ StrScanFmt ;
typedef int CPToken ;
typedef TYPE_3__ CPState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,char) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int const*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static CPToken FUNC_6(CPState *VAR_8)
{
  StrScanFmt VAR_9;
  TValue VAR_10;
  do { FUNC_2(VAR_8, VAR_8->c); } while (FUNC_3(FUNC_1(VAR_8)));
  FUNC_2(VAR_8, '\0');
  VAR_9 = FUNC_4((const uint8_t *)FUNC_5(&VAR_8->sb), &VAR_10, VAR_6);
  if (VAR_9 == VAR_5) VAR_8->val.id = VAR_1;
  else if (VAR_9 == VAR_7) VAR_8->val.id = VAR_2;
  else if (!(VAR_8->mode & VAR_0))
    FUNC_0(VAR_8, VAR_3, VAR_4);
  VAR_8->val.u32 = (uint32_t)VAR_10.i;
  return VAR_3;
}
