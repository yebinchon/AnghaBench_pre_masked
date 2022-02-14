
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_4__ {scalar_t__ is_default; } ;
typedef TYPE_1__ WithClauseResult ;
typedef int Oid ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;

__attribute__((used)) static int64
FUNC_1(Oid VAR_4, WithClauseResult *VAR_5, int64 VAR_6)
{
 if (VAR_5[VAR_0].is_default)
 {
  return (VAR_6 < VAR_1) ?
       VAR_2 * VAR_6 :
       VAR_3;
 }
 return FUNC_0(VAR_4,
              VAR_5,
              VAR_6);
}
