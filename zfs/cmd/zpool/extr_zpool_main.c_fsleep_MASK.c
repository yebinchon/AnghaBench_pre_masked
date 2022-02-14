
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {float tv_nsec; scalar_t__ tv_sec; } ;


 float VAR_0 ;
 scalar_t__ FUNC_0 (float) ;
 int FUNC_1 (struct timespec*,int *) ;

__attribute__((used)) static void
FUNC_2(float VAR_1)
{
 struct timespec VAR_2;
 VAR_2.tv_sec = FUNC_0(VAR_1);
 VAR_2.tv_nsec = (VAR_1 - (float)VAR_2.tv_sec) * VAR_0;
 FUNC_1(&VAR_2, ((void*)0));
}
