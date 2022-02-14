
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {char* iov_base; int iov_len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,size_t) ;
 size_t FUNC_2 (size_t,int ) ;

void
FUNC_3(struct iovec *VAR_0, void *VAR_1, size_t VAR_2)
{
 const char *VAR_3;
 char *VAR_4;
 size_t VAR_5;

 VAR_4 = VAR_1;
 while (VAR_2) {
  FUNC_0(VAR_0->iov_len);
  VAR_5 = FUNC_2(VAR_2, VAR_0->iov_len);
  VAR_3 = VAR_0->iov_base;
  FUNC_1(VAR_3, VAR_4, VAR_5);
  VAR_0++;
  VAR_4 += VAR_5;
  VAR_2 -= VAR_5;
 }
}
