
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iovec {scalar_t__ iov_len; int iov_base; } ;
struct imsgbuf {int dummy; } ;
struct ibuf {int fd; } ;
typedef int pid_t ;


 int FUNC_0 (struct ibuf*,int ,scalar_t__) ;
 int FUNC_1 (struct imsgbuf*,struct ibuf*) ;
 struct ibuf* FUNC_2 (struct imsgbuf*,int ,int ,int ,int) ;

int
FUNC_3(struct imsgbuf *VAR_0, uint32_t VAR_1, uint32_t VAR_2, pid_t VAR_3,
    int VAR_4, const struct iovec *VAR_5, int VAR_6)
{
 struct ibuf *VAR_7;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  VAR_9 += VAR_5[VAR_8].iov_len;

 if ((VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_9)) == ((void*)0))
  return (-1);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
  if (FUNC_0(VAR_7, VAR_5[VAR_8].iov_base, VAR_5[VAR_8].iov_len) == -1)
   return (-1);

 VAR_7->fd = VAR_4;

 FUNC_1(VAR_0, VAR_7);

 return (1);
}
