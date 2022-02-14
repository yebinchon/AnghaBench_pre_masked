
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (int,struct iovec const*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(int VAR_1, const struct iovec *VAR_2, int VAR_3, off_t VAR_4)
{
 off_t VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_0);
 FUNC_0(VAR_5 == VAR_4);
 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
