
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kiocb {int dummy; } ;
struct iovec {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct iovec const*,unsigned long*,size_t*,int ) ;
 scalar_t__ FUNC_1 (struct kiocb*,struct iovec const*,unsigned long,size_t,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct kiocb *VAR_2, const struct iovec *VAR_3,
    unsigned long VAR_4, loff_t VAR_5)
{
 ssize_t VAR_6;
 size_t VAR_7;

 VAR_6 = FUNC_0(VAR_3, &VAR_4, &VAR_7, VAR_1);
 if (VAR_6)
  return (VAR_6);

 return (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7,
     VAR_0, 0));
}
