
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int LOCKTAG ;
typedef int LOCKMODE ;
typedef scalar_t__ JobLockLifetime ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static bool
FUNC_2(int32 VAR_3, LOCKMODE VAR_4, JobLockLifetime VAR_5, LOCKTAG *VAR_6, bool VAR_7)
{

 FUNC_1(*VAR_6, VAR_1, VAR_3, 0);

 return FUNC_0(VAR_6, VAR_4, VAR_5 == VAR_2, !VAR_7) != VAR_0;
}
