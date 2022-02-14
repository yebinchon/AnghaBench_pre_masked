
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LWLock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static LWLock *
FUNC_2()
{
 LWLock **VAR_2 = (LWLock **) FUNC_1(VAR_1);

 if (*VAR_2 == ((void*)0))
  FUNC_0(VAR_0, "LWLock for coordinating parallel workers not initialized");

 return *VAR_2;
}
