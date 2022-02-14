
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {void* iov_base; size_t iov_len; } ;
typedef int ssize_t ;


 int FUNC_0 (int,struct iovec*,int) ;

ssize_t FUNC_1(int VAR_0, const void *VAR_1, size_t VAR_2)
{
    struct iovec VAR_3 = { .iov_base = (void*)VAR_1, .iov_len = VAR_2 };
    return FUNC_0(VAR_0, &VAR_3, 1);
}
